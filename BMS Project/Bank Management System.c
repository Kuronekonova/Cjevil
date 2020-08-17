#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

// these variables were used in createAcc().
FILE * bankAccount; // the bank account file where below data is stored
FILE * pins; // might be useful in the future
FILE * names; // account names
char name[500]; // First Name
char pin[500]; // Account Pin
char country[500]; // Country Name 
char day[500]; // Date of Birth
char mon[500]; // Date of Birth
char year[500]; // Date of Birth
char csn[500]; // Citizenship Number
char adress1[500]; // Adress, not gonna change it to just adress cuz i'm too lazy.
char phone[500]; // Phone Number
int action; // First action in main()
int after; // Second action in main()
int action2; // Action in createAcc() - See switch statement.
char choice[500];


/* these variables are used in logIn(). */
char username[500]; // username in login()
char userpin[500]; // userpin in login()

// names.

char readName[500]; // reading name from banknames.txt
char readName2[500]; // reading name from banknames.txt
char readName3[500]; // reading name from banknames.txt
char readName4[500]; // reading name from banknames.txt
char readName5[500]; // reading name from banknames.txt
char readName6[500]; // reading name from banknames.txt
char readName7[500]; // reading name from banknames.txt
char readName8[500]; // reading name from banknames.txt
char readName9[500]; // reading name from banknames.txt
char readName10[500]; // reading name from banknames.txt
char readName11[500]; // reading name from banknames.txt
char readName12[500]; // reading name from banknames.txt
char readName13[500]; // reading name from banknames.txt
char readName14[500]; // reading name from banknames.txt  
char readName15[500]; // reading name from banknames.txt
char readName16[500]; // reading name from banknames.txt
char readName17[500]; // reading name from banknames.txt
char readName18[500]; // reading name from banknames.txt
char readName19[500]; // reading name from banknames.txt
char readName20[500]; // reading name from banknames.txt
char readName21[500]; // reading name from banknames.txt
char readName22[500]; // reading name from banknames.txt
char readName23[500]; // reading name from banknames.txt
char readName24[500]; // reading name from banknames.txt
char readName25[500]; // reading name from banknames.txt
char readName26[500]; // reading name from banknames.txt
char readName27[500]; // reading name from banknames.txt
char readName28[500]; // reading name from banknames.txt  
char readName29[500]; // reading name from banknames.txt
char readName30[500]; // reading name from banknames.txt
char readName31[500]; // reading name from banknames.txt
char readName32[500]; // reading name from banknames.txt
char readName33[500]; // reading name from banknames.txt
char readName34[500]; // reading name from banknames.txt
char readName35[500]; // reading name from banknames.txt
char readName36[500]; // reading name from banknames.txt
char readName37[500]; // reading name from banknames.txt
char readName38[500]; // reading name from banknames.txt
char readName39[500]; // reading name from banknames.txt
char readName40[500]; // reading name from banknames.txt
char readName41[500]; // reading name from banknames.txt
char readName42[500]; // reading name from banknames.txt
char readName43[500]; // reading name from banknames.txt  
char readName44[500]; // reading name from banknames.txt
char readName45[500]; // reading name from banknames.txt
char readName46[500]; // reading name from banknames.txt
char readName47[500]; // reading name from banknames.txt
char readName48[500]; // reading name from banknames.txt
char readName49[500]; // reading name from banknames.txt
char readName50[500]; // reading name from banknames.txt                

// pin.

