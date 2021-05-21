#include <stdio.h>
#include <stdlib.h>
char data[30];
int main()
{
    FILE * dima;
    dima=fopen("dima.txt","r");
    if (dima==NULL)
    {
        printf("Nothing here maam");
    }
    else
    {
        while (!feof(dima))
        {
            fgets(data,30,dima);
            printf("%s",data);
        }
    }
    fclose(dima);
}
