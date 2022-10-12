#include<stdio.h>
int sum = 0, a[10];
void disp (int size, int i)
{
static int index = 0;
for (i=0; i<size; i++)
{
printf ("\nIndex = %d\t", index++);
printf ("\nValue = %d\t", a[i]);
sum = sum + a[i];
}
printf ("\nSum is : %d", sum);
}
void main()
{
int size;
register int i;
printf ("Enter the Size of the Array:");
scanf ("%d", &size);
for (i=0; i<size; i++)
{
a[i] = i;
}
disp (size, i);
}
