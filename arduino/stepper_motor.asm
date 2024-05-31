;
; StepperMotor.asm
;
; Created: 10-04-2024 14:17:30
; Author : shiva
;


.org 0x0000
    rjmp START

START:
    ldi r16, 0xFF    ; Set all pins on port B as output
    out DDRB, r16 

LOOP:
    // rotation 1
    // ; Statement 1
    // ldi r16, 0b00000001
    // call executeStatement
    // ldi r18, 100
    // call delay_ms

    // ; Statement 2
    // ldi r16, 0b00000010
    // call executeStatement
    // ldi r18, 100
    // call delay_ms

    // ; Statement 3
    // ldi r16, 0b00000100
    // call executeStatement
    // ldi r18, 100
    // call delay_ms

    // ; Statement 4
    // ldi r16, 0b00001000
    // call executeStatement
    // ldi r18, 100
    // call delay_ms

    // rotation 2
    ; Statement 1
    ldi r16, 0b00001000
    call executeStatement
    ldi r18, 100
    call delay_ms

    

    ; Statement 2
    ldi r16, 0b00000100
    call executeStatement
    ldi r18, 100
    call delay_ms

    

    ; Statement 3
    ldi r16, 0b00000010
    call executeStatement
    ldi r18, 100
    call delay_ms

    ; Statement 4
    ldi r16, 0b00000001
    call executeStatement
    ldi r18, 100
    call delay_ms



    rjmp LOOP

delay_ms:
    ldi r20, 10      ; Outer loop counter 5
OUTER_LOOP:
    ldi r21, 25     ; Inner loop counter
INNER_LOOP:
    dec r21          ; Decrement inner loop counter
    brne INNER_LOOP  ; Continue inner loop if not zero
    dec r20          ; Decrement outer loop counter
    brne OUTER_LOOP  ; Continue outer loop if not zero
    dec r18          ; Decrement delay counter
    brne delay_ms    ; Repeat delay if not zero
    ret

executeStatement:
    out PORTB, r16    ; Output pattern to port B
	ret