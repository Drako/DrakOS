CC			= gcc
CXX			= g++
AS			= nasm
LD			= ld

CFLAGS		= -nostdlib -nostdinc -ffreestanding -fno-builtin -fno-stack-protector -O3 -Wall -m32 -I./include -std=c99
CXXFLAGS	= -nostdlib -nostdinc -ffreestanding -fno-builtin -fno-stack-protector -O3 -Wall -m32 -I./include -fno-rtti -fno-exceptions -std=c++11
LDFLAGS		= -Tlink.ld -melf_i386
ASFLAGS		= -f elf32

CXXSOURCES	= $(wildcard *.cxx) $(wildcard **/*.cxx)
CSOURCES	= $(wildcard *.c) $(wildcard **/*.c)
ASSOURCES	= $(wildcard *.asm) $(wildcard **/*.asm)
CXXOBJECTS  	= $(CXXSOURCES:.cxx=.o)
COBJECTS    	= $(CSOURCES:.c=.o)
ASOBJECTS	= $(ASSOURCES:.asm=.o)

TARGET = DrakOS.krn

all: ${TARGET}

# must be executed as root
floppy: ${TARGET}
	mkdir floppy
	mount -oloop ./floppy.img ./floppy
	cp -fv ${TARGET} ./floppy/boot/DrakOS.krn
	umount ./floppy
	rmdir ./floppy

# must be executed as root (or someone with write access to /boot)
install: ${TARGET}
	cp -f $< /boot/DrakOS.krn

${TARGET}: ${ASOBJECTS} ${COBJECTS} ${CXXOBJECTS}
	${LD} ${LDFLAGS} -o $@ $^

%.o: %.asm
	${AS} ${ASFLAGS} -o $@ $<

%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $<

%.o: %.cxx
	${CXX} -c ${CXXFLAGS} -o $@ $<

.PHONY: clean
clean:
	rm -f ${CXXOBJECTS}
	rm -f ${COBJECTS}
	rm -f ${ASOBJECTS}
	rm -f ${TARGET}

