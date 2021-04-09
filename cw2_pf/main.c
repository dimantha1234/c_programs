#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void usr_input();
void process(char);
int price;

main()
{
    printf("\t\t\t\t\tWelcome to Imanthi's\n\t\t\t\t\t     cake shop!\n");
    usr_input();
    time_t t;   // not a primitive datatype
    time(&t);

    printf("\nYou have placed the order at: (date and time): %s\n", ctime(&t));
    printf("Thank you!\n");
    getch();

}
void usr_input()
{
    char x;
     printf("**Available products**\nA-Cakes\nB-Cupcakes\nC-Brownies\nD-Other\n\n");
     printf("Please enter the relevant CAPITAL LETTER of the product you desire:\t\t");
     scanf("%s",&x);
     printf("\n\n\n\n");
     process(x);
}
void process(char y)
{
    int q;
    char z;
    switch(y)
    {
    case 'A':
        {
            while (z!='A' || z!='B' || z!='C')
            {
            printf("**Available_Packages**\nA-Small(1 kg)\nB-Medium(1.5 kg)\nC-Large(2 kg)\n\n");
            printf("Enter the CAPITAL LETTER of your desired product:\t\t");
            scanf("%S",&z);
            if (z=='A')
            {


                printf("**Available_Cakes**\n1-Choclate\n2-Vanilla\n3-Butter cake\n4-Velvet\n\n");
                printf("Please enter NUMBER of the cake u desire:\t\t");
                scanf("%d",&q);
                if (q==1)
                    price=350;
                else if (q==2)
                    price=350;
                else if (q==3)
                    price=250;
                else if (q==4)
                    price=400;
                else
                    printf("Please input a valid number!");
                break;

            }
            else if (z=='B')
            {
                printf("**Available_Cakes**\n1-Choclate\n2-Vanilla\n3-Butter cake\n4-Velvet\n\n");
                printf("Please enter NUMBER of the cake u desire:\t\t");
                scanf("%d",&q);
                if (q==1)
                    price=850;
                else if (q==2)
                    price=850;
                else if (q==3)
                    price=500;
                else if (q==4)
                    price=1000;
                else
                    printf("Please input a valid number!");
                break;

            }
            else if (z=='C')
            {

                printf("**Available_Cakes**\n1-Choclate\n2-Vanilla\n3-Butter cake\n4-Velvet\n\n");
                printf("Please enter NUMBER of the cake u desire:\t\t");
                scanf("%d",&q);
                if (q==1)
                    price=2000;
                else if (q==2)
                    price=2000;
                else if (q==3)
                    price=1000;
                else if (q==4)
                    price=2500;
                else
                    printf("Please input a valid number!");
                break;

            }
            else
                printf("Please enter a valid input sir/madam!");
            }

            printf("The cost of the cake:\t\tRs.%d.oo\n",price);


            break;
        }
    case 'B':
        {
            char r;
            printf("\n\n\n");
            while (z!='A' || z!='B' || z!='C')
            {
            printf("**Types_of_topings**\nA-Vanilla\nB-Chocalate\nC-Strawberry\n");
            printf("Please enter the CAPITAL LETTER of the topping You desire:\t\t");
            scanf("%s",&z);
            printf("\n\n\n");

            if (z=='A')
            {
             printf("Do you want candy sprinkles with chopped candy bars and toasted nuts(Please type y or n):\t\t ");
             scanf("%s",&r);
             printf("Please enter the number of cup cakes you require:\t\t");
             scanf("%d",&q);
             printf("You purchased %d cupcake/cupcakes with vanilla topping!\n",q);
             if (r=='y')
                price=q*80;
             else if (r=='n')
                price=q*50;
             else
                printf("Invalid input! Please run the program from the begining.\n");
             break;
            }
            else if (z=='B')
            {
             printf("Do you want candy sprinkles with chopped candy bars and toasted nuts(Please type y or n):\t\t ");
             scanf("%s",&r);
             printf("Please enter the number of cup cakes you require:\t\t");
              scanf("%d",&q);
             printf("You purchased %d cupcake/cupcakes with chocalate topping!\n",q);
             if (r=='y')
                price=q*80;
             else if (r=='n')
                price=q*50;
             else
                printf("\nInvalid input! Please run the program from the begining.\n");
             break;
            }
            else if (z=='C')
                {
             printf("Do you want candy sprinkles with chopped candy bars and toasted nuts(Please type y or n):\t\t ");
             scanf("%s",&r);
             printf("Please enter the number of cup cakes you require:\t\t");
             scanf("%d",&q);
             printf("You purchased %d cupcake/cupcakes with strawberry topping!\n",q);
             if (r=='y')
                price=q*90;
             else if (r=='n')
                price=q*60;
             else
                printf("Invalid input! Please run the program from the begining.\n");
             break;
                }
            else
                 printf("Invalid input!\n");

            }
            printf("The cost of the cupcake/cupcakes :\t\tRs.%d.oo\n",price);
            break;


        }
    case 'C':
        {
            char r;
            printf("\n\n\n");
            while (z!='A' || z!='B' || z!='C')
            {
            printf("**Types_of_flavours**\nA-Vanilla\nB-Chocalate\nC-Strawberry\n");
            printf("Please enter the CAPITAL LETTER of the topping You desire:\t\t");
            scanf("%s",&z);
            printf("\n\n\n");
            printf("Some_additional_toppings\nA-Choclate chip crust\nB-White choclate with peanuts\nC-Crushed peppermints\nD-Without toppings\n ");

            if (z=='A')
            {
             printf("PLease write the CAPITAL LETTER of your preference:\t\t");
             scanf("%s",&r);
             printf("Please enter the number of brownies you require:\t\t");
             scanf("%d",&q);
             printf("You purchased %d browny/brownies with vanilla flavour!\n",q);
             if (r=='A' || r=='B' || r=='C')
                price=q*80;
             else if (r=='D')
                price=q*50;
             else
                printf("Invalid input! Please run the program from the beginning.\n");
             break;
            }
            else if (z=='B')
            {
             printf("PLease write the CAPITAL LETTER of your preference:\t\t");
             scanf("%s",&r);
             printf("Please enter the number of brownies you require:\t\t");
              scanf("%d",&q);
             printf("You purchased %d browny/brownies with chocalate flavour!\n",q);
             if (r=='A' || r=='B' || r=='C')
                price=q*80;
             else if (r=='D')
                price=q*50;
             else
                printf("\nInvalid input! Please run the program from the beginning.\n");
             break;
            }
            else if (z=='C')
                {
             printf("PLease write the CAPITAL LETTER of your preference:\t\t");
             scanf("%s",&r);
             printf("Please enter the number of brownies you require:\t\t");
             scanf("%d",&q);
             printf("You purchased %d browny/brownies with strawberry flavour!\n",q);
             if (r=='A' || r=='B' || r=='C')
                price=q*80;
             else if (r=='D')
                price=q*50;
             else
                printf("Invalid input! Please run the program from the begining.\n");
             break;
                }
            else
                 printf("Invalid input!\n");

            }
            printf("The cost of the browny/brownies :\t\tRs.%d.oo\n",price);
            break;

        }
    case 'D':
        printf("We are sorry to inform you that currently we only sell the given 3 products. ");

    default:
        printf("Please enter a valid capital Letter!");
        break;
    }


}
