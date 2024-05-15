#include "MKL25Z4.h"
#include "DECOBCD.h"
#include "ctype.h"

int Display [7][14] = {0, 0, 0, 0, 0, 0, 1}, //0
                      {1, 0, 0, 1, 1, 1, 1}, //1
                      {0, 0, 1, 0, 0, 1, 0}, //2
                      {0, 0, 0, 0, 1, 1, 0}, //3
                      {1, 0, 0, 1, 1, 0, 0}, //4
                      {0, 1, 0, 0, 1, 0, 0}, //5
                      {0, 1, 0, 0, 0, 0, 0}, //6
                      {0, 0, 0, 1, 1, 1, 1}, //7
                      {0, 0, 0, 0, 0, 0, 0}, //8
                      {0, 0, 0, 0, 1, 0, 0}, //9
                      {0, 0, 0, 0, 0, 1, 0}, //a
                      {1, 1, 0, 0, 0, 0, 0}, //b
                      {0, 1, 1, 0, 0, 0, 1}, //c
                      {1, 0, 0, 0, 0, 1, 0}; //d

int Segmento [7] = {0, 1, 2, 3, 4, 5, 6, 7};
int Decodificador(char Letra) {
    char Tecla = toupper(Letra);
    switch (Tecla) {
        case '0':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][0] << Segmento[i]);
            } break;
        case '1':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][1] << Segmento[i]);
            } break;
        case '2':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][2] << Segmento[i]);
            } break;
        case '3':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][3] << Segmento[i]);
            } break;
        case '4':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][4] << Segmento[i]);
            } break;
        case '5':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][5] << Segmento[i]);
            } break;
        case '6':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][6] << Segmento[i]);
            } break;
        case '7':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][7] << Segmento[i]);
            } break;
        case '8':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][8] << Segmento[i]);
            } break;
        case '9':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][9] << Segmento[i]);
            } break;
        case 'A':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][10] << Segmento[i]);
            } break;
        case 'B':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][11] << Segmento[i]);
            } break;
        case 'C':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][12] << Segmento[i]);
            } break;
        case 'D':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[i][13] << Segmento[i]);
            } break;
    }
}