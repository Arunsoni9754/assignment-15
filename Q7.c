#include<stdio.h>
int duplicate(int k[])
{
    int i,count=0,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<=9;j++)
        {
        if(k[i]==k[j])
        {
            count++;
        }
    }
    }
    return count;
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
    printf("the duplicate elements are %d",n);
}
