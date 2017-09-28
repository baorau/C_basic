#include <stdio.h>
#include <math.h>
main()
{ int a,b,c;
printf("Nhap A = "); scanf("%d",&a);
b=sqrt(a);
c=(int)b*(int)b;
if  (c==a) printf("A la so chinh phuong");
else 
	printf("A khong phai la so chinh phuong");
}
