;sub 8 bit with borrow 
mov al,28h
mov bl,14h
sbb al,bl
mov ds:[0200h],al

;sub 16 bit with borrow 
mov ax,2128h
mov bx,1442h
sbb ax,bx
mov ds:[0200h],ax
