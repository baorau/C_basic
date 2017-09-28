#include <stdio.h>
#include <math.h>
main()
{
	float a;
	int b;
	printf("Nhap A = ");scanf("%f",&a);
	b=a*2;
	if (b%2==1) printf("A la so ban nguyen");
	else
		printf("A ko phai la so ban nguyen"); 
}
