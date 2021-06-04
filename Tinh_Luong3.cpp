#include<stdio.h>
#include<string.h>
#include<conio.h>
void menu()
{
	puts("\n***MENU***");
	puts("1) Findding tax 7%");
	puts("2) Saving money");
	puts("3) Exit ");
}
double findtax(int salary)
{
	double tax;
	tax=salary*0.7;
	return tax;
}
int savingmoney(int salary,int year)
{
	int total;
	total=salary*12*year;
	return total;
	
}
int main()
{
	int choice;
	do 
	{
		menu();
		puts("Enter :");
		choice=getch();
		if (choice=='1')
		{
			int salary;
			puts("How much your salary :");
	        scanf("%d",&salary);
	        printf("Tax = %f\n",findtax(salary));
		}
		if(choice=='2')
		{
			int salary;
        	int year;
        	int total;
        	
	
        	puts("How much your salary :");
        	scanf("%d",&salary);
        	puts("How much year");
         	scanf("%d",&year);
         	
         	total=savingmoney(salary,year);
         	
         	printf("Total=%d\n",total);
	
		}
	}
	while(choice!='3');
	
	puts("Good Bye");
}

