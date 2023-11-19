# include <stdio.h>
int main(){
for (int i=1;i<6;i++) //loop that iterates 5 times
{
    for(int j=1;j<=i;j++){ //loop that compares values of i and j and then print the pattern
    printf("*");}
    printf("\n");
}


return 0;
}