#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,h;
    printf("Student 1");
    printf("\nEnter the tamil marks :");
    scanf("%d",&a);
    printf("Enter the english marks :");
    scanf("%d",&b);
    printf("Enter the maths marks :");
    scanf("%d",&c);
    printf("Enter the science marks :");
    scanf("%d",&d);
    printf("Enter the social science marks :");
    scanf("%d",&e);
    int g=0;
    g=(a+b+c+d+e+f);
    printf("%d is the total",g);
    printf("\n%d is the average",g/5);

}
