#include<stdio.h>

    int main(){
        float celsisus,farenheit;
        printf("Enter the temperature in celsisus: ");
        scanf("%f", &celsisus);
        farenheit = (celsisus * 9/5) + 32;
        printf("Temperature in farenheit = %.2f\n", farenheit);
        return 0;
 }