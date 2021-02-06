#include <stdio.h>

int main()
{
    int r,d,c,a;
    printf("Enter radius of circle:");
    scanf("%g", &r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*(r*r);
    printf("Diameter of circle = %.2f units \n",d);
    printf("Circumference of circle = %.2f units \n",c);
    printf("Area of circle = %.2f sq.units ",a);
	return 0;
}
