AES
===

_mm_aesdec_si128 and _mm_aesenc_si128 AES instructions emulation in C.

# Example

Compile the source code (e.g. using GCC): 

`gcc gmult.c aes.c main.c -o aes`

And run:

```bash
./aes
Original message:
00 11 22 33 44 55 66 77 88 99 aa bb cc dd ee ff 
soft_aesenc:
48 07 f3 cf dc c9 29 d0 06 f1 29 7c db 24 c5 9f 
soft_aesdec:
f6 99 15 d7 0a df eb ce a3 f9 23 2b 6a 36 0e 8c 
```
