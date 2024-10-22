#include<stdio.h>
#include<stdlib.h>
int a[30];
int n;
void create()
{
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements of the array:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}






void insert()
{
int l,num;
printf("enter the location to insert:");
scanf("%d",&l);
printf("enter the number:");
scanf("%d",&num);
if (l<0 || l>n)
{
printf("invalid location");
}

else
{
for (int i = n; i > l; i--)
{
    a[i] = a[i - 1];
}
a[l] = num;
n++;
printf("\n number is inserted");
}
}







void delete() 
{
 if (n == 0)
 {
  printf("array is empty");
  } 
 else
   {
  int l;
  printf("enter the location to delete:");
  scanf("%d", &l); 

  if (l < 0 || l >= n) 
  {
  printf("\n invalid location");
  } 
  else 
  {
  for (int i = l; i < n - 1; i++) 
  {
   a[i] = a[i + 1];
  }
   n--;
   printf("\n element deleted");
   }
   }
   }
   
   
   
   
   
   
   
   
void show()
{
if(n==0)
{
printf("array is empty");
}
else
{
for(int i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
}






int main()
{
int c;
create();
while(1)
{
printf("\n--- menu --\n");
printf("1.insert\n");
printf("2.delete\n");
printf("3.show\n");
printf("4.exit\n");
printf("enter your choice:\n");
scanf("%d",&c);





switch(c)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
show();
break;
case 4:
exit(0);
default:
printf("ivalid choice!please try again");
}
}
return 0;
}

