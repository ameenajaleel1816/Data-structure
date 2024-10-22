#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX],top=-1;





void push()
{
int elem;
if(top==MAX-1)
{
printf("stack overflow!cannot push more elements.\n");
return;
}
printf("enter the element to be pushed:");
scanf("%d",&elem);
top++;
stack[top]=elem;
printf("%d pushed to the stack.\n",elem);
}






void pop()
{
if(top==-1)
{
printf("stack underflow!\n");
return;
}
printf("popped element:%d\n",stack[top]);
top--;
}






void display()
{
int i;
if(top==-1)
{
printf("stack is empty.\n");
return;
}
printf("stack elements are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}






int main()
{
int ch;
while(1)
{
printf("\n--- stack menu --\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&ch);





switch(ch)
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
default:
printf("invalid choice");
}
}
return 0;
}

