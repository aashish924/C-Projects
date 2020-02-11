#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void openaccount();
void depositemoney();
void withdrawmoney();
void display();
void exit();
int bank();
char fname[20];
char lname[20];
char adress[20];
char accounttype[20];
int withdraw;
int dip;
int balance;
int ch;
int main()
{
	while(1)
	switch(bank())
	{
		case 1:
		system("cls");
		openaccount();
		break;
		
		case 2:
		system("cls");
		depositemoney();
		break;
		
		case 3:
		system("cls");
		withdrawmoney();
		break;
		
		case 4:
		system("cls");
		display();
		break;
		
		case 5:
		system("cls");
		exit();
		return 0;
		
		default:
		printf("Please Enter A Valid Number");
		
	}
	getch();
}
int bank()
{
	printf("1.Open Account \n");
	printf("2.Deposite Money \n");
	printf("3.Withdraw Money \n");
	printf("4.Display \n");
	printf("5.Exit \n");
	printf("Choose An Option \n");
	scanf("%d",&ch);
	return(ch);
}

void openaccount()
{
	printf("Enter your First Name: \n");
	scanf("%s",&fname);
	printf("Enter your Last Name: \n");
	scanf("%s",&lname);
	printf("Enter your address: \n");
	scanf("%s",&adress);
	printf("Enter Account Type: \n");
	scanf("%s",&accounttype);
	printf("Enter the Amount to be deposited: \n");
	scanf("%d",&balance);
	
}
void depositemoney()
{
	printf("Enter the Amount Deposited \n");
	scanf("%d",&dip);
	
	balance=balance+dip;
	printf("Total Balance:%d \n",balance);
}


void withdrawmoney()
{
	printf("Enter the Amount Withdrawl \n");
	scanf("%d",&withdraw);
	if(withdraw>balance){
		printf("Insufficient Amount \n");
	}
	else if(withdraw<balance){
	
	balance=balance-withdraw;
	printf("Total Balance:%d,balance");
}
else {
	printf("Invalid Input \n");
}
}
void display()
{
	printf("Account Holder First Name is:%s \n",fname);
	printf("Account Holder Last Name is:%s \n",lname);
	printf("Account Type: %s \n",accounttype);
	printf("Amount Remaining:%d \n",balance);
	
}
void exit(){
	printf("Your Transaction is complete.");
}

