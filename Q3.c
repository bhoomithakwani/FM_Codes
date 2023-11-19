# include <stdio.h>
int main(){
    //takes input and saves it in the variable
    int n;
    printf("Enter number of rows:"); 
    scanf("%d",&n);
//loop that compares i and j values to make the required pattern
for (int i=1;i<n+1;i++)
{
    for(int j=1;j<=i;j++){
    printf("*");}
    printf("\n");
}


return 0;
}