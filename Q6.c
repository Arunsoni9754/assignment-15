#include<stdio.h>
int duplicate(int k[])
{
    int i;
    for(i=0;i<10;i++)
    {
        if(k[i]==k[i+1])
        {
            k[0]=k[i];
            break;
        }
    }
    return k[0];
}

int main()
{
    int i,a[10],n;
    printf("Enter the array values");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    n=duplicate(a);
    printf("the first occurence element is %d",n);
}
