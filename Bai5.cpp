#include <stdio.h>
int main()
{
	int a, b, c, d, x;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Nhap d: ");
	scanf("%d", &d);
	x=a;
	if (b<x)
		x=b;
	if (c<x)
		x=c;
	if (d<x)
		x=d;
	printf("So co gia tri nho nhat la: %d", x);
}
