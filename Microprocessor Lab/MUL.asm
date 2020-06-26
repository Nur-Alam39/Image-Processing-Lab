INCLUDE EMU8086.INC

.MODEL SMALL
.STACK 100H

.DATA
A DB 3
B DB 2
C DB ?

.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AL,A
    MOV BL,B
    MUL BL
    
    MOV C,AL
    ADD C,48
    
    MOV AH,2
    MOV DL,C
    INT 21H
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN