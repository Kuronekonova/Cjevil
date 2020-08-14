#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

FILE* bankAccount;
FILE* pins;
char name[500]; // First Name
long long pin;
char secondName[500]; // Second Name
char lastName[500]; // Last Name
char country[500]; // Country Name 1
char country1[500]; // Country Name 2
int day, mon, year; // Date of Birth
long long csn; // Citizenship Number
char adress1[500]; // Adress 1
char adress2[500]; // Adress 2
int  adress3; // Adress 3
long long phone; // Phone Number
char type[500]; // Account Type
int action; // First action in main()
int after; // Second action in main()
int action2; // Action in createAcc()



int createAcc() // we have finally finished it. now...
{
	printf("First of all, create a pin. \n");
	printf("Your pin should be numbers only. \n");
	scanf_s("%lld", &pin);
	printf("Full name: ");
	scanf_s("%s", &name, 500);
	scanf_s("%s", &secondName, 500);
	scanf_s("%s", &lastName, 500);
	printf("Enter your country name: ");
	scanf_s("%s", &country, 500);
	scanf_s("%s", &country1, 500);
	printf("Enter your adress: ");
	scanf_s("%s", &adress1, 500); 
	scanf_s("%s", &adress2, 500); 
	printf("Enter your date of birth: \n");
	printf("Day: ");
	scanf_s("%d", &day);	
	printf("Month: ");
	scanf_s("%d", &mon);	
	printf("Year: ");
	scanf_s("%d", &year);
	printf("Enter your citizenship number: ");
	scanf_s("%lld", &csn);
	printf("Enter your phone number: ");
	scanf_s("%lld", &phone);
	printf("Account Type. You have 6 options.");
	printf("Checking accounts\n"

		   "1. Savings account\n"

		   "2. Money market account\n"

    	   "3. Certificates of deposit\n"

		   "4. Brokerage account\n"

		   "5. Individual retirement account\n");
	scanf_s("%d", &action2);
	switch (action2)
	{
	case 1:
		printf("You have selected a savings Account.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s. \n"
			"These are your account details.\n"
			"Full Name: %s %s %s\n"
			"Date of birth: %d/%d/%d (DD/MM/YYYY)\n"
			"Citizenship Number: %d\n", name, name, secondName, lastName, day, mon, year, csn);
		printf("Adress: %s %s \n", adress1, adress2);
		printf("Phone Number: %lld\n", phone);
		printf("Account Type: Savings\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 2:
		printf("You have selected a money market Account\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s. \n"
			"These are your account details.\n"
			"Full Name: %s %s %s\n"
			"Date of birth: %d/%d/%d (DD/MM/YYYY)\n"
			"Citizenship Number: %d\n", name, name, secondName, lastName, day, mon, year, csn);
		printf("Adress: %s %s \n", adress1, adress2);
		printf("Phone Number: %lld\n", phone);
		printf("Account Type: Money Market\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 3:
		printf("You have selected a certificate of deposit.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s. \n"
			"These are your account details.\n"
			"Full Name: %s %s %s\n"
			"Date of birth: %d/%d/%d (DD/MM/YYYY)\n"
			"Citizenship Number: %d\n", name, name, secondName, lastName, day, mon, year, csn);
		printf("Adress: %s %s \n", adress1, adress2);
		printf("Phone Number: %lld\n", phone);
		printf("Account Type: Ceritificate of Deposit\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 4:
		printf("You have selected a brokerage account.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s. \n"
			"These are your account details.\n"
			"Full Name: %s %s %s\n"
			"Date of birth: %d/%d/%d (DD/MM/YYYY)\n"
			"Citizenship Number: %d\n", name, name, secondName, lastName, day, mon, year, csn);
		printf("Adress: %s %s \n", adress1, adress2);
		printf("Phone Number: %lld\n", phone);
		printf("Account Type: Brokerage\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 5:
		printf("You have selected an individual retirement account.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s. \n"
			"These are your account details.\n"
			"Full Name: %s %s %s\n"
			"Date of birth: %d/%d/%d (DD/MM/YYYY)\n"
			"Citizenship Number: %d\n", name, name, secondName, lastName, day, mon, year, csn);
		printf("Adress: %s %s \n", adress1, adress2);
		printf("Phone Number: %lld\n", phone);
		printf("Account Type: Individual Retirement\n");
		printf("Your data has been registred to a text file. \n");
		break;
	default: 
		printf("Failed.\n");
	}


	if (action2 == 1)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankaccountpins.txt", "a");
		fprintf(bankAccount, "\n");
		fprintf(bankAccount, "Full Name: %s %s %s\n", name, secondName, lastName);
		fprintf(bankAccount, "Date of birth: %d/%d/%d (DD/MM/YYYY)\n", day, mon, year);
		fprintf(bankAccount, "Citizenship Number: %d\n", csn);
		fprintf(bankAccount, "Adress: %s %s \n", adress1, adress2);
		fprintf(bankAccount, "Phone Number: %lld\n", phone);
		fprintf(bankAccount, "Account Type: Savings\n");
		fprintf(pins, "Pin: %lld\n", pin);
		fprintf(pins, "That is the pin for %s %s %s's account.\n", name, secondName, lastName);
		fclose(bankAccount);
		fclose(pins);
	}
	else if (action2 == 2)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankaccountpins.txt", "a");
		fprintf(bankAccount, "\n");
		fprintf(bankAccount, "Full Name: %s %s %s\n", name, secondName, lastName);
		fprintf(bankAccount, "Date of birth: %d/%d/%d (DD/MM/YYYY)\n", day, mon, year);
		fprintf(bankAccount, "Citizenship Number: %d\n", csn);
		fprintf(bankAccount, "Adress: %s %s \n", adress1, adress2);
		fprintf(bankAccount, "Phone Number: %lld\n", phone);
		fprintf(bankAccount, "Account Type: Money Market\n");
		fprintf(pins, "Pin: %lld\n", pin);
		fprintf(pins, "That is the pin for %s %s %s's account.\n", name, secondName, lastName);
		fclose(bankAccount);
		fclose(pins);

	}
	else if (action2 == 3)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankaccountpins.txt", "a");
		fprintf(bankAccount, "\n");
		fprintf(bankAccount, "Full Name: %s %s %s\n", name, secondName, lastName);
		fprintf(bankAccount, "Date of birth: %d/%d/%d (DD/MM/YYYY)\n", day, mon, year);
		fprintf(bankAccount, "Citizenship Number: %d\n", csn);
		fprintf(bankAccount, "Adress: %s %s \n", adress1, adress2);
		fprintf(bankAccount, "Phone Number: %lld\n", phone);
		fprintf(bankAccount, "Account Type: Certificates of deposit\n");
		fprintf(pins, "Pin: %lld\n", pin);
		fprintf(pins, "That is the pin for %s %s %s's account.\n", name, secondName, lastName);
		fclose(bankAccount);
		fclose(pins);
	}	
	else if (action2 == 4)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankaccountpins.txt", "a");
		fprintf(bankAccount, "\n");
		fprintf(bankAccount, "Full Name: %s %s %s\n", name, secondName, lastName);
		fprintf(bankAccount, "Date of birth: %d/%d/%d (DD/MM/YYYY)\n", day, mon, year);
		fprintf(bankAccount, "Citizenship Number: %d\n", csn);
		fprintf(bankAccount, "Adress: %s %s \n", adress1, adress2);
		fprintf(bankAccount, "Phone Number: %lld\n", phone);
		fprintf(bankAccount, "Account Type: Borkerage\n");
		fprintf(pins, "Pin: %lld\n", pin);
		fprintf(pins, "That is the pin for %s %s %s's account.\n", name, secondName, lastName);
		fclose(bankAccount);
		fclose(pins);
	}	
	else if (action2 == 5)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankaccountpins.txt", "a");
		fprintf(bankAccount, "\n");
		fprintf(bankAccount, "Full Name: %s %s %s\n", name, secondName, lastName);
		fprintf(bankAccount, "Date of birth: %d/%d/%d (DD/MM/YYYY)\n", day, mon, year);
		fprintf(bankAccount, "Citizenship Number: %d\n", csn);
		fprintf(bankAccount, "Adress: %s %s \n", adress1, adress2);
		fprintf(bankAccount, "Phone Number: %lld\n", phone);
		fprintf(bankAccount, "Account Type: Individual retirement\n");
		fprintf(pins, "Pin: %lld\n", pin);
		fprintf(pins, "That is the pin for %s %s %s's account.\n", name, secondName, lastName);
		fclose(bankAccount);
		fclose(pins);

	}
	
	system("pause");

	return 0;
}


