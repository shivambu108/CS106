
// .org 0x0000
//     rjmp START

// START:
//     ldi r16, 0xFF    ; Set all pins on port B as output
//     out DDRB, r16 

// LOOP:
//     // rotation 1
//     // ; Statement 1
//     // ldi r16, 0b00000001
//     // call executeStatement
//     // ldi r18, 100
//     // call delay_ms

//     // ; Statement 2
//     // ldi r16, 0b00000010
//     // call executeStatement
//     // ldi r18, 100
//     // call delay_ms

//     // ; Statement 3
//     // ldi r16, 0b00000100
//     // call executeStatement
//     // ldi r18, 100
//     // call delay_ms

//     // ; Statement 4
//     // ldi r16, 0b00001000
//     // call executeStatement
//     // ldi r18, 100
//     // call delay_ms

//     // rotation 2
//     ; Statement 1
//     ldi r16, 0b00001000
//     call executeStatement
//     ldi r18, 100
//     call delay_ms

    

//     ; Statement 2
//     ldi r16, 0b00000100
//     call executeStatement
//     ldi r18, 100
//     call delay_ms

    

//     ; Statement 3
//     ldi r16, 0b00000010
//     call executeStatement
//     ldi r18, 100
//     call delay_ms

//     ; Statement 4
//     ldi r16, 0b00000001
//     call executeStatement
//     ldi r18, 100
//     call delay_ms



//     rjmp LOOP

// delay_ms:
//     ldi r20, 10      ; Outer loop counter 5
// OUTER_LOOP:
//     ldi r21, 25     ; Inner loop counter
// INNER_LOOP:
//     dec r21          ; Decrement inner loop counter
//     brne INNER_LOOP  ; Continue inner loop if not zero
//     dec r20          ; Decrement outer loop counter
//     brne OUTER_LOOP  ; Continue outer loop if not zero
//     dec r18          ; Decrement delay counter
//     brne delay_ms    ; Repeat delay if not zero
//     ret

// executeStatement:
//     out PORTB, r16    ; Output pattern to port B
// 	ret




















// // //
// // // StepperMotor.asm
// // //
// // // Created: 10-04-2024 14:17:30
// // // Author : shiva
// // //


// // .org 0x0000
// //     rjmp START

// // START:
// //     ldi r16, 0xFF    // Set all pins on port D as output
// //     out DDRD, r16 

// // LOOP:
// //     // Clockwise rotation
// //     // Statement 1
// //     ldi r16, 0b00000001
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms
 
// //     // Statement 2
// //     ldi r16, 0b00000010
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Statement 3
// //     ldi r16, 0b00000100
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Statement 4
// //     ldi r16, 0b00001000
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Anticlockwise rotation
// //     // Statement 1
// //     ldi r16, 0b00001000
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Statement 2
// //     ldi r16, 0b00000100
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Statement 3
// //     ldi r16, 0b00000010
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     // Statement 4
// //     ldi r16, 0b00000001
// //     call output_D
// //     ldi r18, 100
// //     call delay_ms

// //     rjmp LOOP

// // delay_ms:
// //     ldi r20, 10      // Outer loop counter 10
// // OUTER_LOOP:
// //     ldi r21, 25     // Inner loop counter
// // INNER_LOOP:
// //     dec r21          // Decrement inner loop counter
// //     brne INNER_LOOP  // Continue inner loop if not zero
// //     dec r20          // Decrement outer loop counter
// //     brne OUTER_LOOP  // Continue outer loop if not zero
// //     dec r18          // Decrement delay counter
// //     brne delay_ms    // Repeat delay if not zero
// //     ret

// // output_D:
// //     out PORTD, r16    // Output pattern to port D
// // 	ret
// // /*Sure, I'd be happy to explain this code. This is a delay function written in assembly language for AVR microcontrollers. Here's a step-by-step explanation:

// // 1. `ldi r20, 10`: This line loads the number 10 into register `r20`. This sets up an outer loop that will run 10 times.

// // 2. `OUTER_LOOP:`: This is a label that marks the beginning of the outer loop.

// // 3. `ldi r21, 25`: This line loads the number 25 into register `r21`. This sets up an inner loop that will run 25 times for each iteration of the outer loop.

// // 4. `INNER_LOOP:`: This is a label that marks the beginning of the inner loop.

// // 5. `dec r21`: This line decrements the value in register `r21` by 1.

// // 6. `brne INNER_LOOP`: This line stands for "Branch if Not Equal to Zero". If the value in `r21` is not zero (which means the inner loop hasn't finished), the program jumps back to the `INNER_LOOP` label.

// // 7. `dec r20`: This line decrements the value in register `r20` by 1.

// // 8. `brne OUTER_LOOP`: Similar to step 6, if the value in `r20` is not zero (which means the outer loop hasn't finished), the program jumps back to the `OUTER_LOOP` label.

// // 9. `dec r18`: This line decrements the value in register `r18` by 1. `r18` is loaded with a value before calling `delay_ms`, and it determines how many times the entire delay (consisting of the outer and inner loops) will run.

// // 10. `brne delay_ms`: If the value in `r18` is not zero (which means the entire delay hasn't finished), the program jumps back to the `delay_ms` label.

// // 11. `ret`: This is the return instruction. When the delay is finished (when `r18` reaches zero), the program returns to where the function was called.

// // This function creates a delay by using CPU cycles to do nothing but decrement registers and check for zero. The total delay is roughly proportional to the product of the values loaded into `r20`, `r21`, and `r18`. The exact length of the delay depends on the clock speed of the microcontroller.*/