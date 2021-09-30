global ft_write

extern __errno_location

section .text
ft_write:
    mov rax, 1
    syscall
    cmp rax, 0
    jl error
    ret
error:
    mov r10, rax
    neg r10
    call __errno_location
    mov [rax], r10
    mov rax, -1
    ret