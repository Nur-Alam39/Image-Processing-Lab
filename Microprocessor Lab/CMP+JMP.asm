INCLUDE EMU8086.INC
.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    
    PRINT 'Enter a number (n):'
    
    MOV AH,1               
    INT 21H
    MOV BH,AL
    SUB BH,48              
    
    MOV BL,1             
    
    PRINTN
    PRINTN 'PRINT 1 to n:'
    
    PART1:        
        MOV CL,BL           
        ADD CL,48          
    
        MOV AH,2            
        MOV DL,CL
        INT 21H
        PRINTN              
    
        CMP BH,BL           
        JE PART2             
        INC BL              
        JMP PART1
    
    PART2:
        PRINTN 'END'

    EXIT:    
    MOV AX,4CH
    INT 21H
    MAIN ENDP
END MAIN