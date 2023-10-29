/*
Program to read an analog voltage to modulate an LED output voltage
Verion 1
29/10/23
Rohan Kakade
*/
#include "mbed.h"

//Declaring Analog input pin object and PwmOut pin object
AnalogIn pot(A0); //potentiometer wiper pin connected to pin A0
PwmOut pwm(D2); //LED connected to pin D2

int main()
{
    while (true) 
    {
        float pot_val = pot.read();
       // pot_val = pot_val*3.3; //enable this to get voltages between 0 and 3.3V
               
       //display a value between 0 and 1        
        printf("Potentiometer reading: %1.2f \n",pot_val); //%1.2f allows printing 3 significant figures with 2 d.p.
        thread_sleep_for(500); //some delay before reading the analog pin again

        //assign the value to pwm (led will glow with the duty cycle equal to the pot_val)
        pwm = pot_val;
    }
}

