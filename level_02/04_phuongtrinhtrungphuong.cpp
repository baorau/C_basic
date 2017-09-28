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
if( a!=0 && b!=0 && c!=0)
{
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        if     (x1>0 && x2>0)
        {
            printf("x1 = %lf",+sqrt(x1));
            printf("x2 = %lf",-sqrt(x1));                      
            printf("x3 = %lf",+sqrt(x2));
            printf("x4 = %lf",-sqrt(x2));
        }
 
        else if(x1>0&&x2==0)
        {
            printf("x1 = %lf",+sqrt(x1));
            printf("x2 = %lf",-sqrt(x1));
            printf("x3 = 0");
        }
 
        else if(x1==0&&x2>0)
        {
            printf("x1 = %lf",+sqrt(x2));
            printf("x2 = %lf",-sqrt(x2));
            printf("x3 = 0");
        }
 
        else if(x1>0&&x2<0)
        {
            printf("x1 = %lf",+sqrt(x1));
            printf("x2 = %lf",-sqrt(x1));
        }
 
        else if(x1<0&&x2>0)
        {
            printf("x1 = %lf",+sqrt(x2));
            printf("x2 = %lf",-sqrt(x2));
        }
 
        else if(x1==0&&x2==0)
        {
            printf("x = 0");
        }
 
        else if(x1<0&&x2<0)
        {
            printf("PT VO NGHIEM");
        }
    }
    else if( D == 0 )
    {
        x1=-b / (2*a);
        if (x1>0)
        {
            printf("x1 = %lf",+sqrt(x1));
            printf("x2 = %lf",-sqrt(x1));
        }
        else if(x1==0)
        {
            printf("x = 0");
        }
        else if(x1<0)
        {
            printf("Pt VO NGHIEM");
        }
    }
    else if(D<0)
    {
        printf("Pt VO NGHIEM");
    }
}
else if (a!=0&&b!=0&&c==0)
{
    if ((-b/a)>0)
    {
        printf("x = 0");
        printf("x1 = %lf",+sqrt(-b/a));
        printf("x1 = %lf",-sqrt(-b/a));
    }
    else printf("x = 0");
}
else if (a!=0&&b==0&&c!=0)
{
    if ((-c/a)>0 )
    {
        printf("x1 = %lf",+sqrt(sqrt(-c/a)));
        printf("x1 = %lf",-sqrt(sqrt(-c/a)));
    }
    else printf("Pt VO NGHIEM");
}
else if (a==0&&b!=0&&c!=0)
{
    if ((-c/b)>0)
    {
        printf("x1 = %lf",+sqrt(-c/b));
        printf("x1 = %lf",-sqrt(-c/b));
    }
    else printf("PT VO NGHIEM");
}
else if (a==0&&b==0&&c==0)
{
    printf("Luon Dung");
}
else if (a==0&&b==0&&c!=0)
{
    printf("PT VO NGHIEM");
}
else if ((a==0&&b!=0&&c==0) || (a!=0&&b==0&&c== 0) )
{
    printf("x = 0");
}
}
