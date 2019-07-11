#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int val[100];
    int i=0;
    while(i<100 && scanf(" %2d",&val[i])==1)
    {
        sum+=val[i];
        i++;
    }
    printf("The sum is %d", sum);



return 0;
}
