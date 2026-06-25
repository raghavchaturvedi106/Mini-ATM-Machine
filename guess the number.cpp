#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void showMenu();
void easy();
void medium();
void hard();


int main()

{
	srand(time(0));
	int choice;
	
	//printf("Secret Number = %d\n", x);
	
	while(1)
	{
		
		showMenu();
		scanf("%d",&choice);
		
		if(choice == 1)
		{
			easy();
		}
		else if(choice == 2)
		{
			medium();
		}
		else if(choice == 3)
		{
			hard();
		}
		else if(choice == 4)
		{
			printf("Thanku you for playing the game\n");
			break;
		}
		else
		{
			printf("Invalid choice\n");
		}
	
	}
	return 0;
}

void showMenu()
{
	printf("=====Game Menu=====\n");
	printf("1.easy\n");
	printf("2.medium\n");
	printf("3.hard\n");
	printf("4.Exit\n");
}

void easy()
{
	int x = rand() % 10 + 1;
	int number;
	int attempts = 0;
	
	while(1)
	{
	
		printf("Guess the number (1-10)\n");
		scanf("%d",&number);
		
		attempts++;
		
		if(number < x)
		{
        	printf("Too Low\n");
    	}
    	else if(number > x)
    	{
        	printf("Too High\n");
    	}
    	else if(number == x)
    	{
    		printf("congratulations you guess the correct answer in %d attempts\n",attempts);
    		break;
		}
    }
}

void medium()
{
	int x = rand() % 50 + 1;
	int number;
	int attempts = 0;
	
	while(1)
	{
	
		printf("Guess the number (1-50)\n");
		scanf("%d",&number);
		
		attempts++;
		
		if(number < x)
		{
        	printf("Too Low\n");
    	}
    	else if(number > x)
    	{
        	printf("Too High\n");
    	}
    	else if(number == x)
    	{
    		printf("congratulations you guess the correct answer in %d attempts\n",attempts);
    		break;
		}
    }
}

void hard()
{
	int x = rand() % 100 + 1;
	int number;
	int attempts = 0;
	
	while(1)
	{
	
		printf("Guess the number (1-100)\n");
		scanf("%d",&number);
		
		attempts++;
		
		if(number < x)
		{
        	printf("Too Low\n");
    	}
    	else if(number > x)
    	{
        	printf("Too High\n");
    	}
    	else if(number == x)
    	{
    		printf("congratulations you guess the correct answer in %d attempts\n",attempts);
    		break;
		}
    }
}
