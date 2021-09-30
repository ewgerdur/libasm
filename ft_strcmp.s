global ft_strcmp

section .text
ft_strcmp:
	mov rax, 0
    mov r13, 0
loop:
    movzx r11, byte[rsi + r13]
    movzx r12, byte[rdi + r13]
    cmp r11, 0
	je exit
    cmp r12, 0
	je exit
    cmp r11b, r12b
    jne exit
	inc	r13	
	jmp loop					
exit:
    sub r12, r11
    mov rax, r12
	ret