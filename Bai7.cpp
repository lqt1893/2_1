#include <stdio.h>
int main()
{
	int n, t, b;
	printf("Nhap so km: ");
	scanf("%d", &n);
	b=n;
	if (n>0)
	{
		t=15000;
		n--;
		if (n>0)
			if (n<=4)
				t=t+13500*n;
			else
			{
				t=t+54000;
				n=n-4;
				t=t+11000*n;
			}
	}
	else t=0;
	if (b>120)
		t=t*0.9;
	printf("So tien phai tra la: %d dong", t);
}
