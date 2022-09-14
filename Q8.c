#include<stdio.h>
void dupli(int k[])
{
    int h[10],l;
    for(int i=0;i<7;i++)
    {
        l=0;
        
        for(int j=i+1;j<7;j++)
        {
    
         if(k[i]==k[j])
         {
            l=1;
             for(int g=j;g<6;g++)
    {
    k[g]=k[g+1];
    }
            break;
         }  
        }
        if(l==0&&i!=6)
        {printf("\n%d ",k[i]);}
    }

}
int main(){
int a[10];
for(int i=0;i<7;i++)
{
    scanf("%d",&a[i]);
}
dupli(a);
}
