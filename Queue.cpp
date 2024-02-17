#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1,rear=-1;
#define maxsize 5
int queue[maxsize];
int isfull(){
    if(rear==maxsize-1){
    printf("Queue is full.\n");
    return 1;
    }
   else{
   return 0;
   }
}
 
int isempty(){
if((rear<front)||(front==-1)){
printf("Queue is empty.\n");
return 1;
}
else{
return 0;}
}
 
void Enqueue(){
int a;
if(isfull()){
}
else if(rear==-1&&front==-1){
front=0;
rear=rear+1;
printf("Enter data to enqueue:\n");
scanf("%d",&a);
queue[rear]=a;
}
else{
rear=rear+1;
printf("Enter data to enqueue:\n");
scanf("%d",&a);
queue[rear]=a;
}
}
void Display(){
    int i;
    if(isempty()){
    }
    else{
     printf("Contents of queue are:\n");
     for(i=front;i<=rear;i++){
     printf("%d\n",queue[i]);
     }
    }
}
void Peek()
{
if(isempty()){
return;
}
else{
    printf("The value at frontis:%d\n",queue[front]);
 
}
}
void Dequeue(){
int b;
if(isempty()){
}
else{
b=queue[front];
front=front+1;
printf("Dequeued value:%d\n",b);
}
}
void main(){
    int c;
while(1)
{
printf("\tMenu:\n");
printf("\t1.Enqueue.\n");
printf("\t2.Dequeue.\n");
printf("\t3.Display.\n");
printf("\t4.Peek.\n");
printf("\t5.Exit.\n");
printf("Enter your choice1-5:\n");
scanf("%d",&c);
switch(c){
case 1:
Enqueue();
break;
case 2:
Dequeue();
break;
case 3:
Display();
break;
case 4:
Peek();
break;
case 5:
exit(0);
default:
printf("Invalid option.Re-enter your choice(1-5)");
}
}
getch();
}
