
#include<stdio.h>
int main()
{
    //takes input array and key that needs to be searched
    int c, first, last, middle, n, search, array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&array[c]);
    printf("Enter value to find\n");
    scanf("%d",&search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    //verifies if the array is sorted
    while( first <= last )
    {
        //compares key value to the middle, if it's greater then searches again in the right side and shifts the middle value
        if ( array[middle] < search )
            first = middle + 1;
        else if ( array[middle] == search )//if both are equal, returns the position
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;//otherwise shifts the middle value and searches on the left side 
        middle = (first + last)/2;
    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", search);
    return 0;
}
