[Bits 32]

global start
extern main

FLAGS       equ 3
MAGIC       equ 0x1BADB002
CHECKSUM    equ -(MAGIC + FLAGS)

section .text

align 4
    dd MAGIC
    dd FLAGS
    dd CHECKSUM

STACKSIZE equ 0x4000

start:
    mov esp, stack + STACKSIZE
    push eax
    push ebx

    call main

    cli
.hang:
    hlt
    jmp .hang

section .bss

align 4
stack:
    resb STACKSIZE

