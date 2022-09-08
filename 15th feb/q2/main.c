//WAP that prints the temperature converted from the input unit to
//the other two units.The units possible are Celsius(C),Fahrenheit(F)
//and Kelvin(K).
//Write three functions-one takes Celsius input,another takes Fahrenheit
//input,and the third takes Kelvin input.The output of each functions
//are the values in the other two temperature units.E.g.Celsius input
//implies output in Fahrenheit and Kelvin.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,f,k;
    printf("Enter Temperature values in C_F_K respectively : ");
    scanf("%d %d %d",&c,&f,&k);
    cel(c);
    fah(f);
    kel(k);

    return 3;
}
void cel(int c)
{
    printf("\nCelsius Conversions-->");
    printf("\nValue of %d in Fahrenheit is %.2f\n",c,((9/5.0)*c)+32.0);
    printf("Value of %d in Kelvin is %d\n",c,273+c);
}
void fah(int f)
{
    printf("\nFahrenheit Conversions-->");
    printf("\nValue of %d in Celsius is %.2f\n",f,(5/9.0)*(f-32));
    printf("Value of %d in Kelvin is %.2f\n",f,273.0+(f-32.0)*(5/9.0));
}
void kel(int k)
{
    printf("\nKelvin Conversions-->");
    printf("\nValue of %d in Celsius is %.2f\n",k,k-273.0);
    printf("Value of %d in Fahrenheit is %.2f\n",k,32.0+(k-273)*(9/5.0));
}
