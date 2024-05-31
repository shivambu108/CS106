// .include "m328pdef.inc"

// .org 0x0000
//     rjmp START

// YELLOW_LIGHT: ; Label for yellow light part
//     ; Road 1 - Yellow Light
//     sbi PORTD, 3      ; Turn on Yellow light for Road 1 (PORTD, bit 3)
//     sbi PORTD, 6      ; Turn on Yellow light for Road 2 (PORTD, bit 6)
//     ldi r18, 10      ; Delay for 1 second
//     rcall DELAY
//     cbi PORTD, 3      ; Turn off Yellow light for Road 1 (PORTD, bit 3)
//     cbi PORTD, 6      ; Turn off Yellow light for Road 2 (PORTD, bit 6)
//     ret

// START:
//     ldi r16, 0xFF    ; Set all pins on port B as output
//     out DDRD, r16 

// LOOP:
//     ; Road 1 - Red Light
//     sbi PORTD, 2      ; Turn on Red light for Road 1 (PORTD, bit 2)
//     sbi PORTD, 7      ; Turn on Green light for Road 2 (PORTD, bit 7)
//     ldi r18, 30      ; Delay for 3 seconds
//     rcall DELAY
//     cbi PORTD, 2      ; Turn off Red light for Road 1 (PORTD, bit 2)
//     cbi PORTD, 7      ; Turn off Green light for Road 2 (PORTD, bit 7)

//     ; Call the yellow light subroutine
//     rcall YELLOW_LIGHT

//     ; Road 1 - Green Light
//     sbi PORTD, 4      ; Turn on Green light for Road 1 (PORTD, bit 4)
//     sbi PORTD, 5      ; Turn on Red light for Road 2 (PORTD, bit 5)
//     ldi r18, 30      ; Delay for 3 seconds
//     rcall DELAY
//     cbi PORTD, 4      ; Turn off Green light for Road 1 (PORTD, bit 4)
//     cbi PORTD, 5      ; Turn off Red light for Road 2 (PORTD, bit 5)

//     ; Call the yellow light subroutine again
//     rcall YELLOW_LIGHT

//     ; Repeat the loop
//     rjmp LOOP

// DELAY:
//     ; Delay subroutine
//     ; Adjust this to match your microcontroller's clock speed and the desired delay times
//     ldi r19, 255     ; Outer loop counter
// OUTER_LOOP:
//     ldi r20, 255     ; Inner loop counter
// INNER_LOOP:
//     dec r20          ; Decrement inner loop counter
//     brne INNER_LOOP  ; Continue inner loop if not zero
//     dec r19          ; Decrement outer loop counter
//     brne OUTER_LOOP  ; Continue outer loop if not zero
//     dec r18          ; Decrement delay counter
//     brne DELAY       ; Repeat delay if not zero
//     ret
























// /*

// #define RED1_PIN 2      // Pin connected to red light for road 1
// #define YELLOW1_PIN 3   // Pin connected to yellow light for road 1
// #define GREEN1_PIN 4    // Pin connected to green light for road 1
// #define RED2_PIN 5      // Pin connected to red light for road 2
// #define YELLOW2_PIN 6   // Pin connected to yellow light for road 2
// #define GREEN2_PIN 7    // Pin connected to green light for road 2

// #define DELAY_RED 3000    // Delay for red light (in milliseconds)
// #define DELAY_YELLOW 1000 // Delay for yellow light (in milliseconds)
// #define DELAY_GREEN 4000  // Delay for green light (in milliseconds)

// void setup() {
//   pinMode(RED1_PIN, OUTPUT);
//   pinMode(YELLOW1_PIN, OUTPUT);
//   pinMode(GREEN1_PIN, OUTPUT);
//   pinMode(RED2_PIN, OUTPUT);
//   pinMode(YELLOW2_PIN, OUTPUT);
//   pinMode(GREEN2_PIN, OUTPUT);
// }

// void loop() {
//   // Road 1 - Red Light
//   digitalWrite(RED1_PIN, HIGH);
//   digitalWrite(GREEN2_PIN, HIGH); // Turn on green light for road 2
//   delay(DELAY_RED);
//   digitalWrite(RED1_PIN, LOW);
//   digitalWrite(GREEN2_PIN, LOW);

//   // Road 1 - Yellow Light
//   digitalWrite(YELLOW1_PIN, HIGH);
//   digitalWrite(YELLOW2_PIN, HIGH); // Turn on yellow light for road 2
//   delay(DELAY_YELLOW);
//   digitalWrite(YELLOW1_PIN, LOW);
//   digitalWrite(YELLOW2_PIN, LOW);

//   // Road 1 - Green Light
//   digitalWrite(GREEN1_PIN, HIGH);
//   digitalWrite(RED2_PIN, HIGH); // Turn on red light for road 2
//   delay(DELAY_GREEN);
//   digitalWrite(GREEN1_PIN, LOW);
//   digitalWrite(RED2_PIN, LOW);

//   // Road 2 - Yellow Light
//   digitalWrite(YELLOW1_PIN, HIGH);
//   digitalWrite(YELLOW2_PIN, HIGH); // Turn on yellow light for road 1
//   delay(DELAY_YELLOW);
//   digitalWrite(YELLOW1_PIN, LOW);
//   digitalWrite(YELLOW2_PIN, LOW);

// }

// */