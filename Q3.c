#include<stdio.h>
int swap(int[],int);
int main()
{
    int i,ar[4];
    printf("Enter The Numbers You Want to sort\n");
    for(i=0;i<4;i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("Your Sorted Numbers are:\n");
    for(i=0;i<4;i++)
    {
       printf("%d ",swap(ar,i));
    }
}
int swap(int k[],int m)
{   int temp;
    for(int i=0;i<3;i++)
    {
       for(int j=i;j<3;j++)
    {
       if(k[i]>k[j+1])
       {   temp=k[i];
           k[i]=k[j+1];
           k[j+1]=temp;
       }
    }
    }
   return(k[m]);
}
