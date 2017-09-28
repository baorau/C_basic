#include <stdio.h>
#include <math.h>
int main()
{ float a,b,c,x1,x2,D;
printf("Moi nhap a = ");scanf("%f",&a);
printf("Moi nhap b = ");scanf("%f",&b);
printf("Moi nhap c = ");scanf("%f",&c);
D=pow(b,2)-(4*a*c);
x1=(-b+sqrt(D))/(2*a);
x2=(-b-sqrt(D))/(2*a);
if (D==0)
	{
	printf("phuong trinh co nghiem kep");
	printf("x= ",(-b)*(2*a));
	}
if (D>0) 
 	{
	 printf("phuong trinh co 2 nghiem \n ");
	printf("x1= %f \n",x1);
	printf("x2= %f",x2);}
if (D<0) printf(" PT vo nghiem");

	
}
