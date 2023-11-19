# include <stdio.h>
#include <string.h>
int main(){
//saves input string in variable
   char s[20];
   printf("Enter a string:");
   scanf("%s",&s);
   //counts the number of vowels by checking each letter in the string through a loop
   int i=0;
   int count=0;
   int n=strlen(s);
   printf("%d\n",n);
   while (i<n)
   {
       if (s[i]=='a'|| s[i]=='e'|| s[i]=='o'||s[i]=='u'||s[i]=='i')
       count++;
    i++;
   }
   printf("Number of vowels are %d",count);
   return 0;
}
