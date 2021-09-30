global ft_strcpy

section .text
ft_strcpy:
	mov rax, 0
	cmp rdi, 0
	je exit
	cmp rsi, 0
	je exit
	mov r12, 0
	jmp loop
loop:
	cmp byte[rsi +r12], 0 
	je exit
	mov r13b, byte[rsi + r12]
    mov byte[rdi + r12], r13b
    inc r12		
	jmp loop					
exit:
    mov byte[rdi + r12], 0
    mov rax, rdi
	ret