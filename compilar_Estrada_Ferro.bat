path=c:\z88dk\bin

zcc +msx -subtype=rom -lmalloc -lm -O3 -oestferro.rom -lndos -create-app Estrada_Ferro.c


del *.bin
del *.lst
del *.def
pause