;conversion to uppercase
mov cx,26
mov si,1600h
mov di,1700h

convert:
mov al,[si]
mov al,'a'   
jb nt_lwr
sub al,20h

nt_lwr:
mov [di],al
inc si
inc di 
loop convert