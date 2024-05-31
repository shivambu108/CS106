;sub 8 bit with borrow 

mov al,38h
mov bl,21h
sbb al,bl
mov ds:[0203h],al

mov al,20h
mov bl,41h
sbb al,bl
mov ds:[0204h],al

;sub 16 bit with borrow 
mov ax,48E7h
mov bx,2481h
sbb ax,bx
mov ds:[0206h],ax
