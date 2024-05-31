;add numbers in an array  
mov 1501h,55
mov 1502h,44
mov 1503h,33 ;numbers to be added
mov 1504h,22
mov 1505h,11

mov si,1500h
mov cl,[si]
dec cl
inc si
mov al,[si] 
mov ah,0    
inc si

back:
mov bl,[si]
add al,bl
adc ah,00
inc si
dec cl
jnz back

mov di,1600h
mov [di],al
mov [di+1],ah
hlt  
