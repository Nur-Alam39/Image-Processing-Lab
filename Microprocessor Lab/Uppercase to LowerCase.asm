.MODEL SMALL
.DATA
        STR1    DB      10 DUP(' '),'$'
        NEW_LINE DB 0DH,'CONVERTED STRING:$','$'
.CODE

MAIN    PROC
        MOV AX,@DATA
        MOV DS,AX

        LEA SI,STR1
AGAIN:
        MOV AH,1
        INT 21H
        CMP AL,0DH
        JE  BACK

        CMP AL,41H
        JL  BAK
        CMP AL,5AH
        JG  BAK
        ADD AL,20H
BAK:    MOV [SI],AL
        INC SI
        JMP AGAIN
BACK:
        MOV AL,'$'
        MOV [SI],AL

        MOV AH,09H
        LEA DX,NEW_LINE
        INT 21H

        MOV AH,09H
        LEA DX,STR1
        INT 21H

        MOV AH,4CH
        INT 21H

MAIN    ENDP
        END   MAIN