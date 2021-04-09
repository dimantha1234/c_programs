#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void usr_input();
main()
{
    usr_input();
}
void fnusr()
{
    char name[60];
    char disease[60];
    int age;
    char let;
    r:
    printf("Welcome to our hospital management system!\n\n");
    printf("A-add patients\nB-exit\n");
    printf("Enter the CAPITAL LETTER of the function you want to continue:\t\t");
    scanf("%c",&let);
    switch(let)
    {
    case 'A':
    {
        printf("Plz enter patient's name:\t\t");
        scanf("%s",&name);
        printf("Plz enter patients age:\t\t ");
        scanf("%d",&age);
        printf("Plz enter the patient's disease:\t\t");
        scanf("%s",&disease);
        FILE * fpointe=fopen("patient.txt","a");
        fprintf(fpointe,"%s   %d   %s\n",name,age,disease);
        fclose(fpointe);
        printf("Plz enter any key to go back to main menu!");
        getch();
        system("cls");
        goto r;
        break;


    }
    case 'B':
    {
        system("cls");
        printf("Thank you!");
        break;
    }
    default:
        printf("plz enter a valid input");
    }

}
void usr_input()
{
    fnusr();
}
