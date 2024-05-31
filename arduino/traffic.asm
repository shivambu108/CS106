;
; traffic.asm
;
; Created: 08-05-2024 
; Author : shiva
;


.include "m328pdef.inc"

.org 0x0000
    rjmp START

YELLOW_LIGHT: ; Label for yellow light part
    ; Road 1 - Yellow Light
    sbi PORTD, 3      ; Turn on Yellow light for Road 1 (PORTD, bit 3)
    sbi PORTD, 6      ; Turn on Yellow light for Road 2 (PORTD, bit 6)
    ldi r18, 10      ; Delay for 1 second
    rcall DELAY
    cbi PORTD, 3      ; Turn off Yellow light for Road 1 (PORTD, bit 3)
    cbi PORTD, 6      ; Turn off Yellow light for Road 2 (PORTD, bit 6)
    ret

START:
    ldi r16, 0xFF    ; Set all pins on port B as output
    out DDRD, r16 

LOOP:
    ; Road 1 - Red Light
    sbi PORTD, 2      ; Turn on Red light for Road 1 (PORTD, bit 2)
    sbi PORTD, 7      ; Turn on Green light for Road 2 (PORTD, bit 7)
    ldi r18, 30      ; Delay for 3 seconds
    rcall DELAY
    cbi PORTD, 2      ; Turn off Red light for Road 1 (PORTD, bit 2)
    cbi PORTD, 7      ; Turn off Green light for Road 2 (PORTD, bit 7)

    ; Call the yellow light subroutine
    rcall YELLOW_LIGHT

    ; Road 1 - Green Light
    sbi PORTD, 4      ; Turn on Green light for Road 1 (PORTD, bit 4)
    sbi PORTD, 5      ; Turn on Red light for Road 2 (PORTD, bit 5)
    ldi r18, 30      ; Delay for 3 seconds
    rcall DELAY
    cbi PORTD, 4      ; Turn off Green light for Road 1 (PORTD, bit 4)
    cbi PORTD, 5      ; Turn off Red light for Road 2 (PORTD, bit 5)

    ; Call the yellow light subroutine again
    rcall YELLOW_LIGHT

    ; Repeat the loop
    rjmp LOOP

DELAY:
    ; Delay subroutine
    ; Adjust this to match your microcontroller's clock speed and the desired delay times
    ldi r19, 255     ; Outer loop counter
OUTER_LOOP:
    ldi r20, 255     ; Inner loop counter
INNER_LOOP:
    dec r20          ; Decrement inner loop counter
    brne INNER_LOOP  ; Continue inner loop if not zero
    dec r19          ; Decrement outer loop counter
    brne OUTER_LOOP  ; Continue outer loop if not zero
    dec r18          ; Decrement delay counter
    brne DELAY       ; Repeat delay if not zero
    ret