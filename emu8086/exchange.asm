;exchange  
mov 3000h,AA
mov 3001h,BB
mov 3002h,CC

mov 5000h,11
mov 5001h,22
mov 5002h,33

mov cx,0003h
mov si,3000h
mov di,4000h

back:
mov al,[si]
xchg al,[di]
mov [si],al

inc si
inc di
loop back
hlt                                                            
