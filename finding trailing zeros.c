#include<stdio.h>
int main()
{
    int a,i,fact=1,k;
    int arr[k];
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("%d",fact);
    int temp = fact;
    while(temp!=0)
    {
        int rem = temp/10;
        arr[k]=rem;
        k++;
    }
    for(k=0;k<100;k++)
    {
        if(arr[k]==0)
        {
            int count=0;
            count++;
        }

    }
}
