; Author : shiva
;blink.asm

.ORG 0x0000
rjmp START

START:
ldi r16, 0xFF ; set all pins on port B as output
out DDRB, r16 

LOOP:
sbi PortB,5 ; turn on the LED at pin 5
rcall DELAY ; delay
cbi PortB,5 ; turn off the LED at pin 5
rcall DELAY ; delay
rjmp LOOP ; repeat the loop

DELAY:
ldi r18, 255 ; outer loop counter
OUTER_LOOP:
ldi r19, 255 ; inner loop counter
INNER_LOOP:
dec r19 ; decrement inner loop counter
brne INNER_LOOP ; continue inner loop if not zero
dec r18 ; decrement outer loop counter
brne OUTER_LOOP ; continue outer loop if not zero
ret
