#include <stdio.h>
#include <conio.h>

int amounttodeposit, amounttowithdraw, othertransaction;
float balance=0;    //initial balance to be zero
void transaction();

void transaction()
{
    int choice;
    printf("!!! Welcome !!!");
    printf("Enter any option to be served \n\n");
    printf("1 ... To Withdraw\n");
    printf("2 ... To Deposit\n");
    printf("3 ... Check Balance\n");
    scanf("%d",&choice);       //........

    switch(choice)
    {
    case 1:
        // For withdraw option
        printf("\nEnter amount to withdraw : ");
        scanf("%d",&amounttowithdraw);
        if(amounttowithdraw > balance)
        {
            printf("There is no sufficient balance in your account ");
            //now ask for other transaction
            printf("\nDo you want to other transaction \n Press 1 to proceed and 2 to EXIT ");
            scanf("%d",&othertransaction);
            if(othertransaction == 1)
            {
                //call our transaction method here
                transaction();

            }
            else
            {
               //this means account has something
               //So withdraw the money and update the available balance :
               balance = balance - amounttowithdraw;
               printf("\nYou have withdraw %d and your current balance is %f",amounttowithdraw,balance);
               //now request for another transaction

               printf("\n\n Do you want to other transaction \n Press 1 to proceed and 2 to EXIT ");
               scanf("%d",&othertransaction);
               if(othertransaction == 1)
               {
                   //call our transaction method here
                   transaction();
               }
            }
            break;
            //Now the 2nd case for deposit the money

    case 2:
        printf("Please enter  amount to deposit :");
        scanf("%d",&amounttodeposit);
        // deposit the money and update the correct balance
        balance = balance + amounttodeposit;
        printf("Thank you for depositing \n Your new available amount is : %f",balance);
        //request for another transaction
        printf("\n\n Do you want to other transaction \n Press 1 to proceed and 2 to EXIT ");
        scanf("%d",&othertransaction);
        if(othertransaction == 1)
        {
            //call our transaction method here
            transaction();
        }
        break;


    // Now case 3 for checking balance :
    case 3:
        printf("Your current available balance is %f ",balance);
        //now again ask for another transaction
        printf("\n\n Do you want to other transaction \n Press 1 to proceed and 2 to EXIT ");
        scanf("%d",&othertransaction);
        if(othertransaction == 1)
        {
            //call our transaction method here
            transaction();
        }
        break;
    }

}}
int main()
{
    //clrscr();
    transaction();
    return 0;

}
