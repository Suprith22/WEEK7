#include <stdio.h>
float avg(int ar[],int size) 
{ 
    int s = 0;
    for (int i = 0;i<size;i++)
	{
        s+=ar[i];
    }
    return float(s/size);
}
int main() 
{
    int ar[5]={100,50,20,40,50};
    printf("Average: %f", avg(ar, 5));
    return 0;
}  
