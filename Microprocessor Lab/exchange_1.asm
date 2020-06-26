INCLUDE EMU8086.INC
.MODEL SMALL
.STACK 100H
.CODE

MAIN PROC
    PRINT "Enter first number:"
    MOV AH,1
    INT 21H
    MOV BL,AL
    PRINTN
    
    PRINT "Enter second number:"
    MOV AH,1
    INT 21H
    MOV CL,AL
    PRINTN 
            
    XCHG BL,CL
    
    PRINT "After exchange :"
    PRINTN 
    PRINT "First number:"       
    MOV AH,2
    MOV DL,BL
    INT 21H
    PRINTN
    
    PRINT "Second number:"
    MOV AH,2
    MOV DL,CL
    INT 21H
     
 EXIT:
 MOV AH,4CH
 INT 21H
   
MAIN ENDP
END MAIN