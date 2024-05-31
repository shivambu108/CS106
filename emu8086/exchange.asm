;exchange  
mov 3000h,1
mov 3001h,2
mov 3002h,3

mov 5000h,12
mov 5001h,22
mov 5002h,43

mov cx,0003h
mov si,3000h
mov di,5000h

back:
mov al,[si]
xchg al,[di]
mov [si],al

inc si
inc di
loop back
hlt                                                            
