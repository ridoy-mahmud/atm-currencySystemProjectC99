#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

int main()
{
    int choice;
    printf("\n\t\t\t***********************************\n");
    printf("\t\t-- Press -(1)- For Currency Conversion System -- ");
    printf("\n\t\t-- Press -(2)- For ATM Management System -- ");
    printf("\n\t\t-- Press -(3)- To Exit -- \n");
    printf("\t\t\t***********************************\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {

        float amount;
        float taka, yen, dollar, pound, euro, rupee;
        // Switch Case - parameter is 'option' //
        int option;
        printf("\n|*****************************************************************|\n");
        printf("Choose among them for Conversion - ");
        printf("\nEnter 1 for: Taka");
        printf("\nEnter 2 for : Dollar");
        printf("\nEnter 3 for: Pound");
        printf("\nEnter 4 for: Euro");
        printf("\nEnter 5 for: Rupee");
        printf("\nEnter 6 for: Yen");
        printf("\n|****************************************************************|\n");
        printf("\nEnter your choice for conversion : ");
        scanf("%d", &option);

        printf("Enter the number of amount you want to convert?\n");
        scanf("%f", &amount);

        switch (option)
        {
            // Conversion of Taka to Different Currencies //
        case 1:
            dollar = amount / 94;
            printf("%.2f Taka is =  %.2f Dollar", amount, dollar);

            pound = amount / 125;
            printf("\n%.2f Taka =  %.2f Pound", amount, pound);

            euro = amount / 107;
            printf("\n%.2f Taka =  %.2f Euro", amount, euro);

            rupee = amount / 1.25;
            printf("\n%.2f Taka =  %.2f Rupee", amount, rupee);

            yen = amount / 0.75;
            printf("\n%.2f Taka = %.2f Yen", amount, yen);
            break;

            // Conversion of Dollar to Different Currencies //
        case 2:
            taka = amount * 94;
            printf("\n%.2f Dollar =  %.2f Taka", amount, taka);

            rupee = amount * 82.32;
            printf("\n%.2f Dollar =  %.2f Rupee", amount, rupee);

            pound = amount * 0.82;
            printf("\n%.2f Dollar =  %.2f Pound", amount, pound);

            euro = amount * 0.95;
            printf("\n%.2f Dollar =  %.2f Euro", amount, euro);

            yen = amount * 166.54;
            printf("\n%.2f Dollar =  %.2f Yen", amount, yen);
            break;
            // Conversion of Pound to Different Currencies //
        case 3:
            taka = amount * 125;
            printf("\n%.2f Pound = %.2f Taka", amount, taka);

            rupee = amount * 100.26;
            printf("\n%.2f Pound =  %.2f Rupee", amount, rupee);

            dollar = amount * 1.22;
            printf("\n%.2f Pound =  %.2f Dollar", amount, dollar);

            euro = amount * 1.16;
            printf("\n%.2f Pound =  %.2f Euro", amount, euro);

            yen = amount * 166;
            printf("\n%.2f Pound =  %.2f Yen", amount, yen);
            break;
            // Conversion of Euro to Different Currencies //
        case 4:
            taka = amount * 107;
            printf("\n%.2f Euro =  %.2f Taka", amount, taka);

            rupee = amount * 86.23;
            printf("\n%.2f Euro =  %.2f Rupee", amount, rupee);

            dollar = amount * 1.05;
            printf("\n%.2f Euro =  %.2f Dollar", amount, dollar);

            pound = amount * 0.86;
            printf("\n%.2f Euro =  %.2f Pound", amount, pound);

            yen = amount * 143.83;
            printf("\n%.2f Euro =  %.2f Yen", amount, yen);
            break;
            // Conversion of Rupee to Different Currencies //
        case 5:
            taka = amount * 1.25;
            printf("\n%.2f Rupee  =  %.2f Taka", amount, taka);

            dollar = amount / 82.27;
            printf("\n%.2f Rupee =  %.2f Dollar", amount, dollar);

            pound = amount / 100.43;
            printf("\n%.2f Rupee =  %.2f Pound", amount, pound);

            euro = amount / 86.46;
            printf("\n%.2f Rupee =  %.2f Euro", amount, euro);

            yen = amount * 1.66;
            printf("\n%.2f Rupee =  %.2f Yen", amount, yen);
            break;
            // Yen to to Different Currencies //
        case 6:
            taka = amount / 1.33;
            printf("\n%.2f Yen  =  %.2f Taka", amount, taka);

            dollar = amount / 137.76;
            printf("\n%.2f Yen =  %.2f Dollar", amount, dollar);

            pound = amount / 166;
            printf("\n%.2f Yen =  %.2f Pound", amount, pound);

            euro = amount / 143.66;
            printf("\n%.2f Yen =  %.2f Euro", amount, euro);

            rupee = amount / 1.66;
            printf("\n%.2f Yen =  %.2f Rupee", amount, rupee);
            break;

        default:
            printf("\nInvalid Conversion Input");
        }
    }
    break;

        // ATM Banking System Main Code Start Here  //

    case 2:
    {
        int option;
        float balance = 100000.00;
        int choose;

        bool again = true;

        while (again)
        {
            mainMenu();
            printf("Please Select an Option -  ");
            scanf("%d", &option);

            switch (option)
            {
            case 1:

                checkBalance(balance);
                break;
            case 2:

                balance = moneyDeposit(balance);
                break;
            case 3:

                balance = moneyWithdraw(balance);
                break;

            case 4:

                menuExit();
                return 0;

            default:
                errorMessage();
                break;
            }
            printf("Would you like to do another transaction:\n");
            printf(" 1  Yes\n");
            printf(" 2  No\n");
            scanf("%d", &choose);

            if (choose == 2)
            {
                again = false;
                menuExit();
            }
        }
    }

    break;
    case 3:
        exit(0);
    default:
        printf("Error Input");
        break;
    }
    return 0;
}

