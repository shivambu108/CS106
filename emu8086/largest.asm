;largest in array       
mov 500h,5
mov 501h,55h
mov 502h,44h
mov 503h,33h
mov 504h,22h
mov 505h,11h
mov si,0500h
mov cl,[si]
inc si
dec cl
mov al,[si]
inc si
l1:
cmp al,[si]
jnc skip
mov al,[si]
skip:
inc si
loop l1
mov [0600h],al   
hlt