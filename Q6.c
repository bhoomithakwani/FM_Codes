
#include <stdio.h>
int main(){
//define variables and pointers
int a,b,temp;
int *p1, *p2;
//takes and assigns input values to the variables defined
printf("Enter the values for a and b:");
scanf("%d %d",&a,&b);
printf("Initial value of a is %d and b is %d\n",a,b);
//saves memory address of a and b and makes the pointers swap their pointing values hence swapping the variable values 
p1=&a; 
p2=&b;
temp=*p1;
*p1=*p2;
*p2=temp;
printf("Final value of a is %d and b is %d",a,b);
  return 0;
}