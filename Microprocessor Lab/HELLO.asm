INCLUDE EMU8086.INC
.MODEL SMALL
.STACK
.DATA

    MSG1 DB "Hello World" 

.CODE  
MAIN PROC
   MOV AX,DATA  
   MOV DS,AX
   
   LEA DX,MSG1
   MOV AH,9
   INT 21H 
        
   EXIT:     
   MOV AH,4CH
   INT 21H
MAIN ENDP
END MAIN
   