#include <stdio.h>
int main()
{
	int a;
	printf("Nhap so nguyen: ");
	scanf("%d", &a);
	if (a>=1&&a<=9)
		printf("%d", a);
	else
		printf("Khong doc duoc");
}
