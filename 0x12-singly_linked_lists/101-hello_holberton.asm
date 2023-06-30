section .data
	format db 'Hello, Holberton', 0
	newline db 10, 0

section .text
	extern printf

global main

main:
	sub rsp, 8               ; align stack

	lea rdi, [format]
	xor eax, eax             ; clear eax
	call printf

	lea rdi, [newline]
	call printf

	add rsp, 8               ; restore stack

	xor eax, eax             ; clear eax
	ret

