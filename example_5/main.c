#include <stdio.h>
#include <stdlib.h>
main()
{
    char name[20],table[3][4];
    //i used gets() and puts() functions for the first time
    puts("what is your name");
    gets(name);
    int i,j;
    //i tried out to convey a msg using double arrays
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a letter to covey a msg:");
            scanf("%s",&table[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%c\t",table[i][j]);
        }
        printf("\n");
    }

}
