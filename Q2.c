# include <stdio.h>
int main(){
    int i1; //define an integer variable
    printf("Enter an integer:"); //prints the statement
    scanf("%d", &i1); //gives value to the variable defined
    printf("Entered integer is %d\n", i1); //prints the variable's value
    
    char i2;
    printf("Enter a letter:");
    scanf("%c", &i2);
    printf("Entered letter is %c\n", i2);
    
    double i3;
    printf("Enter a decimal number:");
    scanf("%lf", &i3);
    printf("Entered decimal number is %lf\n",i3);
    
    char i4[20];
    printf("Enter a word:");
    scanf("%s",&i4);
    printf("Entered word is %s", i4);
    
}
