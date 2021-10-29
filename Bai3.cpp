#include <stdio.h>
int main()
{
	float x, a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a==0)
		if (b==0)
			printf("Phuong trinh co vo so nghiem");
		else
			printf("Phuong trinh vo nghiem");
	else
		printf("Phuong trinh co nghiem la: %f", x=b/a);
}
