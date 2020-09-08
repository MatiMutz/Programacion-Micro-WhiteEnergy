/* 1. Directivas para Incluir archivos, #include */
#include "mbed.h"
#include "TextLCD.h"

TextLCD LCD8x2(PTB8, PTB9, PTB10, PTB11, PTE2, PTE3, TextLCD::LCD16x2);

void main(void)
{
    for (;;)
    {
        LCD8x2.locate(0, 0);
        LCD8x2.printf("KOVA");
        LCD8x2.locate(0, 1);
        LCD8x2.printf("PUTO");

        wait(3);

        LCD8x2.locate(0, 0);
        LCD8x2.printf("DALE");
        LCD8x2.locate(0, 1);
        LCD8x2.printf("BOKE");

        wait(3);
    }
}