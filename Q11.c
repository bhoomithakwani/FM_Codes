#include <stdio.h>
void bubblesort(int a[],int e);
void selecsort(int a[],int e);
int main()
{
int a[50],n,e,i;
printf("Enter number of elements\n");
scanf("%d",&e);
printf("Enter elements in array\n");
for(i=0;i<e;i++)
scanf("%d",&a[i]);
printf("Enter 1 for bubble sort and 2 for selection sort: \n"); 
scanf("%d",&n);
if(n==1)
{
    bubblesort(a,e);
    return 0;
    }
else
{
selecsort(a,e);
return 0;
}
}

void bubblesort(int a[],int e)
{
    int i,j,temp;
for(i=0;i<(e-1);i++) //loop for handling iterations
{
  for(j=0;j<(e-1-i);j++) //loop that compares two adjacent numbers 
  {
    if(a[j]>a[j+1]) //compares adjacent numbers
    {
    temp=a[j];//swapping of numbers  
    a[j]=a[j+1];
    a[j+1]=temp;
  }
}
}
printf("Bubble sorted array:");
for(i=0;i<e;i++)
printf("%d\n",a[i]);
}

void selecsort(int a[],int e)
{
    int i, j, position, swap;
for(i = 0; i < (e - 1); i++)
{
position=i;
for(j = i + 1; j < e; j++)
{
if(a[position]>a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
printf("Selection sorted array:");
for(i = 0; i < e; i++)
printf("%d\n", a[i]);
}