/*
		2. Update information of existing account

		This will allow the user to change the data of an existing account.
		A - Ask the user which information to change.
		B - Let the user do so
		C - And finally, print all the information of the account after updating it.
*/

int update() // this is probably going to be my biggest nightmare...
{


}

int transc()
{

}

int removeAcc()
{

}

int viewAcc() // nightmare...
{

}
int exitbank()
{

}

int main()
{
	printf("       BANK MANAGEMENT SYSTEM       \n");
	printf("       Welcome to the main menu.      \n");
	printf("1. Create an account - This will help you create a bank account; "
		   "It will ask for your Full Name, Country, Date of Birth, Citizenship Number, Adress, Phone Number, and finally chose your Account type.\n"
		   "2. Update information of existing account\n"
		   "3. Transactions - This will help you withdraw or deposit money from or to a bank account.\n"
		   "4. Remove an existing account\n"
		   "5. View account details\n"
		   "6. Exit - Terminates the program instantly.\n");
	 
	scanf_s("%d", &action);
	if (action == 1)
	{
		printf("You have selected the first option: Create an account.\n");
		printf("We will now begin creating your account.\n");
		createAcc();
	}
	else if (action == 2)
	{
		printf("It appears you want to update an account.\n");
		system("pause");
	}
	else if (action == 3)
	{
		printf("Chose one option\n");
		printf("1. Deposit\n");
		printf("2. Withdraw\n");
		scanf_s("%d", &after);
	    if (after == 1)
	    {
		printf("You have selected deposit.\n");
	    }
      	else
	    {
		printf("You have selected withdraw.\n");
		}
		system("pause");
	}
	else if (action == 4)
	{
		printf("It appears you want to remove an account.\n");
		system("pause");
	}
	else if (action == 5)
	{
		printf("It appears you want to view an existing account's information.\n");
		system("pause");
	}
	else if (action == 6)
	{
		exitbank();
	}	  	    
}
