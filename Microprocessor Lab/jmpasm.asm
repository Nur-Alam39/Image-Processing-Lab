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
 CMP BL,CL
 JE EQUAL
 JG GREATER
 
 PRINTN "First < Second" 
 JMP EXIT 
 
 EQUAL: 
  PRINTN "First = Second"
  JMP EXIT 
 
 GREATER:
  PRINTN "First > Second"
 EXIT:
  MOV AH, 4CH
  INT 21H
 MAIN ENDP
END MAIN