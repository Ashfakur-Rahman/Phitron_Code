#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<5000)
        printf("Something\n");
    else
    {
        if(num<10000)
            printf("Levis Bag\n");
        else if(num<=20000)
            printf("Gucci Bag\n");
        else
        {
            printf("Gucci Bag\n");
            printf("Gucci Belt\n");
        }

    } 
    
    
    
}