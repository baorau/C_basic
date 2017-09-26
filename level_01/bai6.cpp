#include <stdio.h>
main()
{
int a,x,y,z;
printf(" Nhap so co 3 chu so :");scanf("%d",&a);
x=a%10;
y=(a/10)%10;
z=a/100;
printf(" So dao nguoc        :%d%d%d",x,y,z);
}
