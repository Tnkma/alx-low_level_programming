; hello.asm
section .data
    message db 'Hello, Holberton', 10, 0 ; The message to print, 10 = '\n', 0 = NULL

section .text
    extern printf
    global main

main:
    ; Prepare the arguments for printf
    mov rdi, message   ; First argument is the format string
    xor rax, rax       ; Clear rax to signify there are no vector registers used

    ; Call printf
    call printf

    ; Return from main
    mov eax, 60    ; syscall number for exit is 60
    xor edi, edi   ; return code 0
    syscall        ; make syscall

