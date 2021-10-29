#include <stdio.h>
int main()
{
	char ck;
	printf("Nhap chu cai: ");
	scanf("%c", &ck);
	if(ck>=97 && ck<=122)
		printf("%c", ck-32);
		else
			if(ck>=65 && ck<=90)
				printf("%c", ck+32);
			else printf("Day khong phai la chu cai!");
}
