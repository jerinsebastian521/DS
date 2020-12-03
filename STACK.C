#include<stdio.h>
int stack[100],choice,n,top,i,item;
void push(void);
void pop(void);
void display(void);

int main ()
{
clrscr();
top=-1;

printf("\nenter array limit");
scanf("%d",&n);
while(1)
{
printf("\n1.push\n2.pop\n3.display\n4.exit");

scanf("\nenter your option");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
}
}
}
void push()
{
if(top>=n-1)
{
printf("\nstack is overflow");
}
else{
printf("\nenter item");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("\nstack is empty");
}
else
{
printf("\ndeleted item %d",stack[top]);
top=top-1;
}
}
void display()
{
if(top>=0)
{
for(i=top;i>=0;--i)
{
printf("%d",stack[i]);
}
}
else
{
printf("stack is empty ");
}
}