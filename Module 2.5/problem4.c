#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<0) printf("Negative\n");
    else if(num>0) printf("Positive\n");
    else printf("Zero\n");
    return 0;
}