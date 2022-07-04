#include <stdio.h>
#asm
	
._sprites	
	defb 0x00,0x00,0x00,0x00,0xFF,0x71,0x71,0x71,0x7F,0x7F,0x7F,0x7F,0xFF,0x1E,0x0C,0x00,0x00,0x00,0x00,0x00,0x3C,0x18,0x18,0xFE,0xFE,0xFF,0xFF,0xFE,0xFE,0x78,0x30,0x00
	defb 0x10,0x1F,0x1F,0x3F,0x7F,0x7F,0x3F,0x1F,0x1F,0x3F,0x7F,0x7F,0x3F,0x1F,0x1F,0x06,0x10,0xF0,0xF0,0xF0,0x10,0x10,0x10,0xF0,0x80,0x80,0x90,0xF0,0xF0,0x90,0x80,0x00
	defb 0x02,0x07,0x0F,0x1E,0x3C,0xFE,0xFF,0x7F,0x3F,0x7F,0x6F,0x07,0x03,0x07,0x06,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x64,0xC6,0xEF,0xFC,0xF8,0xFC,0xFC,0xF8,0xF8,0x60
	defb 0x00,0x01,0x03,0x00,0x04,0x0E,0x1B,0x31,0x63,0xF7,0x7F,0x3F,0x1F,0x0F,0x07,0x06,0x80,0x80,0xD8,0xFE,0x7E,0xFF,0xFF,0xFE,0xFC,0xFE,0xF6,0xE0,0xC0,0xE0,0x60,0x00
	defb 0x00,0x00,0x00,0x00,0x3C,0x18,0x18,0x7F,0x7F,0x7F,0xFF,0x7F,0x7F,0x1E,0x0C,0x00,0x00,0x00,0x00,0x00,0xFF,0x8E,0x8E,0x8E,0xFE,0xFE,0xFE,0xFE,0xFE,0x78,0x30,0x00
	defb 0x06,0x1F,0x1F,0x3F,0x7F,0x7F,0x3F,0x1F,0x1F,0x3F,0x7F,0x7F,0x3F,0x1F,0x1F,0x10,0x00,0x80,0x90,0xF0,0xF0,0x90,0x80,0x80,0xF0,0x10,0x10,0x10,0xF0,0xF0,0xF0,0x10
	defb 0x01,0x01,0x1B,0x7F,0x7E,0xFF,0xFF,0x7F,0x3F,0x7F,0x6F,0x07,0x03,0x07,0x06,0x00,0x00,0x80,0xC0,0x00,0x20,0x70,0xD8,0x8C,0xC6,0xEF,0xFE,0xFC,0xF8,0xF0,0xE0,0x60
	defb 0x00,0x00,0x01,0x03,0x06,0x0C,0x26,0x63,0xF7,0x3F,0x1F,0x3F,0x3F,0x1F,0x1F,0x06,0x40,0xE0,0xF0,0x78,0x3C,0x7F,0xFF,0xFE,0xFC,0xFE,0xF6,0xE0,0xC0,0xE0,0x60,0x00
	defb 0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF
	defb 0x08,0x0E,0x0F,0x07,0x07,0x07,0x1F,0x7F,0xFF,0x1F,0x03,0x03,0x07,0x07,0x0C,0x08,0x01,0x03,0x07,0x0E,0x1E,0xFC,0xFC,0xF8,0xFC,0xFE,0xFF,0xF8,0xF8,0x38,0x18,0x08
._tiles	
	defb 0x22,0xFF,0x22,0x22,0x22,0x22,0xFF,0x22
	defb 0x42,0x42,0xFF,0x42,0x42,0x42,0xFF,0x42
	defb 0x08,0x0F,0x1C,0x24,0xE2,0x72,0x4D,0x42
	defb 0x10,0xF0,0x38,0x24,0x47,0x4E,0xB2,0x42
	defb 0x42,0xB2,0x4E,0x47,0x24,0x38,0xF0,0x10
	defb 0x42,0x4D,0x72,0xE2,0x24,0x1C,0x0F,0x08
	defb 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	defb 0x42,0xFF,0x42,0x42,0x42,0x42,0xFF,0x42
	defb 0x00,0x22,0x14,0x08,0x1C,0x2A,0x08,0x08
	defb 0x00,0x38,0x2A,0x3F,0x3F,0x12,0x00,0x00
._tiles2
	defb 0x60,0x78,0x7E,0x78,0x60,0x40,0x40,0x40

._blocos	
	defm "ggg","aaa","ggg"
	defm "gbg","gbg","gbg"
	defm "ggg","gca","gbg"
	defm "ggg","adg","gbg"
	defm "gbg","aeg","ggg"
	defm "gbg","gfa","ggg"
	defm "ggg","aca","gbg"
	defm "gbg","adg","gbg"
	defm "gbg","aea","ggg"
	defm "gbg","gfa","gbg"
	defm "gbg","aca","gbg"
	defm "ggg","ggg","ggg"
	defm "gbi","aha","gbg"
	defm "gpg","aaa","ggg"
	defm "gbg","gbp","gbg"

