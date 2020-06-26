INCLUDE EMU8086.INC

.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    
    MOV AH,1
    INT 21H
    MOV CL,AL
    MOV CH,0
    SUB CL,48
    
    MOV AH,1
    INT 21H
    MOV BL,AL
    SUB BL,48
    
    MOV AX,CX
    
    ;MOV AL,6
    ;MOV BL,2       
    
    DIV BL
    ADD AL,48
    
    MOV AH,2
    MOV DL,AL
    INT 21H
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN