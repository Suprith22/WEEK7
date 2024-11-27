#include<stdio.h>
int fun(int x)
{
if(x==3)
{
return 3;
}
else if(x==2)
{
return 2;
}
else if(x==1)
{
return 1;
}

return fun(x-1)+fun(x-2)+fun(x-3);
}
int main()
{
int a;
printf("Enter some n:");
scanf("%d",&a);
    int y=fun(a);
    printf("%d",y);
return 0;
}
