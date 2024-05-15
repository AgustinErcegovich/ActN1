#include "MKL25Z4.h"

int llave = 0;
int BCD [4][10] = {0, 0, 0, 0},
                  {0, 0, 0, 1},
                  {0, 0, 1, 0},
                  {0, 0, 1, 1},
                  {0, 1, 0, 0},
                  {0, 1, 0, 1},
                  {0, 1, 1, 0},
                  {0, 1, 1, 1},
                  {1, 0, 0, 0},
                  {1, 0, 0, 1};

int main() {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    while (1) {
        PTA -> PDIR & (1 << llave);
        if (llave == 0) {
            
        } else if (llave == 1) {

        }
    }
}