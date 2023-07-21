#include<stdio.h>
int main()
{
    int a,i,num;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
       // printf("%d",arr[i]);
    }
    scanf("%d",&num);
    int pos;
    scanf("%d",&pos);
    for(i=a-1;i>=pos-1;i--,a++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;

     for(i=0;i<a;i++)
    {
        //scanf("%d",&arr[i]);
       printf("%d",arr[i]);
    }

}
