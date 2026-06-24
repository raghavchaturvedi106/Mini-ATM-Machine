#include<stdio.h>

int main()
{
     int balance = 1000;
     int choice;
     
     while(1)
	{
	    printf("\n===== WELCOME TO ATM =====\n");
	    printf("1. Check Balance\n");
	    printf("2. Deposit\n");
	    printf("3. Withdraw\n");
	    printf("4. Exit\n");
	    printf("Enter your choice:");
	    
	    scanf("%d",&choice);
	    
	     if(choice==1)
	     {
	          printf("current balance is %d\n",balance);
	     }
	     else if(choice==2)
	     {
	        int amount;
	        printf("enter the amount to deposit\n");
	        scanf("%d",&amount);
	        
	        if(amount > 0)
	        {
			
	        balance = balance + amount;
	        printf("new balance is %d\n",balance);
	    	}
	    	else
	    	{
	    		printf("Invalid amount");
			}
	     }
	     else if(choice==3)
	     {
	        int amount;
	        printf("enter the amount to withdraw\n");
	        scanf("%d",&amount);
	        
	        if(amount > 0 && amount <= balance)
	        {
	        balance = balance - amount;
	        printf("new balance is %d\n",balance);
	    	}
	        else
	        {
	        	printf("Insufficient balance");
			}
	     }
	    else if(choice==4)
	    {
	    	printf("Thank you for using ATM\n");
	    	break;
		}
		else
		{
			printf("invalid choice\n");
		}
	}
	
    return 0;
}