._fases
defb 0xB,0xD,0x0,0x0,0x0,0x6,0x0,0xD,0x0,0x3 
defb 0x2,0x0,0x6,0x0,0x0,0xA,0x3,0xB,0xE,0x1 
defb 0x1,0xB,0x1,0xB,0xB,0x1,0x5,0x0,0x4,0x1 
defb 0x1,0xB,0xE,0x2,0x0,0xC,0x0,0x0,0xD,0x1 
defb 0x1,0xB,0x5,0xC,0x0,0x7,0xB,0xB,0xB,0x1 
defb 0x1,0xB,0xB,0x5,0x0,0x8,0x0,0x0,0x0,0x7 
defb 0x5,0x0,0x0,0x0,0x0,0x0,0x0,0xD,0x0,0x4
defb 6,2,17,21,-1,0,23,12,-1,0
defb 0x2,0x0,0x0,0x6,0x0,0x0,0x0,0x0,0x0,0x3
defb 0xE,0x2,0x0,0xA,0x0,0x0,0x0,0x0,0x3,0xE
defb 0x1,0x1,0xB,0x1,0xE,0xB,0xB,0xB,0xE,0x1
defb 0x9,0xC,0x0,0x8,0xC,0xD,0x6,0x0,0xC,0x7
defb 0x1,0x1,0xB,0xB,0x1,0xB,0x1,0xB,0x1,0x1
defb 0x1,0x5,0x0,0x0,0x8,0x0,0xA,0x0,0x4,0x1
defb 0x5,0x0,0x0,0xD,0x0,0x0,0x8,0x0,0x0,0x4
defb 6,2,8,21,-1,0,23,6,-1,0
defb 0x2,0x6,0x0,0x0,0x0,0x0,0x0,0xD,0x2,0x3
defb 0x1,0x1,0x2,0x0,0x6,0xD,0x0,0x3,0x1,0x1
defb 0x1,0x1,0x1,0x2,0xC,0x0,0x3,0x1,0x1,0x1
defb 0xE,0x1,0x1,0x1,0x1,0xB,0x1,0x1,0x1,0x1
defb 0x1,0xE,0x1,0x5,0x8,0xD,0x4,0x1,0x1,0x1
defb 0x1,0x5,0x8,0x0,0x0,0x0,0x0,0xC,0x4,0x1
defb 0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xD,0x4
defb 6,3,14,21,1,0,8,3,1,0,23,12,0,1
defb 0x2,0x0,0x6,0x0,0x6,0x0,0x6,0x0,0x6,0x3
defb 0x1,0xB,0xE,0xB,0xE,0xB,0x1,0xB,0x1,0x1
defb 0x9,0x0,0xA,0x0,0xC,0xD,0xA,0x0,0x7,0xE
defb 0x1,0xB,0x1,0xB,0x1,0xB,0x9,0x0,0xC,0xD
defb 0x9,0x0,0xA,0xD,0xA,0x0,0xC,0x0,0x7,0xE
defb 0x1,0xB,0x1,0xB,0x1,0xB,0x1,0xB,0x1,0x1
defb 0x5,0x0,0x8,0x0,0x8,0x0,0x8,0x0,0x8,0x4
defb 7,3,14,18,0,-1,21,21,1,0,11,3,-1,0
defb 0x2,0x6,0xD,0x6,0x6,0x6,0x6,0x0,0x6,0x3
defb 0x9,0xC,0x0,0xC,0xA,0xC,0xC,0xD,0xC,0x7
defb 0x9,0xC,0xD,0xC,0xC,0xC,0xC,0x0,0xC,0x7
defb 0x9,0xC,0x0,0xC,0xC,0xA,0xC,0xD,0xC,0x7
defb 0x9,0xC,0xD,0xC,0xC,0xC,0xC,0x0,0xC,0x7
defb 0x9,0xC,0x0,0xC,0xC,0xC,0xC,0xD,0xA,0x7
defb 0x5,0x8,0xD,0x8,0x8,0x8,0x8,0x0,0x8,0x4
defb 7,3,20,17,0,-1,15,9,1,0,8,18,-1,0
defb 0x2,0x3,0x2,0x0,0xD,0x0,0x6,0x0,0x0,0x3
defb 0x1,0xE,0x1,0x2,0x0,0x0,0x8,0x0,0x3,0x1
defb 0x9,0xC,0xA,0xC,0x0,0x6,0xD,0x3,0xE,0x1
defb 0x1,0x1,0x1,0x5,0x0,0xA,0x0,0xC,0xC,0x7
defb 0x1,0x1,0x5,0x0,0x0,0xC,0x0,0x4,0x1,0x1
defb 0xE,0x5,0x0,0x0,0x0,0xA,0x0,0x0,0x4,0x1
defb 0x5,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0xD,0x4 
defb 6,4,8,21,1,0,26,15,0,1,2,15,0,1,14,9,-1,0
defb 0xB,0xE,0xB,0x1,0xB,0x2,0xD,0xB,0x1,0xB
defb 0x0,0xA,0x0,0xC,0x0,0x8,0x0,0x0,0xC,0xD
defb 0xB,0x1,0xB,0x1,0xB,0x2,0x0,0x0,0xC,0xD
defb 0x2,0xC,0x0,0xA,0x0,0xA,0x0,0x0,0xA,0x0
defb 0x1,0x1,0xB,0x1,0xB,0xE,0xB,0xB,0x1,0xB
defb 0x1,0x1,0xB,0x1,0xB,0x1,0xB,0xB,0x1,0xB
defb 0xE,0x5,0x0,0x8,0x0,0x8,0x0,0x0,0x8,0xD
defb 7,4,2,15,0,-1,2,18,0,1,29,21,-1,0,23,6,-1,0
defb 0x2,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x0,0xB
defb 0x9,0x0,0x0,0x0,0x0,0x0,0xC,0x0,0x0,0x3
defb 0x1,0xD,0x0,0x0,0x6,0x0,0xC,0x0,0xD,0xE
defb 0x9,0x0,0x0,0x0,0xA,0x0,0xA,0x0,0xD,0x0
defb 0x1,0xD,0x0,0x0,0x8,0x0,0xC,0x0,0xD,0xE
defb 0x9,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x4
defb 0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xD,0xB
defb 8,4,26,3,-1,0,12,3,1,0,23,9,-1,0,12,18,1,0 
defb 0xB,0x2,0x0,0xD,0xE,0xE,0xD,0x0,0x3,0xB
defb 0xB,0x1,0xD,0x0,0xA,0xA,0x0,0xD,0x1,0xB
defb 0xD,0xA,0x0,0xD,0x1,0xE,0xD,0x0,0xA,0xD
defb 0xD,0xA,0x0,0x0,0xA,0x0,0x0,0x0,0xA,0xD
defb 0xD,0xA,0x0,0xD,0x1,0xE,0xD,0x0,0xA,0xD
defb 0xB,0x1,0xD,0x0,0xA,0xA,0x0,0xD,0x1,0xB
defb 0xB,0x5,0x0,0xD,0xE,0xE,0xD,0x0,0x4,0xB
defb 24,3,20,12,1,0,9,12,1,0,23,21,-1,0
defb 0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3
defb 0x1,0x2,0x0,0x0,0x0,0x0,0x0,0xD,0x6,0x7
defb 0x1,0x1,0xB,0x2,0x0,0x0,0x0,0x3,0x1,0x1
defb 0x1,0x1,0xD,0xC,0x0,0x0,0x0,0x7,0x1,0x1
defb 0x1,0x9,0x0,0x8,0x0,0x0,0x0,0x4,0x1,0x1
defb 0x1,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0xE
defb 0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4
defb 3,4,29,15,0,-1,17,6,-1,0,14,12,-1,0,17,15,1,0	
	
