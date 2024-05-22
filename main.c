#include "MKL25Z4.h"
#include "TECLADOMATRICIAL.h"
#include "DECOBCD.h"

int Segmento [7] = {0, 1, 2, 3, 4, 5, 6, 7};

int main(){
    Puerto(A);
    SIM -> SCGC5 |= SIM_SCGC5_PORTB_MASK;
    for (int j=0;j<7;e++) {
        PORTB -> PCR[Segmento[j]] |= PORT_PCR_MUX(1);
    }
    while (1) {
        char Tecla = TeclaPresionada(A);
        Decodificador(Tecla);
    }
}
