;conversion to uppercase
mov cx,26
mov si,1500h
mov di,1600h

convert:
mov al,[si]
cmp al,'a'   
jb nt_lwr
cmp al,'z'
ja not_lwr
sub al,20h

nt_lwr:
mov [di],al
inc si
inc di 
loop convert