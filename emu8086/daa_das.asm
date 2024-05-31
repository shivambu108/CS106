;daa das

;addition
mov al,89h
mov bl,68h
add al,bl
daa        
adc ah,00h
            
         
;subtraction
mov al,32h     
mov bl,93h
sub al,bl
das

hlt