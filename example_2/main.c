#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void usr();

main()
{
    usr();
}
void fninput()
{
    int i;
    int age;
    char num;
    char name[100];
    char disease[100];


    r:
    printf("A-add inputs\nB-exit\nPlz enter what u want to do:\t\t");
    scanf("%s",&num);
    switch(num)
    {
    case 'A':
        {

        printf("Plz enter the patient's name:\t\t");
        scanf("%s",&name);
        printf("Plz enter the patients disease:\t\t");
        scanf("%s",&disease);
        printf("Plz enter the patients age:\t\t");
        scanf("%d",&age);
         FILE * pf=fopen("patient.txt","a");
        fprintf(pf,"%s		%s		%d\n",name,disease,age);
        fclose(pf);
        system("cls");
        goto r;
        break;}
    case 'B':
        {

        printf("Enter any key to continue!\n");
        getch();
        system("cls");
        break;}
    default:
        {
            printf("Plz enter a valid key!\n");
            printf("Enter any key to continue!\n");
            getch();
            system("cls");
            goto r;
            break;
        }
}
}
void fnoutput()
{
    FILE * pf;
    char data[100];
    pf=fopen("patient.txt","r");
    while(!feof(pf))
    {
        fgets(data,100,pf);
        printf("%s",data);
    }
    fclose(pf);
    printf("Enter any key to continue!\n");
    getch();
    system("cls");
}
void fnrewrite()
{
    int num,i,age;
    char name[20];
    char disease[20];
    FILE * pf;
    pf=fopen("patient.txt","w");
    printf("Plz enter how many inputs u wish to input:\t\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      printf("Plz enter the patient's name:\t\t");
      scanf("%s",&name);
      printf("Plz enter the patients disease:\t\t");
      scanf("%s",&disease);
      printf("Plz enter the patients age:\t\t");
      scanf("%d",&age);
      fprintf(pf,"%s		%s		%d\n",name,disease,age);
    }
    fclose(pf);
    printf("Enter any key to continue!\n");
    getch();
    system("cls");
}
void usr()
{
    char let;
    printf("                                        welcome to MyHospital manage system\n");
    printf("                                        ***********************************\n\n\n");
    printf("A-Enter data to the database\nB-Read data in the data file\nC-Rewrite the database\nD-Exit\nEnter the function you want to execute:\t\t");
    scanf("%s",&let);
    switch(let)
    {
    case 'A':
        {
            system("cls");
            fninput();
            printf("Enter any key to continue!\n");
            getch();
            system("cls");
            main();
            break;
        }
    case 'B':
        {
            system("cls");
            fnoutput();
            printf("Enter any key to continue!\n");
            getch();
            system("cls");
            main();
            break;
        }
    case 'C':
        {
            system("cls");
            fnrewrite();
            printf("Enter any key to continue!\n");
            getch();
            system("cls");
            main();
            break;
        }
    case 'D':
        {
            system("cls");
            printf("Thank you for using our system!");
            break;
        }
    default:
        {
            system("cls");
            printf("Plz enter a valid key!\n");
            printf("Enter any key to continue!\n");
            getch();
            system("cls");
            main();
            break;
        }
    }

}
