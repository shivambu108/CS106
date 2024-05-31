;smallest in array       
mov 500h,5
mov 501h, 51h
mov 502h, 24h
mov 503h, 2Ch
mov 504h, CFh
mov 505h, 3Eh

mov si, 0500h
mov cl, [si]
mov ch, 00
inc si
dec cl
mov al, [si]
inc si

l1:
cmp al,[si]
jc skip
mov al,[si]

skip:
inc si
loop l1
mov [0600h],al   
hlt