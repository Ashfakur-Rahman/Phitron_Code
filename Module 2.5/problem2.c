#include<stdio.h>
int main()
{
    int num1,num2;

    scanf("%d %d",&num1,&num2);

    int add=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    float div=(float)num1/num2;

    printf("%d + %d = %d\n",num1,num2,add);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,mul);
    printf("%d / %d = %.2f\n",num1,num2,div);
    return 0;
}
