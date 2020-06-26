INCLUDE EMU8086.INC

.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    
    PRINTN 'Enter two value'          
    MOV AH,1                                
    INT 21H
    MOV BL,AL
    PRINTN
    
    SUB BL,48
    
    MOV AH,1                                
    INT 21H
    MOV BH,AL
    PRINTN
    
    SUB BH,48
    
    XCHG BL,BH                                  
    MOV DL,10                               
    MOV AH,02H                              
    INT 21H
    MOV DL,13
    MOV AH,02H
    INT 21H
    
    PRINT 'Exchange: '                
    PRINTN 
    ADD BL,48
    MOV AH,2                                
    MOV DL,BL
    INT 21H
    PRINTN
    
    ADD BH,48
    MOV AH,2                                
    MOV DL,BH                       
    INT 21H
    PRINTN   
    
EXIT:                                       
MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN