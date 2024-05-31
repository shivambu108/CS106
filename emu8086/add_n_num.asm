;add numbers in an array  
mov 501h,55
mov 502h,44
mov 503h,33
mov 504h,22
mov 505h,11

mov si,0500h
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
