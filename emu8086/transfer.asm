;transfer block of elements
mov 1500h,11
mov 1501h,22
mov 1502h,33
mov 1503h,44
mov 1504h,55

mov si,1500h
mov di,1600h

mov cx,0005h

rep movsb

hlt
ret