#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *username;
	char *password;


	printf("Enter the username: ");
	gets(username);

	printf("\nEnter the password: ");
	gets(password);

	if(strcmp(username, "user") == 0){
		//username verification sucessful
		//next step is to verify the password
		if(strcmp(password, "default") == 0){
			//password verification also successful
			printf("\nUser successfully logged in...");
		}else{
			//invalid password. Report it
			printf("\nPassword entered is invalid");
		}
	}else{
		//invalid username. Report it
		printf("\nUsername entered is invalid");
	}

	getch();
}