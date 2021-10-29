#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	d=b*b-4*a*c;
	if (d<0)
		printf("Phuong trinh vo nghiem");
	if (d==0)
		printf("Phuong trinh co nghiem kep x = %f", -b/(2*a));
	if (d>0)
	{
		printf("Phuong trinh co nghiem: \n");
		printf("x1 = %f \n", (-b+sqrt(d))/(2*a));
		printf("x1 = %f", (-b-sqrt(d))/(2*a));
	}
}
