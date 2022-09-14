#include<stdio.h>
void displ(int,int);
void displ(int k[],int b)
{
    int i;
    for(i=b-1;i>=0;i--)
    {
        printf("%d ",k[i]);
    }
    return ;
}
int main()
{
    int a[1000],i,n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    displ(a[n],n);
    return 0;
}
