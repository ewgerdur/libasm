global ft_strdup

extern __errno_location
extern ft_strlen
extern ft_strcpy
extern malloc


section .text
ft_strdup:
	mov r12, rdi
    call ft_strlen
	inc rax
    mov rdi, rax
    call malloc
	cmp rax, 0 
	je exit
    mov rdi, rax
    mov rsi, r12
    call ft_strcpy		
	ret
				
exit:
    call __errno_location
    mov qword[rax], 12
    mov rax, 0
	ret