#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,C,p,S;
printf("nhap canh 1 =");scanf("%f",&a);
printf("nhap canh 2 =");scanf("%f",&b);
printf("nhap canh 3 =");scanf("%f",&c);
C=a+b+c;
p=C/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
printf("chu vi tam giac=%.0f",C);
printf("\nDIEN TICH tam giac =%.2f ",S);
}
