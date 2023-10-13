#include<stdio.h>
#include<string.h>
int r;
char userNamer[30],passwordr[20], userNamel[30], passwordl[20];

void signUp()
{
	printf("Enter User Name :\n");
	scanf_s("%s", &userNamer,30);
	printf("Enter Password :\n");
	scanf_s("%s", &passwordr,20);
	printf("registered Successfully!\n");
}
void login()
{
	printf("Login :=\n");
	printf("Enter User Name :\n");
	scanf_s("%s", &userNamel,30);
	printf("Enter Password :\n");
	scanf_s("%s", &passwordl,20);
	if (strcmp(userNamer, userNamel)==0 && strcmp(passwordr , passwordl)==0)
	{
		printf("Login successfully!\n");
	}
	else
	{
		printf("Login failed!\n");
	}
}
void start()
{
	printf("register press -> 1 \nlogin press -> 2 \nexit press -> 3\n");
	scanf_s("%d", &r);
	if (r == 1)
	{
		signUp();
		start();
	}
	else if(r==2)
	{
		login();
		start();
	}
}
int main()
{
	start();
	return 0;
}