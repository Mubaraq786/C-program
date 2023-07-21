#include<stdio.h>
int main()
{
int n,m,r,i;
scanf("%d %d %d",&n,&m,&r);
int a[n],b[m],sum1=0,sum2=0;
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
    sum1=sum1+a[i];
}
for(i=1;i<=m;i++)
{
    scanf("%d",&b[i]);
    sum2=sum2+b[i];
}
if(sum1==sum2)
    printf("Balanced");
else if(sum1>sum2)
    printf("%d",(sum2-sum1)-r);
else
    printf("%d",(sum1-sum2)+r);
return 0;
}
