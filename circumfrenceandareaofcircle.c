#include<stdio.h>

int main(){
    float radius , circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2 * 3.14 * radius;
    printf("Circumference of the circle = %.2f\n", circumference);

   float area = 3.14 * radius * radius ;
   printf("area of circle = %.2f\n", area);
 
    return 0;
}
