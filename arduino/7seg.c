// .org 0x0000
//     rjmp START

// START:
//     ldi r16, 0xFF    ; Set all pins on port D as output
//     out DDRD, r16 

// LOOP:
//     ; Display number 0 (binary: 00111111)
//     ldi r16, 0x3F
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 1 (binary: 00000110)
//     ldi r16, 0x06
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 2 (binary: 01011011)
//     ldi r16, 0x5B
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 3 (binary: 01001111)
//     ldi r16, 0x4F
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 4 (binary: 01100110)
//     ldi r16, 0x66
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 5 (binary: 01101101)
//     ldi r16, 0x6D
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 6 (binary: 01111101)
//     ldi r16, 0x7D
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 7 (binary: 00000111)
//     ldi r16, 0x07
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 8 (binary: 01111111)
//     ldi r16, 0x7F
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     ; Display number 9 (binary: 01101111)
//     ldi r16, 0x6F
//     call displayNumber
//     ldi r18, 100
//     call delay_ms

//     rjmp LOOP

// delay_ms:
//     ; Delay subroutine
//     ; Each loop takes approximately 1ms at 16MHz
//     ldi r20, 100      ; Outer loop counter
// OUTER_LOOP:
//     ldi r21, 250     ; Inner loop counter
// INNER_LOOP:
//     dec r21          ; Decrement inner loop counter
//     brne INNER_LOOP  ; Continue inner loop if not zero
//     dec r20          ; Decrement outer loop counter
//     brne OUTER_LOOP  ; Continue outer loop if not zero
//     dec r18          ; Decrement delay counter
//     brne delay_ms    ; Repeat delay if not zero
//     ret

// displayNumber:
//     com r16           ; Invert bits
//     out PORTD, r16    ; Output pattern to port D
//     ret