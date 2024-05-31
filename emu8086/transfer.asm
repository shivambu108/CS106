;transfer block of elements
mov 1800h,1
mov 1801h,2
mov 1802h,3
mov 1803h,4
mov 1804h,5
mov si,1800h
mov di,1900h
mov cx,0005h
rep movsb
hlt
ret