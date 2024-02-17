#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void menu();
struct NODE
{
	int data;
	struct NODE*next;
};
typedef struct NODE NT;
NT*head=NULL;
 
NT* isbegining()
{
	//for create new node......................
	//ptr=New node.....
	NT*NEWNODE;
	int x;
	NT *temp;
	//for allocating the malloc we create a new node broooo.........
	temp=(NT*)malloc(sizeof(NT));
	printf("enter the item of node");//value hala babu
	scanf("%d",&x);
	temp->data=x;  //data aauni vayo aagadii
	temp->next=NULL; //last ma chaii address hunxa but aahile ko lagi null garam create garda
	return temp;
	 //ptr ma rakh haii babu
 
	if(head==NULL)
	{ //yedi head naii null xa vane keii xainw so we link the direct rthe value...
	NEWNODE-> next = NULL;
		head=NEWNODE;
	}
	else
	{
 
		NEWNODE-> next= head;
		head=temp;
	}
 
}
 
int main()
 {
 	menu();
 	return 0;
 }
 
 
 void menu()
 {
 	int a,b,c;
 		printf("/t\tMENU\n");
 		printf("1. INSERT A NODE \n");
 		printf("2. DELETE A NODE \n");
 		printf("3. DISPLAY \n");
 		printf("4. EXIT \n");
 		printf("enter any one option");
 		scanf("%d", &a);
 
 	switch(a)//for the starting switch case..........
 		{
 		case(1):
 
 		printf("1. INSERT A NODE AT BEGINNING \n");
 		printf("2. INSERT A NODE AT END \n");
 		printf("3. INSERT A NODE AT SPECIFIC POINT \n");
 		printf("enter any one option");
 		scanf("%d", &b);
 		switch(b)
 		{
 			case(1):
 
 			break;
 				case(2):
 
 			break;
 				case(3):
 
 			break;
 
 			default:
 				printf("invalid number");
 
		}
		break;
		case (2):
 
 		printf("1. DELECTION NODE AT BEGINNING \n");
 		printf("2. DELECTION A NODE AT END \n");
 		printf("3. DELECTION A NODE AT SPECIFIC POINT \n");
 		printf("enter any one option");
 		scanf("%d", &c);
 		switch(c){
 				case(1):
 
 			break;
 				case(2):
 
 			break;
 				case(3):
 
 			break;
 
 			default:
 				printf("invalid number");
		 }
 
		 case (3):
		 	//for display the function......
		 		break;
		 			 case (4):
		 	//for display the function......
		 	printf(" pehele fursad pye nikall");
		 		break;
			default:
			printf("HYA");
 
		}
	}
 
 
 
