/*

#define LED_PIN 13  // Pin connected to the LED

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn on LED
  delay(1000);  // Wait for 1 second
  digitalWrite(LED_PIN, LOW); // Turn off LED
  delay(1000);  // Wait for 1 second
}


*/

// .ORG 0x0000
// rjmp START

// START:
// ldi r16, 0xFF ; set all pins on port B as output
// out DDRB, r16 

// LOOP:
// sbi PortB,5 ; turn on the LED at pin 5
// rcall DELAY ; delay
// cbi PortB,5 ; turn off the LED at pin 5
// rcall DELAY ; delay
// rjmp LOOP ; repeat the loop

// DELAY:
// ldi r18, 255 ; outer loop counter
// OUTER_LOOP:
// ldi r19, 255 ; inner loop counter
// INNER_LOOP:
// dec r19 ; decrement inner loop counter
// brne INNER_LOOP ; continue inner loop if not zero
// dec r18 ; decrement outer loop counter
// brne OUTER_LOOP ; continue outer loop if not zero
// ret