// User Define Functions Used for ATM Management System

void mainMenu()
{

    printf("\t\t\t***********************************\n");
    printf("\t\t\t    ** Welcome to ATM Banking **  \n");
    printf("\t\t\t***********************************\n");
    printf("\t\t\t** Please Choose an Option Form Bellow **\n\n");
    printf("\t\t\t-- Press 1 for Check Balance --\n");
    printf("\t\t\t-- Press 2 for Deposit --\n");
    printf("\t\t\t-- Press 3 for Withdraw --\n");
    printf("\t\t\t-- Press 4 for Exit --\n\n");
}

void checkBalance(float balance)
{
    // printf("You Choose to See your Balance\n");
    printf("\n\nYour Available Balance is:   $%.2f\n\n", balance);
}

float moneyDeposit(float balance)
{
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("Your Balance is : %.2f\n\n", balance);
    printf("-- Enter your amount to Deposit : ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\nThis is Your New Balance  $%.2f\n\n", balance);
    return balance;
}

float moneyWithdraw(float balance)
{
    float withdraw;
    bool back = true;

    printf("Your Current Balance is: $%.2f\n\n", balance);

    while (back)
    {
        printf("Enter your amount to withdraw:\n");
        scanf("%f", &withdraw);

        if (withdraw < balance)
        {
            back = false;
            balance -= withdraw;
            printf("\nYour Withdrawing money is:  $%.2f\n", withdraw);
            printf("This is Your New Balance  $%.2f\n\n", balance);
        }

        else
        {

            printf("+++You don't have enough money+++\n");
            printf("Please contact to your Bank Customer Services\n");
            printf("****Your Balance is:   $%.2f\n\n", balance);
        }
    }
    return balance;
}

void menuExit()
{
    printf("\n\t\t\t\tYou  Choose to Exit\n");
    printf("\t\t ----Thank you for Using ATM Banking System!!!-----\n");
}

void errorMessage()
{
    printf("\t\t +++!!!You Selected an Invalid Number!!!+++\n");
}
