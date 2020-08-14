#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

FILE* bankAccount;
FILE* pins;
char name[500]; // First Name
char pin[500];
char secondName[500]; // Second Name
char lastName[500]; // Last Name
char country[500]; // Country Name 1
char country1[500]; // Country Name 2
char day[500]; // Date of Birth
char mon[500]; // Date of Birth
char year[500]; // Date of Birth
char csn[500]; // Citizenship Number
char adress1[500]; // Adress 1
char adress2[500]; // Adress 2
char adress3; // Adress 3
char phone[500]; // Phone Number
char type[500]; // Account Type
int action; // First action in main()
int after; // Second action in main()
int action2; // Action in createAcc()



int createAcc() // we have finally finished it. now...
{
	printf("First of all, create a pin. \n");
	printf("Your pin needs to be numbers only. \n");
	printf("You will need this pin next time you log in to your account. (not a feature yet, this is in devolpment.)\n");
	getchar();
	fgets(pin, 500, stdin); // this
	printf("Full name: ");
	fgets(name, 500, stdin);
	printf("Enter your country name: ");
	fgets(country, 500, stdin);
	printf("Enter your adress: ");
	fgets(adress1, 500, stdin);
	printf("Enter your date of birth: \n"
	       "Day: ");
	fgets(day, 500, stdin); // this
	printf("Month: "); 
	fgets(mon, 500, stdin); // this
	printf("Year: ");
	fgets(year, 500, stdin); // this
	printf("Enter your citizenship number: ");
	fgets(csn, 500, stdin); // this
	printf("Enter your phone number: ");
	fgets(phone, 500, stdin); // this
	long long realPin = atoll(pin);
	long long realDay = atoll(day);
	long long realMon = atoll(mon);
	long long realYear = atoll(year);
	long long realCsn = atoll(csn);
	long long realPhone = atoll(phone);
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
		printf("Welcome, %s", name);
		strtok(name, "\n");
		printf("These are your account details.\n"
			   "Full Name: %s\n"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Savings\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 2:
		printf("You have selected a money market Account\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s", name);
		strtok(name, "\n");
		printf("These are your account details.\n"
			   "Full Name: %s\n"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Money Market\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 3:
		printf("You have selected a certificate of deposit.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s", name);
		strtok(name, "\n");
		printf("These are your account details.\n"
			   "Full Name: %s\n"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Ceritificate of Deposit\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 4:
		printf("You have selected a brokerage account.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s", name);
		strtok(name, "\n");
		printf("These are your account details.\n"
			   "Full Name: %s\n"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Brokerage\n");
		printf("Your data has been registred to a text file. \n");

		break;
	case 5:
		printf("You have selected an individual retirement account.\n");
		printf("Your account has been successfully created! \n");
		printf("Welcome, %s", name);
		strtok(name, "\n");
		printf("These are your account details.\n"
			   "Full Name: %s\n"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Individual Retirement\n");
		printf("Your data has been registred to a text file. \n");
		break;
	default: 
		printf("Failed.\n");
	}


	if (action2 == 1)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Savings\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fclose(bankAccount);
	}
	else if (action2 == 2)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Money Market\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fclose(bankAccount);

	}
	else if (action2 == 3)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Certificates of deposit\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fclose(bankAccount);
	}	
	else if (action2 == 4)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Borkerage\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fclose(bankAccount);
	}	
	else if (action2 == 5)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Individual retirement\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fclose(bankAccount);

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


/*
        so this login function.. eh.. so this is how it works.
		read text from the text files that has the account details
		only take the Full Name and Pin
		compare them to an input
		and if the input matches one pin and one full name
		it logs the user in.
		and if it is logged in, it will allow the user to do other stuff.
*/

int logIn() 
{


}


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

	}	  	    
}
