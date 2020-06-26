INCLUDE EMU8086.INC
.MODEL SMALL
.STACK 100H 
.CODE
MAIN PROC
    
    PRINT "ENTER FIRST NUMBER:"
    MOV AH,1
    INT 21H
    MOV CL,AL
    MOV CH,0
    SUB CL,48
    
    PRINTN
    
    PRINT "ENTER DIVISOR:"
    MOV AH,1
    INT 21H
    MOV BL,AL
    SUB BL,48
    
    MOV AX,CX
     
    DIV BL
    ADD AL,48
    
    PRINTN
    
    PRINT "OUTPUT:"
    MOV AH,2 
    MOV DL,AL
    INT 21H
    
EXIT:
MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN