#include<stdio.h>
long int fact(int n);
int main() {
    //takes input and saves it as the variable
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fact(n));
    return 0;
}
//function to find factorial, it keeps multiplying n with n-1 and then further less values till n=1
long int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}