#include<stdio.h>

int main() {
	float r, a, c;
	const float PI=3.14;
	printf("Enter the radius of Circle: ");
	scanf("%f", &r);
	a= PI*r*r;
	c=2*PI*r;
	printf("Area and Circumference of a Circle :%.2f %.2f\n\n", a, c);
	return 0;
}
