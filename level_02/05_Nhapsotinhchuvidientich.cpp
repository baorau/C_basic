#include<stdio.h>
#include<math.h>
#define PI 3.1415
int main()
{
	int x;
	printf("NHAP 1 de tinh cv,dt hinh tam giac \n NHAP 2 de tinh cv,dt hinh vuong \nNHAP 3 de tinh cv,dt hinh chu nhat \nNHAP 4 de tinh cv,dt hinh tron \n");
	scanf("%d",&x);
if (x==1)
	{float a,b,c,C,p,S;
	printf("nhap canh 1 =");scanf("%f",&a);
	printf("nhap canh 2 =");scanf("%f",&b);
	printf("nhap canh 3 =");scanf("%f",&c);
	C=a+b+c;
	p=C/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi tam giac=%.2f",C);
	printf("\nDIEN TICH tam giac =%.2f ",S);
	fflush;
	}
		

else if (x==2)
	 { float a;
	 printf(" Nhap canh hinh vuong =");scanf("%f",&a);
	 printf("Chu vi hinh vuong = %.2f \n ",a*4);
	 printf("Dien tich hinh vuong = %.2f ",a*a);
	 fflush;
	 }
	 
else if (x==3)	
	 { float a,b;
	 printf("Nhap chieu dai hcn  =");scanf("%f" ,&a);
	 printf("Nhap chieu rong hcn = ");scanf("%f" ,&b);
	 printf("Chu vi hcn = %.2f\n " ,(a+b)*2);
	 printf("Dien tich hcn  = %.2f ",a*b);
	 fflush;
	 }
else if (x==4)
	{				 
	float a;
	printf("Nhap do dai ban kinh r ");
	scanf("%f",&a);
	printf("Chu vi %.2f",pow(a,2)*PI);
	printf("\nDien tich %.2f",2*a*PI);
}
}
