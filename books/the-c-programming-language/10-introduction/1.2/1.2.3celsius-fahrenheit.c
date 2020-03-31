#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* Celsius to Fahrenheit */

    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fanhrenheit to Celsius Table\n");
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.1f %2.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
    return 0;

}
