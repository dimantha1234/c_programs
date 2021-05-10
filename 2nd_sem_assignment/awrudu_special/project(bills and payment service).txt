//the following system is designed for the use of employees only
//database is included as a text file named customer.txt plz refer
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>
time_t t;
void interface();
void usr_input();
void payment(int,int,int);
int msg=0,call=0,cpay=0,mpay=0,tpay=0,npay;
//you can use this to handle phone bills and internet bills of all your family members, who subscribed to our services
main()
{
    int msg=0,call=0,cpay=0,mpay=0,tpay=0,npay;
    interface();
    usr_input();
}
void fn_A()
{
    printf("Input number of call minutes used by user as a whole value:\t");
    scanf("%d",&call);
    printf("Input number of local messages used by user:\t");
    scanf("%d",&msg);
    if(call>80)
        cpay=(call-80)*2;
    else
        cpay=0;
    if (msg>60)
        mpay=(msg-60)*1;
    else
        mpay=0;
}
void fn_B()
{
    printf("Input number of call minutes used by user as a whole value:\t");
    scanf("%d",&call);
    printf("Input number of local messages used by user:\t");
    scanf("%d",&msg);
    if(call>140)
        cpay=(call-140)*2;
    else
        cpay=0;
    if (msg>100)
        mpay=(msg-100)*1;
    else
        mpay=0;
}
void fn_C()
{
    printf("Input number of call minutes used by user as a whole value:\t");
    scanf("%d",&call);
    printf("Input number of local messages used by user:\t");
    scanf("%d",&msg);
    if(call>180)
        cpay=(call-180)*2;
    else
        cpay=0;
    if (msg>150)
        mpay=(msg-150)*1;
    else
        mpay=0;
}
void fn_netA()
{
    npay=2000;
}
void fn_netB()
{
    npay=1500;
}
void fn_netC()
{
    npay=8000;
}
void interface()
{
   //this describes about the initial interface you encounter
   system("COLOR 0A");
   //the system is created for back end operators
   printf("\t\t\t\t\t\t\t _______________________\n\t\t\t\t\t\t\t|\t  Bills\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  ****\t\t|\n\t\t\t\t\t\t\t|\t  End!\t\t|\n\t\t\t\t\t\t\t|_______________________|");
   printf("\n\t\t\t\t\t\tWelcome to Dialog Axiata Payment Service\n  \t\t\t\t\t\t\t(Only for the use of employees)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue!");
   getch();
   system("cls");
}
void usr_input()
{
    int num,r,u;
    char a,b;
    system("COLOR 0F");
    printf("Please enter the customer ID number:\t");
    scanf("%d",&num);
    system("cls");
    q:
    system("cls");
    printf("Please enter the mobile package subscribed:\nA-Package_1:\n\t-80 min call time and upto 60 free local messages\nB-Package_2:\n\t-140 min call time and upto 100 free local messages\nC-Package_3:\n\t-180 min call time and upto 150 free local messages\nD-not subscribed to mobile services\nADDITIONAL CHARGES WILL BE ADDED TO THE BILL IF THE LIMITATIONS ARE EXCEEDED!\npackage_type:\t");
    scanf("%s",&a);
    switch(a)
    {
        case 'A':
            system("cls");
            fn_A();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'B':
            system("cls");
            fn_B();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'C':
            system("cls");
            fn_C();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'D':
            system("cls");
            printf("Press any key to continue!");
            getch();
            u=1;
            break;
        default:
            system("cls");
            printf("Wrong input!!!!!\nPress any key to continue!");
            getch();
            goto q;
    }
    p:
    system("cls");
    printf("Please enter the internet package subscribed:\nA-Student_package:\n\t-100 GB anytime\nB-Home_package:\n\t-30 GB day time and 60 GB night time\nC-Office_package:\n\t-300 GB day time and 400 GB night time \nD-Not subscribed to any internet packages\npackage_type:\t");
    scanf("%s",&b);
    switch(b)
    {
        case 'A':
            system("cls");
            fn_netA();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'B':
            system("cls");
            fn_netB();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'C':
            system("cls");
            fn_netC();
            system("cls");
            printf("Press any key to continue!");
            getch();
            break;
        case 'D':
            system("cls");
            r=1;
            break;
        default:
            system("cls");
            printf("Wrong input!!!!!\nPress any key to continue!");
            getch();
            goto p;
    }
    payment(num,u,r);
}
void payment(int x,int y,int z)
{
    system("COLOR 04");
    tpay=cpay+npay+mpay;
    //a text file is created as a database to have a history about the past customers
    if (y==1 && z==1)
    {
        system("cls");
        printf("Please enter only customers who have subscribed our mobile or internet services!\nPress any key to continue!!");
        getch();
        system("cls");
        main();
    }
    else
    {
        system("cls");
        printf("The customer id %d has to pay Rs.%d.00 to renew his services!\n",x,tpay);
        time(&t);
        printf("The database was updated at: %s",ctime(&t));
        FILE * pf;
        pf=fopen("customer.txt","a");
        fprintf(pf,"Customer ID:\t%d\t\tDue amount:\tRs.%d.00\n ",x,tpay);
        fclose(pf);
        printf("Press any key to continue!");
        getch();
        system("cls");
        main();
    }
}
