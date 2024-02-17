#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
#define MAX 5
int stack[MAX];
void menu();
int isfull(){
	if(top==MAX-1)
	{
		printf("Thestack is full.POP some value.");
		system("pause>nul");
		return 1;
	}
	else
	return 0;
}
int isempty()
{	if(top==-1)
	{
		printf("The stack is empty .PUSH some value.");
		system("pause>nul");
		return 1;
	}
	else
	return 0;
}
int PUSH(){
	int c;
	if(isfull()){
		return 1;
	}
	else
	{
		printf("Enter the value you want to insert:");
		scanf("%d",&c);
		top=top+1;
		printf("%d",top);
		stack[top]=c;
	}
}
void POP(){
	int c;
	if(isempty()){
	}
	else
	{
		c=stack[top];
		top=top-1;
		printf("Value popped out:%d",c);
		system("pause>nul");
 
	}
}
void display(){
	int i;
	if(isempty()){
		printf("Stack is empty.");
	//	system("pause>nul");
	//	menu();
	}
	else
	{
		printf("All value of stack:\n");
		for(i=top;i>=0;i--)
		{
			//system("pause>nul");
			printf("%d",stack[i]);
			printf("\n");
		}
	}
}
void peek(){
	printf("Value at the top of stack:%d",stack[top]);
	system("pause>nul");
}
 
void menu(){
	int c;
	//	system("cls");
	printf("**********************************************************************\n");
		printf("\t\tMENU:\n");
		printf("**********************************************************************\n");
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.Exit\n");
		printf("##########################################################################\n");
		printf("\n");
		printf("Enter your choices:");
		scanf("%d",&c);
		switch(c){
			case 1:	
			PUSH();
			break;
			case 2:	
			POP();
			break;
			case 3:	
			display();
			break;
			case 4:	
			peek();
			break;
			case 5:	
			exit(0);
			default:
			printf("Invalid option.Re-enter your choice(1-5)");
		}
}
int main(){
	while(1){
	menu();
}
_getch();
return 0;
}
