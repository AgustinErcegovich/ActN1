#include "MKL25Z4.h"
#include "DECOBCD.h"
#include "ctype.h"

int Display [14][7] = {
                      {0, 0, 0, 0, 0, 0, 1}, //0
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
                      {1, 0, 0, 0, 0, 1, 0}  //d
                      };

int Segmento [7] = {0, 1, 2, 3, 4, 5, 6, 7};
int Decodificador(char Letra) {
    char Tecla = toupper(Letra);
    switch (Tecla) {
        case '0':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[0][i] << Segmento[i]);
            } break;
        case '1':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[1][i] << Segmento[i]);
            } break;
        case '2':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[2][i] << Segmento[i]);
            } break;
        case '3':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[3][i] << Segmento[i]);
            } break;
        case '4':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[4][i] << Segmento[i]);
            } break;
        case '5':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[5][i] << Segmento[i]);
            } break;
        case '6':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[6][i] << Segmento[i]);
            } break;
        case '7':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[7][i] << Segmento[i]);
            } break;
        case '8':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[8][i] << Segmento[i]);
            } break;
        case '9':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[9][i] << Segmento[i]);
            } break;
        case 'A':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[10][i] << Segmento[i]);
            } break;
        case 'B':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[11][i] << Segmento[i]);
            } break;
        case 'C':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[12][i] << Segmento[i]);
            } break;
        case 'D':
            for(int i=0;i<7;i++) {
                PTB -> PSOR (Display[13][i] << Segmento[i]);
            } break;
    }
}