._titulo
	defm "p ESTRADA DE FERRO p"
	
._copyright
	defm "1986 WILSON F. MARTINS (BASIC)"

._copyright2
	defm "2022 FABIO A. BENTO (ASSEMBLY)"
	
	
._textspc
	defm "DIGITE ESPACO PARA COMECAR"    // usado sem  C cedilha (como na versao original) por nao ser do mesmo código ASCii em vários modelos de MSX - ex.: no Hotbit Ç=128
	
._placar
	defm " PONTOS:00000 TEMPO:999 FASE:00 " 
	
	
._musica
	defm "S0M6000L8CC16C16DC4EF2"
	
._texto_parabens
	defm "  PARABENS  "
	
._texto_bonus
	defm " BONUS: "
	
._texto_fim
	defm " FIM DE JOGO "


#endasm



#define GTTRIG 0xd8
#define GTSTCK 0xd5
#define WRTVDP 0x47 
#define LDIRVM 0x5c
#define RDVRM  0x4a
#define WRTVRM 0x4d
#define FILVRM 0x56
#define BEEP 0xc0
#define WRTPSG 0x93

int m,n,js,pontos,fase,vidas,tempo,cx,cy,ed,read1,read2;

char nb,nt,x[10],y[10],fx[10],fy[10],p[10],pt[10],q[10],co,da,dt,dn,ds,dl,do,ptrig;

int delayt,vdelayt,delayc;

char sp1,sp2,sp3,sp4;

#asm            //hl=tempo de delay
   ._delay
 	dec hl
	ld a,h
	cp 0
	jr nz,_delay
	ret
#endasm

#asm
   ._print999   //de=local na tela    hl=valor
	ld bc,100
	call _dig999
	ld bc,10
	call _dig999
	ld bc,1
   ._dig999
	ld a,48
	and a
   ._contdi999
	sbc hl,bc
	jr c,_fdig999
	inc a
	jr _contdi999
   ._fdig999
	add hl,bc
	push hl
	ld h,d
	ld l,e
	call WRTVRM
	inc de
	pop hl
	ret
	
#endasm

#asm
   ._print99   //de=local na tela    hl=valor
	ld bc,10
	call _dig99
	ld bc,1
   ._dig99
	ld a,48
	and a
   ._contdi99
	sbc hl,bc
	jr c,_fdig99
	inc a
	jr _contdi99
   ._fdig99
	add hl,bc
	push hl
	ld h,d
	ld l,e
	call WRTVRM
	inc de
	pop hl
	ret
	
#endasm

