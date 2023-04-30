#include "mbed.h"

AnalogIn pot1(p19);
AnalogIn pot2(p20);

PwmOut red(p23);
PwmOut green(p24);

int main() {
    while(1) {
        red = 1- pot1;
        green = 1 - pot2;
        printf("Red Potentiometer %f , Green Potentiometer %f \n" , pot1.read(), pot2.read());
        wait(0.5);
    }    
}