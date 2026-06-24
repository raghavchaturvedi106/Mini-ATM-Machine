#include<stdio.h>

void showMenu();
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main()
{
	
    int balance = 1000;
    int choice;

    while(1)
    {

		showMenu();
        scanf("%d", &choice);

        if(choice == 1)
        {
            checkBalance(balance);
        }
        else if(choice == 2)
        {
    		balance = deposit(balance);
        }
        else if(choice == 3)
        {
			balance = withdraw(balance);
        }
        else if(choice == 4)
        {
            printf("Thank you for using ATM\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}

void showMenu()
{
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void checkBalance(int balance)
{
    printf("Current Balance: %d\n", balance);
}

int deposit(int balance)
{
	int amount;
	printf("enter the amount to deposit\n");
	scanf("%d",&amount);
	        
	if(amount > 0)
	{
			
	    balance += amount;
	    printf("new balance is %d\n",balance);
	    
	}
	else
	{
	    printf("Invalid amount");
	}
	return balance;
}

int withdraw(int balance)
{
	int amount;
	    printf("enter the amount to withdraw\n");
	    scanf("%d",&amount);
	        
	    if(amount > 0 && amount <= balance)
	    {
	        balance -= amount;
	        printf("new balance is %d\n",balance);
	    }
	    else
	    {
	        printf("Insufficient balance");
		}
		return balance;
}
