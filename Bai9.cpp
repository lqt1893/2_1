#include <stdio.h>
int main()
{
	float a, b, c, x, y, z;
	printf("Nhap 3 canh:\n");
	scanf("%d %d %d", &x, &y, &z);
	a=x;
	b=y;
	c=z;
	if (y>x)
		if (z>y)
		{
			a=z;
			b=y;
			c=x;
		}
		else
		{
			a=y;
			b=x;
			c=z;
		}
	if (b+c<=a)
		printf("Day khong phai la tam giac");
	else
		if(a==b&&a==c)
			printf("Day la tam giac deu");
		else
			if(a*a==b*b+c*c)
				if(b==c)
					printf("Day la tam giac vuong can");
				else
					printf("Day la tam giac vuong");
			else
				if(a==b||a==c)
					printf("Day la tam giac can");
				else
					printf("Day la tam giac thuong");
			
}
