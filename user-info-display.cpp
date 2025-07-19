#include <stdio.h>

int main()
{
	char firstName[20];
	char middleName[20];
	char lastName[20];
	char birthdate[50] = "'mm/dd/yyyy'";
	char mm[20], dd[20];
	int yyyy;
	int age;
	char facebookAcct[20];
	char email[50];
	char contactNum[20];
	char program[20];
	int section;
	
	printf("\n\n\t\tDisplay User Information\n");
	
	printf("\n\tFirst name: \t");
	scanf("%s",&firstName);
	
	printf("\n\tMidlle name: \t");
	scanf("%s",&middleName);
	
	printf("\n\tLast name \t");
	scanf("%s",&lastName);
	
	printf("\n\tBirthdate: \t%s",birthdate);
	
	printf("\n\tBirthdate: \t");
	scanf("%s%s%d",&mm,&dd,&yyyy);
	
	printf("\n\tFacebook Acct: \t");
	scanf("%s",&facebookAcct);
	
	printf("\n\tEmail: \t\t");
	scanf("%s",&email);
	
	printf("\n\tContact: \t");
	scanf("%s",&contactNum);
	
	printf("\n\tProgram: \t");
	scanf("%s",&program);
	
	printf("\n\tSection: \t");
	scanf("%d",&section);
	
	age = 2025 - yyyy;
	
	printf("\n\n\tYour Fullname: \t\t%s %s %s", firstName,middleName,lastName);
	printf("\n\tYour Birthdate: \t%s %s %d", mm, dd, yyyy);
	printf("\n\tYour Age: \t\t%d",age);
	printf("\n\tYour Facebook Acct: \t%s",facebookAcct);
	printf("\n\tYour Email: \t\t%s",email);
	printf("\n\tYour Contact: \t\t%s", contactNum);
	printf("\n\tYour Program: \t\t%s",program);
	printf("\n\tYour Section: \t\t%d",section);		
}
