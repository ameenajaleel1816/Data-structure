#include <stdio.h>
#include <stdlib.h>

int main()
 {
int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
printf("Enter the number of rows for the first matrix: ");
scanf("%d", &r1);
printf("Enter the number of columns for the first matrix: ");
scanf("%d", &c1);
printf("Enter the first matrix elements:\n");
for(i = 0; i < r1; i++)
 {
for(j = 0; j < c1; j++)
 {
scanf("%d", &a[i][j]);
}
}
printf("Enter the number of rows for the second matrix: ");
scanf("%d", &r2);
printf("Enter the number of columns for the second matrix: ");
scanf("%d", &c2);
if (c1 != r2) {
printf("Matrix multiplication not possible (columns of A must equal rows of B).\n");
return 1;
}
printf("Enter the second matrix elements:\n");
for(i = 0; i < r2; i++)
 {
for(j = 0; j < c2; j++) 
{
scanf("%d", &b[i][j]);
}
}
for(i = 0; i < r1; i++) 
{
for(j = 0; j < c2; j++)
 {
c[i][j] = 0; 
}
}
for(i = 0; i < r1; i++) 
{
for(j = 0; j < c2; j++) 
{
for(k = 0; k < c1; k++) 
{
c[i][j] += a[i][k] * b[k][j]; 
}
}
}
printf("The product of the matrices is:\n");
for(i = 0; i < r1; i++) 
{
for(j = 0; j < c2; j++)
 {
printf("%d ", c[i][j]);
}
printf("\n");
}
return 0;
}



