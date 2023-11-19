#include<stdio.h>
int main()
{
    int m[4][4],i,j;
    int sum=0;
    int sumd1=0,sumd2=0;

    //reading the matrix
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Element %d%d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }

    //printing the matrix
    printf("the matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    //finding sum of all the elements
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=sum+m[i][j];
        }
    }

    //finding sum of primary diagonal
    for(i=0;i<4;i++)
    {
            sumd1=sumd1+m[i][i];
    }
    for(i=0;i<4;i++)
    {
        for(j=3;j>=0;j--)
        {
           sumd2=m[0][3]+m[1][2]+m[2][1]+m[3][1];
        }

    }



    //printing the values
    printf("The sum of all elements=%d\n",sum);
    printf("The sum of the leading diagonal =%d\n",sumd1);
    printf("The sum of the counter diagonal =%d\n",sumd2);
    printf("The sum of both the diagonals is=%d",sumd1+sumd2);


    return 0;
}