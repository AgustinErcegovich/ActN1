#include "MKL25Z4.h"

int llave = 8;
int BCD [10][4] = {
                  {0, 0, 0, 0},
                  {0, 0, 0, 1},
                  {0, 0, 1, 0},
                  {0, 0, 1, 1},
                  {0, 1, 0, 0},
                  {0, 1, 0, 1},
                  {0, 1, 1, 0},
                  {0, 1, 1, 1},
                  {1, 0, 0, 0},
                  {1, 0, 0, 1}
                  };
int bcd1  [4] = {0, 1, 2, 3};
int bcd10 [4] = {4, 5, 6, 7};

int main() {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    while (1) {
        PTA -> PDIR & (1 << llave);
        if (llave == 0) {
            for(int i=0;i<10;i++) {
                for(int j=0;j<4;j++) {
                    PTA -> PSOR |= (BCD[i][j] << bcd10[j]);
                }
                for(int e=0;e<10;e++) {
                    for(int f=0;f<4;f++) {
                        PTA -> PSOR |= (BCD[e][f] << bcd1[f]);
                    }
                }
            }
        } else if (llave == 1) {
            for(int g=9;g>=0;g--){
                for(int h=0;h<4;h++) {
                    PTA -> PSOR |= (BCD[g][h] << bcd10[h]);
                }
                for(int r=9;r>=0;r--) {
                    for(int t=0;t<4;t++) {
                        PTA -> PSOR |= (BCD[r][t] << bcd10[t]);
                    }
                }
            }
        }
    }
}
