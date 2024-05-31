;search a given number number in the array
MOV SI, 0500H
MOV CL, [SI]
MOV CH, 00H
INC SI
MOV BL, [SI]
INC SI

BACK:  
MOV AL, [SI]
CMP AL, BL
JNE FWD
MOV [SI], 00H     

FWD:
INC SI
DEC CL
JNZ BACK
HLT  