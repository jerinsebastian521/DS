#include<stdio.h>
int a[100],front=-1,rear=-1,ch,n,item,i;
void insert(void);
void del(void);
void display(void);

int main()
{
clrscr();

printf("enter limit of array");
scanf("%d",&n);
 while(1){
printf("\n1.insert\n2.delete\n3.display\n4.exit");
printf("\nenter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
exit(0);
 }
 }
 }

 void insert()
 {
 if(rear==n-1)
 {
 printf("\nq is full");
 }
 else{
 if(front==-1)
 {
 front=0;
 }
 else{
 rear++;
 printf("\nenter element");
 scanf("%d",&item);
 a[rear]=item;
 }
 }
 }
 void del()
 {
 if(front==-1)
 {
 printf("\nq is empty");
 }
 else{
 printf("\ndeleted element %d",a[front]);
 front++;
 }
 }
 void display()
 {
 if(front==-1)
 {
 printf("\nq is empty");
 }
 else{
 for(i=front;i<=rear;i++)
 {
 printf("%d",a[i]);
 }
 }
 }



