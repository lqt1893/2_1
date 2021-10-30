#include <stdio.h>
int main()
{
	int t, n;
	printf("Nhap thang: ");
	scanf("%d", &t);
	printf("Nhap nam: ");
	scanf("%d", &n);
	if (t==2)
		if (n/4)
			if (n%100==0)
				if (n%400!=0)
					printf("Thang 2 co 28 ngay");
				else
					printf("Thang 2 co 29 ngay");
			else printf("Thang 2 co 29 ngay");
		else
			printf("Thang 2 co 28 ngay");
	else 
		if (t==4||t==6||t==9||t==11)
			printf("Thang %d co 30 ngay", t);
		if (t==1||t==3||t==5||t==7||t==8||t==10||t==12)
			printf("Thang %d co 31 ngay", t);
}