char readPin[500]; // reading pin from bankpins.txt
char readPin2[500]; // reading pin from bankpins.txt
char readPin3[500]; // reading pin from bankpins.txt
char readPin4[500]; // reading pin from bankpins.txt
char readPin5[500]; // reading pin from bankpins.txt
char readPin6[500]; // reading pin from bankpins.txt
char readPin7[500]; // reading pin from bankpins.txt
char readPin8[500]; // reading pin from bankpins.txt
char readPin9[500]; // reading pin from bankpins.txt
char readPin10[500]; // reading pin from bankpins.txt
char readPin11[500]; // reading pin from bankpins.txt
char readPin12[500]; // reading pin from bankpins.txt
char readPin13[500]; // reading pin from bankpins.txt
char readPin14[500]; // reading pin from bankpins.txt
char readPin15[500]; // reading pin from bankpins.txt
char readPin16[500]; // reading pin from bankpins.txt
char readPin17[500]; // reading pin from bankpins.txt
char readPin18[500]; // reading pin from bankpins.txt
char readPin19[500]; // reading pin from bankpins.txt
char readPin20[500]; // reading pin from bankpins.txt
char readPin21[500]; // reading pin from bankpins.txt
char readPin22[500]; // reading pin from bankpins.txt
char readPin23[500]; // reading pin from bankpins.txt
char readPin24[500]; // reading pin from bankpins.txt
char readPin25[500]; // reading pin from bankpins.txt
char readPin26[500]; // reading pin from bankpins.txt
char readPin27[500]; // reading pin from bankpins.txt
char readPin28[500]; // reading pin from bankpins.txt
char readPin29[500]; // reading pin from bankpins.txt
char readPin30[500]; // reading pin from bankpins.txt
char readPin31[500]; // reading pin from bankpins.txt
char readPin32[500]; // reading pin from bankpins.txt
char readPin33[500]; // reading pin from bankpins.txt
char readPin34[500]; // reading pin from bankpins.txt
char readPin35[500]; // reading pin from bankpins.txt
char readPin36[500]; // reading pin from bankpins.txt
char readPin37[500]; // reading pin from bankpins.txt
char readPin38[500]; // reading pin from bankpins.txt
char readPin39[500]; // reading pin from bankpins.txt
char readPin40[500]; // reading pin from bankpins.txt
char readPin41[500]; // reading pin from bankpins.txt
char readPin42[500]; // reading pin from bankpins.txt
char readPin43[500]; // reading pin from bankpins.txt
char readPin44[500]; // reading pin from bankpins.txt
char readPin45[500]; // reading pin from bankpins.txt
char readPin46[500]; // reading pin from bankpins.txt
char readPin47[500]; // reading pin from bankpins.txt
char readPin48[500]; // reading pin from bankpins.txt
char readPin49[500]; // reading pin from bankpins.txt
char readPin50[500]; // reading pin from bankpins.txt


// too many variables bro.


int createAcc() // we have finally finished it. now...
{
	printf("First of all, create a pin. \n");
	printf("Your pin needs to be numbers only. \n");
	printf("You will need this pin next time you log in to your account. (not a feature yet, this is in devolpment.)\n");
	getchar();
	fgets(pin, 500, stdin); // integer
	printf("Full name: ");
	fgets(name, 500, stdin);
	printf("Enter your country name: ");
	fgets(country, 500, stdin);
	printf("Enter your adress: ");
	fgets(adress1, 500, stdin);
	printf("Enter your date of birth: \n"
	       "Day: ");
	fgets(day, 500, stdin); // integer
	printf("Month: "); 
	fgets(mon, 500, stdin); // integer
	printf("Year: ");
	fgets(year, 500, stdin); // integer
	printf("Enter your citizenship number: ");
	fgets(csn, 500, stdin); // integer
	printf("Enter your phone number - Do not input spaces.\n");
	fgets(phone, 500, stdin); // integer
	long long realPin = atoll(pin);
	long long realDay = atoll(day);
	long long realMon = atoll(mon);
	long long realYear = atoll(year);
	long long realCsn = atoll(csn);
	long long realPhone = atoll(phone);
	printf("Account Type. You have 6 options.\n");
	printf("1. Savings account\n"

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
			   "Country: %s"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, country, realDay, realMon, realYear, realCsn);
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
			   "Country: %s"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, country, realDay, realMon, realYear, realCsn);
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
			   "Country: %s"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, country, realDay, realMon, realYear, realCsn);
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
        	   "Country: %s"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, country, realDay, realMon, realYear, realCsn);
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
			   "Country: %s"
			   "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n"
			   "Citizenship Number: %lld\n", name, country, realDay, realMon, realYear, realCsn);
		printf("Adress: %s", adress1);
		printf("Phone Number: %lld\n", realPhone);
		printf("Account Type: Individual Retirement\n");
		printf("Your data has been registred to a text file. \n");
		break;
	default: 
		printf("Failed. Invalid input or unknown error.\n");
		printf("Terminating...\n");
	}

	// the part before this was a complete nightmare.

	if (action2 == 1)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankpins.txt", "a");
		names = fopen("banknames.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Country: %s", country);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Savings\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fprintf(pins, "%lld\n", realPin);
		fprintf(names, "%s\n", name);
		fclose(bankAccount);
		fclose(pins);
		fclose(names);
	}
	else if (action2 == 2)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankpins.txt", "a");
		names = fopen("banknames.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Country: %s", country);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Money Market\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fprintf(pins, "%lld\n", realPin);
		fprintf(names, "%s\n", name);
		fclose(bankAccount);
		fclose(pins);
		fclose(names);
	}
	else if (action2 == 3)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankpins.txt", "a");
		names = fopen("banknames.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Country: %s", country);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Certificates of deposit\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fprintf(pins, "%lld\n", realPin);
		fprintf(names, "%s\n", name);
		fclose(bankAccount);
		fclose(pins);
		fclose(names);
	}	
	else if (action2 == 4)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankpins.txt", "a");
		names = fopen("banknames.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Country: %s", country);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Borkerage\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fprintf(pins, "%lld\n", realPin);
		fprintf(names, "%s\n", name);
		fclose(bankAccount);
		fclose(pins);
		fclose(names);
	}	
	else if (action2 == 5)
	{
		bankAccount = fopen("bankaccountdetails.txt", "a");
		pins = fopen("bankpins.txt", "a");
		names = fopen("banknames.txt", "a");
		fprintf(bankAccount, "Full Name: %s\n", name);
		fprintf(bankAccount, "Country: %s", country);
		fprintf(bankAccount, "Date of birth: %lld/%lld/%lld (DD/MM/YYYY)\n", realDay, realMon, realYear);
		fprintf(bankAccount, "Citizenship Number: %lld\n", realCsn);
		fprintf(bankAccount, "Adress: %s", adress1);
		fprintf(bankAccount, "Phone Number: %lld\n", realPhone);
		fprintf(bankAccount, "Account Type: Individual retirement\n");
		fprintf(bankAccount, "Pin: %lld\n", realPin);
		fprintf(bankAccount, "\n");
		fprintf(pins, "%lld\n", realPin);
		fprintf(names, "%s\n", name);
		fclose(bankAccount);
		fclose(pins);
		fclose(names);
	}
	
	system("pause");

	printf("Would you like to log in to your account now? \n");
	printf("(Y\\N)\n");
	scanf_s("%s", &choice, 500);
	if (strcmp(choice, "Y") == 0)
	{
		logIn();
	}
	else
	{
		system("pause");
	}

	return 0;
}

