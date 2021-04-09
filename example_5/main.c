#include <stdio.h>
#include <stdlib.h>
void input();
void process(int);
int fine;

int main()
{
    input();
    printf("The total fine is:\t\t%d",fine);
    return 0;
}
void input()
{
    int x[10],i;
    for(i=1;i<=10;i++)
    {
        printf("plz enter the speed of the vehicle:\t\t");
        scanf("%d",&x[i]);
    }
    process(x);
}
void process(int y[])
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(y[i]>100)
            fine+=500;

    }
}