#asm
   ._print99999   //de=local na tela    hl=valor
	ld bc,10000
	call _dig99999
	ld bc,1000
	call _dig99999
	ld bc,100
	call _dig99999
	ld bc,10
	call _dig99999
	ld bc,1
   ._dig99999
	ld a,48
	and a
   ._contdi99999
	sbc hl,bc
	jr c,_fdig99999
	inc a
	jr _contdi99999
   ._fdig99999
	add hl,bc
	push hl
	ld h,d
	ld l,e
	call WRTVRM
	inc de
	pop hl
	ret
	
#endasm

#asm
   ._atual_ponto
	ld hl,(_pontos)
	ld bc,10
	add hl,bc
	ld (_pontos),hl
	ld de,6144+8
	call _print99999
	//860 SOUND 7,56:SOUND 10,16:SOUND 13,0:870 SOUND 12,10:SOUND 5,1:SOUND 4,0
	ld a,7 
	ld e,56
	call WRTPSG
	ld a,10 
	ld e,16
	call WRTPSG
	ld a,13
	ld e,0
	call WRTPSG
	ld a,12
	ld e,10
	call WRTPSG
	ld a,5
	ld e,1
	call WRTPSG
	ld a,4
	ld e,0
	call WRTPSG
	ld a,(_nb)
	dec a
	ld (_nb),a
	ret nz

	ld hl,0xff00
	call _delay
	ld hl,0xff00
	call _delay	
	ld hl,0xff00
	call _delay	
	//falta musiquinha de parabens
	call _apaga_sprites
	ld hl,10+11*32+6144
	ld bc,12
	ld a,32
	call FILVRM
	ld hl,_texto_parabens
	ld de,10+12*32+6144
	ld bc,12
	call LDIRVM
	ld hl,10+13*32+6144
	ld bc,12
	ld a,32
	call FILVRM

	ld hl,0xff00
	call _delay
	ld hl,0xff00
	call _delay	
	ld hl,0xff00
	call _delay	

	//falta musica de bonus
	ld hl,_texto_bonus
	ld de,10+12*32+6144
	ld bc,8
	call LDIRVM
	ld hl,(_tempo)
	ld de,6144+18+12*32
	call _print999
	
	ld hl,0xff00
	call _delay
	ld hl,0xff00
	call _delay	
	ld hl,0xff00
	call _delay	

	ld hl,(_pontos)
	ld bc,(_tempo)
	add hl,bc
	ld (_pontos),hl
	
	ld a,(_fase)
	inc a
	cp 11
	jr nz,_skp_volta_primeira_fase
	
	ld a,1
	ld de,_fases
	ld (_read2),de
	
   ._skp_volta_primeira_fase
	ld (_fase),a
	
	jp _inicio_desenho_cenario
	
	ret
#endasm

#asm
   ._mod_trilho
	ld hl,(_ed)
	ld a,(_dt)
	add a,97
	call WRTVRM
	//  SOUND 7,28:SOUND 6,31:SOUND 10,16:SOUND 13,4:SOUND 12,2
	ld a,7 
	ld e,28
	call WRTPSG
	ld a,6 
	ld e,31
	call WRTPSG
	ld a,10
	ld e,16
	call WRTPSG
	ld a,13
	ld e,4
	call WRTPSG
	ld a,12
	ld e,2
	call WRTPSG
	ret
#endasm

#asm
   ._colis_trem
   //   1340 BEEP:SOUND 7,7:SOUND 8,16:1350 SOUND 6,31:SOUND 13,0:SOUND 12,60
	call BEEP
	
	ld a,7 
	ld e,7 
	call WRTPSG
	ld a,8 
	ld e,16
	call WRTPSG
	ld a,6
	ld e,31
	call WRTPSG
	ld a,13
	ld e,0
	call WRTPSG
	ld a,12
	ld e,60
	call WRTPSG
	
	ld a,(_y)     //y
	rlc a
	rlc a
	rlc a
	sub a,9
	ld (_sp1),a
	ld a,(_x)   //x
	rlc a
	rlc a
	rlc a
	ld (_sp2),a
	ld a,10*4-4    //attributo do sprite
	ld (_sp3),a
	ld a,6      // cor. verificar cor +128 pra sprite aparecer gradativamente a esquerda da tela
	ld (_sp4),a
	ld hl,_sp1
	ld de,0x1b00   // sprite 0
	ld bc,4
	call LDIRVM
	
	ld hl,0xff00
	call _delay
	ld hl,0xff00
	call _delay	
	ld hl,0xff00
	call _delay	
	
	ld a,(_vidas)
	dec a
	ld (_vidas),a
	
	ld de,(_read1)
	jp nz,_reinicio_fase_pos_morte
	
   ._fim_jogo
	call _apaga_sprites
	// falta musica de fim de jogo
	ld hl,13+1*32+6144
	ld a,103
	call WRTVRM

	ld hl,10+11*32+6144
	ld bc,13
	ld a,32
	call FILVRM
	ld hl,_texto_fim
	ld de,10+12*32+6144
	ld bc,13
	call LDIRVM
	ld hl,10+13*32+6144
	ld bc,13
	ld a,32
	call FILVRM
	
	ld hl,0xff00
	call _delay
	ld hl,0xff00
	call _delay	
	ld hl,0xff00
	call _delay	
	
	
	jp _reinicio_jogo
	
