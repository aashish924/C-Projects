#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void balancequery();
void withdrawmoney();
void pin();
void transcation();
void balance();
void exit();
int atm();
int code;
int bal=100000;
int withdraw;
int ch;
int pinattempt=1;
int main()
{
	switch(atm())
	{
		case 1:
		system("cls");
		balancequery();
		break;
		
		case 2:
		system("cls");
		withdrawmoney();
		break;
		
		case 3:
		system("cls");
		transcation();
		break;
		
			
		case 4:
		system("cls");
		exit();
		return(0);
		
		default:
		printf("Please Enter A Valid Number \n");
		
	}
	getch();
}
int atm()
{
	printf("Enter Your Secret Pin: \n");
	scanf("%d",&code);
	while(pinattempt<=2)
	{
	
	
	if(code==1234)
	{
	printf("Welcome To ATM: \n");
	printf("Please Choose Any Option: \n");
	printf("1.Balance Query: \n");
	printf("2.Cash Withdraw: \n");
	printf("3.Transaction Status: \n");
	printf("4.Exit \n");
	printf("Choose a Service: \n");
	scanf("%d",&ch);

	}
	else
	{
		printf("Invalid Pin Again: \n");
		printf("Please Re-Enter The Pin : \n");
		scanf("%d",&code);
//		return code;
	}


		pinattempt++;

}
		printf("Atm Blocked \n");

	
}

void balancequery()
{
	printf("Please Enter The Secret Pin:\n");
	scanf("%d",&code);
	if(code=1234)
	{
		printf("Your Balance is :%d\n",bal);
	}
	else
	{
		printf("Please Enter Correct Pin:\n");
	}
}
void withdrawmoney()
{
	printf("Enter the Amount to Withdraw:\n");
	scanf("%d",&withdraw);
	if(withdraw<bal)
	{
		bal=bal-withdraw;
		printf("Total Balance left:%d\n",bal);
		
	}
	else if(withdraw>bal)
	{
		printf("Insufficient Amount \n");
	}
	else
	{
		printf("Invalid Token \n");
	}
	
}
void transcation()
{
	printf("Transaction Complete: \n");
	printf("Withdrawl Amount:%d \n",withdraw);
	printf("Remaining Balance:%d \n",bal);
}
void exit()
{
	printf("Thanks for using our atm Please Take Out Your Card: \n");
}
