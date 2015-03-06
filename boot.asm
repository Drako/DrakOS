[Bits 32]

global start
extern main

FLAGS       equ 7
MAGIC       equ 0x1BADB002
CHECKSUM    equ -(MAGIC + FLAGS)

section .text

align 4
    dd MAGIC
    dd FLAGS
    dd CHECKSUM

    dd 0 ; linear graphics mode
    dd 1366 ; width
    dd 768 ; height
    dd 24 ; depth

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