#endasm

#asm
   ._apaga_sprites
	ld hl,0x1b00
	ld bc,10*4
	ld a,0
	call FILVRM
	ret
#endasm

#asm
   ._cls
	ld hl,6144 
	ld bc,32*24
	ld a,0
	call FILVRM
	ret
#endasm

#asm
   ._mov_trem
ld bc,0
   ._loop_sprite_trem
	push bc
	ld a,c
	cp 0
	jr nz,_skp_co1
	ld a,1
	jr _skp_co4
   ._skp_co1
	ld a,4
   ._skp_co4
	ld (_co),a
	
	//PUTSPRITE W+1,(X(W)*8,Y(W)*8-9),CO,PT(W)
	ld hl,_y
	add hl,bc
	ld a,(hl)     //y
	rlc a
	rlc a
	rlc a
	sub a,9
	ld (_sp1),a
	ld hl,_x
	add hl,bc
	ld a,(hl)   //x
	rlc a
	rlc a
	rlc a
	ld (_sp2),a
	ld hl,_pt
	add hl,bc
	ld a,(hl)
	add a,a
	add a,a
	sub a,4      
	ld (_sp3),a
	ld a,(_co)      // cor. verificar cor +128 pra sprite aparecer gradativamente a esquerda da tela
	ld (_sp4),a
	
	ld h,b
	ld l,c
	inc hl
	add hl,hl
	add hl,hl
	ld b,h
	ld c,l
	ld hl,0x1b00
	add hl,bc
	ex de,hl
	ld hl,_sp1
	ld bc,4
	call LDIRVM
		
	pop bc
	inc bc
	ld a,c
	ld hl,_nt
	cp (hl)
	jr nz,_loop_sprite_trem
	ret
