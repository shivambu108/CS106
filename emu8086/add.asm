;add 8 bit with carry 
mov al,255                      
mov bl,01
add al,bl
mov ds:[0200H],al
mov al,00
adc al,al
mov ds:[0201h],al   

            
;add 16 bit with carry
mov ax,2461h
mov bx,4321h
adc ax,bx
mov ds:[0200h],ax    