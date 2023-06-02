section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Prepare the arguments for printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax ; Clear the rax register

    ; Call printf
    call printf

    ; Print a new line
    mov rdi, format
    mov rsi, newline
    xor rax, rax ; Clear the rax register

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0x60
    xor edi, edi
    syscall

