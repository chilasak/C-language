#include<stdio.h>
#include<string.h>
void vice()
{
	int salary;
	int tax;
	puts("How much your salary :");
	scanf("%d",&salary);
	
	tax=salary*0.7;
	
	printf("Tax = %d\n",tax);
}
int main()
{
	puts("Hello");
	vice();
	vice();
	vice();
	puts("Bye");
}