#endasm

	
void main () {
	

// inicio Estrada de Ferro em Assembly Z80
#asm

	ld a,15     // color 15,1,1
	ld (0xf3e9),a
	ld a,1
	ld (0xf3ea),a
	ld (0xf3eb),a
	call 0x6f    // screen 1,2
	ld a,(0xF3E0) //RG1SAV
    or 2
	res 0,a   //mag=0
    ld b,a
    ld c,1
    call WRTVDP
	ld a,32
	ld (0xF3AF),a // width32

	//cria sprites
	ld hl,_sprites
	ld de,0x3800
	ld bc,10*32
	call LDIRVM

	//cria tiles
	ld hl,_tiles
	ld de,776
	ld bc,855-776+1
	call LDIRVM
	ld hl,_tiles2
	ld de,896
	ld bc,903-896+1
	call LDIRVM
	ld hl,8204
	ld a,26
	call WRTVRM
	ld hl,8205
	ld a,26
	call WRTVRM
	ld hl,8206
	ld a,202
	call WRTVRM
	
	//abertura
   ._reinicio_jogo
	call _cls
	ld hl,6+4*32+6144
	ld bc,20
	ld a,112
	call FILVRM
	ld hl,_titulo
	ld de,6+5*32+6144
	ld bc,20
	call LDIRVM
	ld hl,6+6*32+6144
	ld bc,20
	ld a,112
	call FILVRM
	ld hl,0+9*32+6144
	ld bc,160
	ld a,103
	call FILVRM
	ld hl,0+11*32+6144
	ld bc,32
	ld a,97
	call FILVRM
	ld hl,10+10*32+6144
	ld a,105
	call WRTVRM

	ld hl,_copyright
	ld de,1+15*32+6144
	ld bc,30
	call LDIRVM
	
	ld hl,_copyright2
	ld de,1+17*32+6144
	ld bc,30
	call LDIRVM

	ld hl,_textspc
	ld de,3+22*32+6144
	ld bc,26
	call LDIRVM
	
   ._espera_strig
	
	//PUTSPRITE 1,(M,78),4,1 
	ld a,78     //y
	ld (_sp1),a
	ld a,(_m)   //x
	ld (_sp2),a
	ld a,1*4-4    //attributo do sprite
	ld (_sp3),a
	ld a,4      // cor. verificar cor +128 pra sprite aparecer gradativamente a esquerda da tela
	ld (_sp4),a
	ld hl,_sp1
	ld de,0x1b00   // sprite 0
	ld bc,4
	call LDIRVM
	
	ld a,(_m)
	inc a
	ld (_m),a
	
	push hl
	ld hl,0x500
	call _delay
	pop hl
	
	//testa se apertou espaço ou botoes dos joysticks
	ld b,0
	ld a,b
	call GTTRIG
	jr nz,_inicio_partida
	ld b,1
	ld a,b
	call GTTRIG
	jr nz,_inicio_partida
	ld b,2
	ld a,b
	call GTTRIG
	jr nz,_inicio_partida
   
	jp _espera_strig
	
   ._inicio_partida
	ld a,b
	ld(_js),a
    
	call _apaga_sprites
	
	ld a,1
	ld (_fase),a
	ld hl,0
	ld (_pontos),hl
	ld a,3
	ld (_vidas),a
	
	ld de,_fases
	ld (_read2),de
	
	//rotina linha 1600
   ._inicio_desenho_cenario
	call _cls
	
	ld hl,_placar
	ld de,6144
	ld bc,32
	call LDIRVM
	
	ld hl,(_pontos)
	ld de,6144+8
	call _print99999
	
	ld a,(_fase)
	ld h,0
	ld l,a
	ld de,6144+29
	call _print99

	ld hl,6144+32+1 
	ld bc,30
	ld a,103
	call FILVRM
	
	// desenha cenario
	ld b,3
	ld hl,6144+32*2+1

	ld de,(_read2)
	ld b,7
   ._loop_20
	push bc
	ld b,10
   ._loop_21
	push bc
	ld a,(de)
	push de
	push hl
	ld h,0
	ld l,a
	ld b,h
	ld c,l
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,bc
	ld bc,_blocos
	add hl,bc
	ex de,hl
	pop hl
	push hl
	ld b,3
   ._loop_22
	push bc
	ld b,3
   ._loop_23
	ld a,(de)
	call WRTVRM
	inc de
	inc hl
	djnz _loop_23
	
	push hl
	ld hl,0x200
	call _delay
	pop hl
	
	ld bc,29
	add hl,bc
	pop bc
	djnz _loop_22
	pop hl
	pop de
	pop bc
	inc de
	inc hl 
	inc hl
	inc hl
	djnz _loop_21
	pop bc
	push bc
	ld bc,66
	add hl,bc
	pop bc
	djnz _loop_20

	ld a,(de)
	ld (_nb),a  
	inc de
	ld (_read1),de

   ._reinicio_fase_pos_morte
	ld a,(de)
	ld (_nt),a
	ld bc,0
	inc de

   ._loop_dados_trem
	ld a,(de)
	ld hl,_x
	add hl,bc
	ld (hl),a
	inc de
	ld a,(de)
	ld hl,_y
	add hl,bc
	ld (hl),a
	inc de
	ld a,(de)
	ld hl,_fx
	add hl,bc
	ld (hl),a
	inc de
	ld a,(de)
	ld hl,_fy
	add hl,bc
	ld (hl),a
	inc de
	push de
	ld hl,_y
	add hl,bc
	ld a,(hl)
	ld d,0
	ld e,a
	ex de,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	ex de,hl
	ld hl,_x
	add hl,bc
	ld a,(hl)
	ld h,0
	ld l,a
	add hl,de
	ld de,6144
	add hl,de
	call RDVRM
	sub a,97
	ld hl,_p
	add hl,bc
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	rlca
	sbc a,a
	ld d,a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld l,a
	rlca
	sbc a,a
	ld h,a
	add hl,de
	add hl,hl
	push hl
	ld hl,_p
	add hl,bc
	ld a,(hl)
	ld e,a
	rlca
	sbc a,a
	ld d,a
	pop hl
	ex de,hl
	sbc hl,de
	inc hl
	inc hl
	inc hl
	ld a,l
	ld hl,_pt
	add hl,bc
	ld (hl),a
	pop de
	inc bc
	ld a,c
	ld hl,_nt
	cp (hl)
	jr nz,_loop_dados_trem
	ld(_read2),de
	
	ld a,2
	ld (_cx),a
	ld a,3
	ld (_cy),a
	
	ld hl,13+1*32+6144
	ld a,(_vidas)
	ld c,a
	ld b,0
	ld a,106
	call FILVRM
	ld a,(_vidas)
	ld c,a
	ld b,0
	add hl,bc
	ld a,103
	call WRTVRM
	
	ld hl,999
	ld (_tempo),hl
	ld hl,0
	ld (_delayt),hl
	ld (_delayc),hl
	ld a,15
	ld(_vdelayt),hl
	
   ._loop_principal

	ld a,(_vdelayt)
	ld b,a
	ld hl,(_delayt)
	inc hl
	ld (_delayt),hl
	ld a,h
	cp b
	jp c,_skp_mov_trem_delay
	
	ld hl,0
	ld (_delayt),hl

	call _mov_trem
	
	ld bc,0
   ._loop_mov_trem
	push bc

	ld bc,1
   ._loop_colis_trem
	ld hl,_x
	ld a,(hl)
	ld e,a
	add hl,bc
	ld a,(hl)
	cp e
	jr nz,_skp_colis_trem
	ld hl,_y
	ld a,(hl)
	ld e,a
	add hl,bc
	ld a,(hl)
	cp e
	call z,_colis_trem
   ._skp_colis_trem
   	inc bc
	ld a,c
	ld hl,_nt
	cp (hl)
	jp nz,_loop_colis_trem
	pop bc
	push bc
	
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_x
	add hl,bc
	ld a,(hl)
	add a,e
	ld (hl),a
	
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_y
	add hl,bc
	ld a,(hl)
	add a,e
	ld (hl),a
	
	ld hl,_p
	add hl,bc
	ld a,(hl)
	ld hl,_q
	add hl,bc
	ld (hl),a
	
	ld hl,_y
	add hl,bc
	ld a,(hl)
	ld d,0
	ld e,a
	ex de,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	ex de,hl
	ld hl,_x
	add hl,bc
	ld a,(hl)
	ld h,0
	ld l,a
	add hl,de
	ld de,6144
	add hl,de
	call RDVRM
	sub a,97
	ld hl,_p
	add hl,bc
	ld (hl),a
	
	cp 7
	jp z,_skp_mov_trem
	ld hl,_q
	add hl,bc
	cp (hl)
	jp z,_skp_mov_trem
	
	cp 2
	jr nz,_skp_mov_trem1
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	cp -1
	jr z,_skp_mov_trem2
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	cp -1
	jr nz,_skp_mov_trem1
   ._skp_mov_trem2
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	add a,a
	add a,a
	ld e,a
	ld a,4
	sub a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld d,a
	ld a,e
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,d
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
   ._skp_mov_trem1
	
	ld hl,_p
	add hl,bc
	ld a,(hl)
	cp 3
	jr nz,_skp_mov_trem11
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	cp 1
	jr z,_skp_mov_trem21
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	cp -1
	jr nz,_skp_mov_trem11
   ._skp_mov_trem21
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	add a,a
	add a,a
	ld e,a
	ld a,3
	sub a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld d,a
	ld a,e
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,d
	ld (hl),a
   ._skp_mov_trem11	
	
	ld hl,_p
	add hl,bc
	ld a,(hl)
	cp 4
	jr nz,_skp_mov_trem12
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	cp 1
	jr z,_skp_mov_trem22
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	cp 1
	jr nz,_skp_mov_trem12
   ._skp_mov_trem22
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	add a,a
	add a,a
	ld e,a
	ld a,4
	add a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld d,a
	ld a,e
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,d
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
   ._skp_mov_trem12

	ld hl,_p
	add hl,bc
	ld a,(hl)
	cp 5
	jr nz,_skp_mov_trem13
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	cp -1
	jr z,_skp_mov_trem23
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	cp 1
	jr nz,_skp_mov_trem13
   ._skp_mov_trem23
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	add a,a
	add a,a
	ld e,a
	ld a,3
	sub a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld d,a
	ld a,e
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,d
	ld (hl),a
   ._skp_mov_trem13	

	ld hl,_q
	add hl,bc
	ld a,(hl)
	cp 0
	jr nz,_skp_mov_trem14
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_x
	add hl,bc
	ld a,(hl)
	add a,e
	ld (hl),a
   ._skp_mov_trem14

	ld hl,_q
	add hl,bc
	ld a,(hl)
	cp 1
	jr nz,_skp_mov_trem15
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	neg
	ld (hl),a
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	ld e,a
	ld hl,_y
	add hl,bc
	ld a,(hl)
	add a,e
	ld (hl),a
   ._skp_mov_trem15
   
	ld hl,_p
	add hl,bc
	ld a,(hl)
	cp 0
	jr nz,_skp_mov_trem16
	ld hl,_fx
	add hl,bc
	ld a,(hl)
	add a,a
	ld e,a
	ld a,3
	sub a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a
   ._skp_mov_trem16

	ld hl,_p
	add hl,bc
	ld a,(hl)
	cp 1
	jr nz,_skp_mov_trem
	ld hl,_fy
	add hl,bc
	ld a,(hl)
	add a,a
	ld e,a
	ld a,4
	sub a,e
	ld hl,_pt
	add hl,bc
	ld (hl),a

   ._skp_mov_trem
	pop bc
	inc bc
	ld a,c
	ld hl,_nt
	cp (hl)
	jp nz,_loop_mov_trem
	
// controle e mostrador de tempo		
	ld hl,(_tempo)
	dec hl
	ld (_tempo),hl
	ld de,6144+20
	call _print999
	
	ld hl,(_tempo)
	or a				//compara hl com de, 'or a' serve pra limpar flag c
	ld de,1
	sbc hl,de
	add hl,de
	jp c,_fim_jogo

// colisao trem preto com bandeiras
	ld hl,_y
	ld a,(hl)
	ld d,0
	ld e,a
	ex de,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	ex de,hl
	ld hl,_x
	ld a,(hl)
	ld h,0
	ld l,a
	add hl,de
	ld de,6144
	add hl,de
	push hl
	inc hl
	call RDVRM
	cp 112
	jr nz,_skp_peg_band1
	ld a,103
	call WRTVRM
	//call linha 840
	call _atual_ponto
   ._skp_peg_band1
	pop hl
	ld bc,32
	sbc hl,bc
	call RDVRM
	cp 112
	jr nz,_skp_peg_band2
	ld a,103
	call WRTVRM
	//call linha 840
	call _atual_ponto
   ._skp_peg_band2
   ._skp_mov_trem_delay

	ld hl,(_delayc)
	inc hl
	ld (_delayc),hl
	ld a,h
	cp 5
	jp nz,_skp_cursor_delay
	
	ld hl,0
	ld (_delayc),hl

	ld a,(_js)
	call GTSTCK
	cp 1
	jr nz,_jpstck0
	ld a,(_cy)
	sub a,3
	ld (_cy),a
	jr _skpstck
   ._jpstck0
	cp 5
	jr nz,_jpstck1
	ld a,(_cy)
	add a,3
	ld (_cy),a
	jr _skpstck
   ._jpstck1
	cp 3
	jr nz,_jpstck2
	ld a,(_cx)
	add a,3
	ld (_cx),a
	jr _skpstck
   ._jpstck2
	cp 7
	jr nz,_skpstck
	ld a,(_cx)
	sub a,3
	ld (_cx),a
	jr _skpstck
   ._skpstck

	ld a,(_cx)
	cp 255
	jr nz,_jplim0
	ld a,29
	ld (_cx),a
	jr _jplim1
   ._jplim0
	cp 32
	jr nz,_jplim1
	ld a,2
	ld (_cx),a
   ._jplim1
	ld a,(_cy)
	cp 0
	jr nz,_jplim2
	ld a,21
	ld (_cy),a
	jr _jplim3
   ._jplim2
	cp 24
	jr nz,_jplim3
	ld a,3
	ld (_cy),a
   ._jplim3

	//PUTSPRITE 1,(CX*8-4,CY*8-5),6,9
	ld a,(_cy)     //y
	rlc a
	rlc a
	rlc a
	sub a,5
	ld (_sp1),a
	ld a,(_cx)   //x
	rlc a
	rlc a
	rlc a
	sub a,4
	ld (_sp2),a
	ld a,9*4-4    
	ld (_sp3),a
	ld a,6      // cor. verificar cor +128 pra sprite aparecer gradativamente a esquerda da tela
	ld (_sp4),a
	ld hl,_sp1
	ld de,0x1b00   // sprite 0
	ld bc,4
	call LDIRVM
	
	//modificaçao posicao dos trilhos com espaço ou botão dos joysticks
	ld a,(_js)
	call GTTRIG
	jr nz,_skp_botao_solto
	ld a,0
	ld (_ptrig),a

   ._skp_botao_solto	
	ld a,(_js)
	call GTTRIG
	jp z,_skp_mod_tri
	ld a,(_ptrig)
	cp 0
	jp nz,_skp_mod_tri
	
	ld a,1
	ld (_ptrig),a

	ld hl,_cy
	ld a,(hl)
	ld d,0
	ld e,a
	ex de,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	add hl,hl
	ex de,hl
	ld hl,_cx
	ld a,(hl)
	ld h,0
	ld l,a
	add hl,de
	ld de,6144
	add hl,de
	ld (_ed),hl
	call RDVRM
	sub a,97
	ld (_dt),a
	ld (_da),a
	cp 5
	jr c,_skp_mod_tri11
	jr z,_skp_mod_tri11
	jp _skp_mod_tri
   ._skp_mod_tri11
	cp 2
	jp c,_skp_mod_tri
	
	ld hl,(_ed)
	inc hl
	call RDVRM
	ld (_dl),a
	dec hl
	dec hl
	call RDVRM
	ld (_do),a
	inc hl
	ld bc,32
	add hl,bc
	call RDVRM
	ld (_ds),a
	sbc hl,bc
	sbc hl,bc
	call RDVRM
	ld (_dn),a
   
   ._loop_mod_tri
	ld a,(_dt)
	inc a
	ld (_dt),a
	cp 6
	jr nz,_skp_mod_tri1
	ld a,2
	ld (_dt),a
   ._skp_mod_tri1
	ld a,(_dt)
	ld b,a
	ld a,(_da)
	cp b
	jp z,_skp_mod_tri
	
	ld a,(_dt)
	cp 2
	jr nz,_skp_mod_tri2
	ld a,(_ds)
	cp 103
	jr z,_skp_mod_tri2
	ld a,(_dl)
	cp 103
	jr z,_skp_mod_tri2
	call _mod_trilho
   ._skp_mod_tri2
	
	ld a,(_dt)
	cp 3
	jr nz,_skp_mod_tri3
	ld a,(_ds)
	cp 103
	jr z,_skp_mod_tri3
	ld a,(_do)
	cp 103
	jr z,_skp_mod_tri3
	call _mod_trilho
   ._skp_mod_tri3

	ld a,(_dt)
	cp 4
	jr nz,_skp_mod_tri4
	ld a,(_dn)
	cp 103
	jr z,_skp_mod_tri4
	ld a,(_do)
	cp 103
	jr z,_skp_mod_tri4
	call _mod_trilho
   ._skp_mod_tri4   
	
	ld a,(_dt)
	cp 5
	jr nz,_skp_mod_tri5
	ld a,(_dn)
	cp 103
	jr z,_skp_mod_tri5
	ld a,(_dl)
	cp 103
	jr z,_skp_mod_tri5
	call _mod_trilho
   ._skp_mod_tri5  
	jp _loop_mod_tri
	
   ._skp_mod_tri
   ._skp_cursor_delay
   
    
	// se pressionar SHIFT, aumenta a velocidade do jogo (exceto do movimento do cursor)
	ld a,6
	call 0x0141    //SNSMAT
	bit 0,a
	jr nz,_skp_vel_jogo
	ld a,2
	ld (_vdelayt),a
	jr _skp_vel_jogo1
   ._skp_vel_jogo
	ld a,15
	ld (_vdelayt),a
   ._skp_vel_jogo1
	

	jp _loop_principal
	
   ._skp_tudo  // usado para testes
	jr _skp_tudo
	
#endasm	  

}
	