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
				if (n%900==200||n%900==600)
					printf("Thang 2 co 28 ngay");
				else
					printf("Thang 2 co 29 ngay");
			else printf("Thang 2 co 29 ngay");
		else
			printf("Thang 2 co 28 ngay");
	else 
		if (t==4||t==6||t==9||t==11)
			printf("Thang %d co 30 ngay", t);
		else
			printf("Thang %d co 31 ngay", t);
}
