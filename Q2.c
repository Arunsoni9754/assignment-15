#include<stdio.h>
//int large(int);
int large(int a[])
{
    int i;
    for(i=1;i<=9;i++)
    {
        if(a[0]>a[i])
        {
            a[0]=a[i];    
        }
    }
    return a[0];
}
int main()
{
   int a[10];
    int i;
    printf("Enter the values ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=large(a);
        printf("The largest number is %d",j);

return 0;
}