// lol


int logIn() // Log in to your account.
{
	printf("------------Log in menu------------\n");
	getchar();
	printf("Enter your username: \n");
	fgets(username, 500, stdin);
	printf("Enter your pin: \n");
	fgets(userpin, 500, stdin);
	names = fopen("banknames.txt", "r");
	pins = fopen("bankpins.txt", "r");

	// i'll just do it like this lol

	// names.

	fgets(readName, 500, names);
	fgets(readName2, 500, names);
	fgets(readName3, 500, names);
	fgets(readName4, 500, names);
	fgets(readName5, 500, names);
	fgets(readName6, 500, names);
	fgets(readName7, 500, names);
	fgets(readName8, 500, names);
	fgets(readName9, 500, names);
	fgets(readName10, 500, names);
	fgets(readName11, 500, names);
	fgets(readName12, 500, names);
	fgets(readName13, 500, names);
	fgets(readName14, 500, names);
	fgets(readName15, 500, names);
	fgets(readName16, 500, names);
	fgets(readName17, 500, names);
	fgets(readName18, 500, names);
	fgets(readName19, 500, names);
	fgets(readName20, 500, names);
	fgets(readName21, 500, names);
	fgets(readName22, 500, names);
	fgets(readName23, 500, names);
	fgets(readName24, 500, names);
	fgets(readName25, 500, names);
	fgets(readName26, 500, names);
	fgets(readName27, 500, names);
	fgets(readName28, 500, names);
	fgets(readName29, 500, names);
	fgets(readName30, 500, names);
	fgets(readName31, 500, names);
	fgets(readName32, 500, names);
	fgets(readName33, 500, names);
	fgets(readName34, 500, names);
	fgets(readName35, 500, names);
	fgets(readName36, 500, names);
	fgets(readName37, 500, names);
	fgets(readName38, 500, names);
	fgets(readName39, 500, names);
	fgets(readName40, 500, names);
	fgets(readName41, 500, names);
	fgets(readName42, 500, names);
	fgets(readName43, 500, names);
	fgets(readName44, 500, names);
	fgets(readName45, 500, names);
	fgets(readName46, 500, names);
	fgets(readName47, 500, names);
	fgets(readName48, 500, names);
	fgets(readName49, 500, names);
	fgets(readName50, 500, names);

	// pins.

	fgets(readPin, 500, pins);
	fgets(readPin2, 500, pins);
	fgets(readPin3, 500, pins);
	fgets(readPin4, 500, pins);
	fgets(readPin5, 500, pins);
	fgets(readPin6, 500, pins);
	fgets(readPin7, 500, pins);
	fgets(readPin8, 500, pins);
	fgets(readPin9, 500, pins);
	fgets(readPin10, 500, pins);
	fgets(readPin11, 500, pins);
	fgets(readPin12, 500, pins);
	fgets(readPin13, 500, pins);
	fgets(readPin14, 500, pins);
	fgets(readPin15, 500, pins);
	fgets(readPin16, 500, pins);
	fgets(readPin17, 500, pins);
	fgets(readPin18, 500, pins);
	fgets(readPin19, 500, pins);
	fgets(readPin20, 500, pins);
	fgets(readPin21, 500, pins);
	fgets(readPin22, 500, pins);
	fgets(readPin23, 500, pins);
	fgets(readPin24, 500, pins);
	fgets(readPin25, 500, pins);
	fgets(readPin26, 500, pins);
	fgets(readPin27, 500, pins);
	fgets(readPin28, 500, pins);
	fgets(readPin29, 500, pins);
	fgets(readPin30, 500, pins);
	fgets(readPin31, 500, pins);
	fgets(readPin32, 500, pins);
	fgets(readPin33, 500, pins);
	fgets(readPin34, 500, pins);
	fgets(readPin35, 500, pins);
	fgets(readPin36, 500, pins);
	fgets(readPin37, 500, pins);
	fgets(readPin38, 500, pins);
	fgets(readPin39, 500, pins);
	fgets(readPin40, 500, pins);
	fgets(readPin41, 500, pins);
	fgets(readPin42, 500, pins);
	fgets(readPin43, 500, pins);
	fgets(readPin44, 500, pins);
	fgets(readPin45, 500, pins);
	fgets(readPin46, 500, pins);
	fgets(readPin47, 500, pins);
	fgets(readPin48, 500, pins);
	fgets(readPin49, 500, pins);
	fgets(readPin50, 500, pins);


	if (strcmp(readName, username) == 0 && strcmp(readPin, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName);
	}
	else if (strcmp(readName2, username) == 0 && strcmp(readPin2, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName2);
	}
	else if (strcmp(readName3, username) == 0 && strcmp(readPin3, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName3);
	}
	else if (strcmp(readName4, username) == 0 && strcmp(readPin4, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName4);
	}
	else if (strcmp(readName5, username) == 0 && strcmp(readPin5, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName5);
	}
	else if (strcmp(readName6, username) == 0 && strcmp(readPin6, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName6);
	}
	else if (strcmp(readName7, username) == 0 && strcmp(readPin7, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName7);
	}
	else if (strcmp(readName8, username) == 0 && strcmp(readPin8, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName8);
	}
	else if (strcmp(readName9, username) == 0 && strcmp(readPin9, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName9);
	}
	else if (strcmp(readName10, username) == 0 && strcmp(readPin10, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName10);
	}
	else if (strcmp(readName11, username) == 0 && strcmp(readPin11, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName11);
	}
	else if (strcmp(readName12, username) == 0 && strcmp(readPin12, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName12);
	}
	else if (strcmp(readName13, username) == 0 && strcmp(readPin13, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName13);
	}
	else if (strcmp(readName14, username) == 0 && strcmp(readPin14, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName14);
	}
	else if (strcmp(readName15, username) == 0 && strcmp(readPin15, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName15);
	}
	else if (strcmp(readName16, username) == 0 && strcmp(readPin16, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName16);
	}
	else if (strcmp(readName17, username) == 0 && strcmp(readPin17, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName17);
	}
	else if (strcmp(readName18, username) == 0 && strcmp(readPin18, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName18);
	}
	else if (strcmp(readName19, username) == 0 && strcmp(readPin19, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName19);
	}
	else if (strcmp(readName20, username) == 0 && strcmp(readPin20, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName20);
	}
	else if (strcmp(readName21, username) == 0 && strcmp(readPin21, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName21);
	}
	else if (strcmp(readName22, username) == 0 && strcmp(readPin22, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName22);
	}
	else if (strcmp(readName23, username) == 0 && strcmp(readPin23, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName23);
	}
	else if (strcmp(readName24, username) == 0 && strcmp(readPin24, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName24);
	}
	else if (strcmp(readName25, username) == 0 && strcmp(readPin25, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName25);
	}
	else if (strcmp(readName26, username) == 0 && strcmp(readPin26, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName26);
	}
	else if (strcmp(readName27, username) == 0 && strcmp(readPin27, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName27);
	}
	else if (strcmp(readName28, username) == 0 && strcmp(readPin28, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName28);
	}
	else if (strcmp(readName29, username) == 0 && strcmp(readPin29, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName29);
	}
	else if (strcmp(readName30, username) == 0 && strcmp(readPin30, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName30);
	}
	else if (strcmp(readName31, username) == 0 && strcmp(readPin31, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName31);
	}
	else if (strcmp(readName32, username) == 0 && strcmp(readPin32, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName32);
	}
	else if (strcmp(readName33, username) == 0 && strcmp(readPin33, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName33);
	}
	else if (strcmp(readName34, username) == 0 && strcmp(readPin34, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName34);
	}
	else if (strcmp(readName35, username) == 0 && strcmp(readPin35, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName35);
	}
	else if (strcmp(readName36, username) == 0 && strcmp(readPin36, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName36);
	}
	else if (strcmp(readName37, username) == 0 && strcmp(readPin37, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName37);
	}
	else if (strcmp(readName38, username) == 0 && strcmp(readPin38, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName38);
	}
	else if (strcmp(readName39, username) == 0 && strcmp(readPin39, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName39);
	}
	else if (strcmp(readName40, username) == 0 && strcmp(readPin40, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName40);
	}
	else if (strcmp(readName41, username) == 0 && strcmp(readPin41, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName41);
	}
	else if (strcmp(readName42, username) == 0 && strcmp(readPin42, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName42);
	}
	else if (strcmp(readName43, username) == 0 && strcmp(readPin43, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName43);
	}
	else if (strcmp(readName44, username) == 0 && strcmp(readPin44, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName44);
	}
	else if (strcmp(readName45, username) == 0 && strcmp(readPin45, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName45);
	}
	else if (strcmp(readName46, username) == 0 && strcmp(readPin46, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName46);
	}
	else if (strcmp(readName47, username) == 0 && strcmp(readPin47, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName47);
	}
	else if (strcmp(readName48, username) == 0 && strcmp(readPin48, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName48);
	}
	else if (strcmp(readName49, username) == 0 && strcmp(readPin49, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName49);
	}
	else if (strcmp(readName50, username) == 0 && strcmp(readPin50, userpin) == 0)
	{
		printf("Successfully logged in to %s", readName50);
	}
	else
	{
		printf("Incorrect pin or username, or both of them.\n");
	}

	system("pause");
	return 0;
}

