#include <stdio.h>
#include <string.h>
int main(){
    //takes input string and saves it in the variable
    char s[20];
    int f=0;
    printf("Enter a string:");
    fgets(s,20,stdin);
    //the loop compares the letters starting from the beginning to the letters starting from behind to determine its equality  
    int l=strlen(s)-1;
    for (int i=0; i<l/2;i++)
    {
    if (s[i]!=s[l-i-1]){
        f=1;
    }
}
if (f) {
    printf("The entered string is not a palindrome.");
}else
    printf("The entered string is a palindrome.");
}