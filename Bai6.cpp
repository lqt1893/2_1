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
	if (b<a)
	{
		x=a;
		a=b;
		b=x;
	}
	if (c<a)
	{
		x=a;
		a=c;
		c=x;
	}
	if (d<a)
	{
		x=a;
		a=d;
		d=x;
	}
	if (c<b)
	{
		x=b;
		b=c;
		c=x;
	}
	if (d<b)
	{
		x=d;
		d=b;
		b=x;
	}
	if (d<c)
	{
		x=c;
		c=d;
		d=x;
	}
	printf("%d %d %d %d", a, b, c, d);
}
