INCLUDE EMU8086.INC
.MODEL SMALL
.STACK 100H
.DATA 
     NUM1 DB ?
     NUM2 DB ?
     RESULT DB ?
.CODE  
MAIN PROC
      PRINT "Enter first number:"
      MOV AH,1
      INT 21H
      SUB AL,30H
      MOV NUM1,AL
      PRINTN
      PRINT "Enter second number:"
      MOV AH,1
      INT 21H
      SUB AL,30H
      MOV NUM2,AL
      PRINTN
      MUL NUM1  
      MOV RESULT,AL
      AAM
      ADD AH,30H
      ADD AL,30H 
      MOV BX,AX
      PRINT "Multiplication of the two numbers: "
      MOV AH,2
      MOV DL,BH
      INT 21H
      MOV AH,2
      MOV DL,BL
      INT 21H
     
  EXIT:
  MOV AH, 4CH
  INT 21H
MAIN ENDP
END MAIN      