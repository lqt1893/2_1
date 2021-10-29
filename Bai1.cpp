#include <stdio.h>
int main()
{
	int a;
	printf("Nhap so nguyen: ");
	scanf("%d", &a);
	if (a>=1&&a<=9)
		switch (a)
		{
			case 1:printf("mot"); break;
			case 2:printf("hai"); break;
			case 3:printf("ba"); break;
			case 4:printf("bon"); break;
			case 5:printf("nam"); break;
			case 6:printf("sau"); break;
			case 7:printf("bay"); break;
			case 8:printf("tam"); break;
			case 9:printf("chin"); break;
		}
	else
		printf("Khong doc duoc");
}
