#include "mbed.h"       //add mbed library

AnalogIn pot1(p19);     //define potentiometer 1 as pin 19 for analog input pot1
AnalogIn pot2(p20);     //define potentiometer 2 as pin 20 for analog input pot2

PwmOut red(p23);    //define pulse width modulation output to pin 23 led as red
PwmOut green(p24);  //define pulse width modulation output to pin 24 led as green 

int main() {    //start main program 
    while(1) {          //Start while loop
        red = 1- pot1;      //red led is set to 1 off and modified by pot 1
        green = 1 - pot2;   //green led is set to 1 off and modified by pot 2
        printf("Red Potentiometer %f , Green Potentiometer %f \n" , pot1.read(), pot2.read()); //print out pot settings
        wait(0.5);          //wait so you can read pot settings
    }                   //end while loop
}               //end main program