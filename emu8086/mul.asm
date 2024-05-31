;multiply 2 16-bit number         
mov ax,[3000h]
mov bx,[3002h]
mul bx
mov [3004h],ax
mov ax,dx
mov [3006h],ax 
hlt   