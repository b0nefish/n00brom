getchar:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x3B
	
atoi:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x10
	
strcmp:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x17

strlen:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x1B
	
strcpy:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x19

strcat:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x15
	
strncat:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x16
	
toupper:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x25

Exec:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x43

FlushCache:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x44
	
LoadExec:
	addiu	t2, r0, 0xA0
	jr		t2
	addiu	t1, r0, 0x51
	
ReturnFromException:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x17
	
HookDefaultInt:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x18

HookEntryInt:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x19

open:
	addiu   t2, r0, 0xB0
	jr      t2
	addiu   t1, r0, 0x32

read:
	addiu   t2, r0, 0xB0
	jr      t2
	addiu   t1, r0, 0x34

close:
	addiu   t2, r0, 0xB0
	jr      t2
	addiu   t1, r0, 0x36
	
AddDev:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x47
	
DelDev:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x48
	
ChangeClearPAD:
	addiu	t2, r0, 0xB0
	jr		t2
	addiu	t1, r0, 0x5B
	
ChangeClearRCnt:
	addiu	t2, r0, 0xC0
	jr		t2
	addiu	t1, r0, 0x0A

_96_init:
	addiu   t2, r0, 0xA0
	jr      t2
	addiu   t1, r0, 0x71