// the worst algorithm in the world.

int update() // this is probably going to be my biggest nightmare...
{
	/*
		2. Update information of existing account

		This will allow the user to change the data of an existing account.
		 - Show the user's account details.
		 - Ask the user which information to change.
		 - Let the user do so
		 - And finally, print all the information of the account after updating it.
    */
	printf("Log in first. \n");
	logIn();

	
	system("pause");
	return 0;
}

int transc() // still in progress
{
	// lol
	system("pause");
	return 0;
}

int removeAcc() // in progress
{
	// just remove text from file
	system("pause");
	return 0;
}

int viewAcc() // nightmare...
{
	// ez. log in and view your account details.
	system("pause");
	return 0;
}


int main()
{
	printf("================BANK MANAGEMENT SYSTEM================\n");
	printf("----------Welcome to the main menu.----------\n");
	printf("1. Create an account - This will help you create a bank account; "
		   "It will ask for your Full Name, Country, Date of Birth, Citizenship Number, Adress, Phone Number, and finally chose your Account type.\n"
		   "2. Log in to an existing account\n"
		   "3. Update information of existing account\n"
		   "4. Transactions - This will help you withdraw or deposit money from or to a bank account.\n"
		   "5. Remove an existing account\n"
		   "6. View account details\n"
		   "7. Exit - Terminates the program instantly.\n");
	 
	scanf_s("%d", &action);
	if (action == 1)
	{
		printf("You have selected the first option: Create an account.\n");
		printf("We will now begin creating your account.\n");
		// create your account.
		createAcc();
	}	
	else if (action == 2)
	{
		// log in
		logIn();
	}
	else if (action == 3)
	{
		printf("It appears you want to update an account.\n");
		system("pause");
		// update your account after logging in.
		update();
	}
	else if (action == 4)
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
	else if (action == 5)
	{
		printf("It appears you want to remove an account.\n");
		system("pause");
	}
	else if (action == 6)
	{
		printf("It appears you want to view an existing account's information.\n");
		system("pause");
	}
	else if (action == 7)
	{

	}	  	    
	return 0;
}


