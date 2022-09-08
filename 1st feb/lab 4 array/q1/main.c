#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int arr[12]={0,1,2,3,4,5,6,7,8,9};

    //Asking user for the operation to be performed.
    printf("Do you want to insert(i), delete(d), print(p) or reverse print(r)=");
    scanf("%c",&ch);

    //Condition for insertion.
    if(ch=='i')
    {
        int j, y, place;
        //Asking user for the input for insertion.
        printf("Element to be inserted=");
        scanf("%d",&y);
        //Asking user for the positon where insertion need to happen.
        printf("Position=");
        scanf("%d",&place);
        //Loop for shifting the element forward.
        for (j = 10; j>=place; j--)
        {
            arr[j] = arr[j - 1];
        }
        //Inserting the user element to its desired position.
        arr[place-1]=y;
        //For priniting the modified array.
        for (j = 0; j<11; j++)
        {
            printf("%d ", arr[j]);
            printf("\n");
        }
    }
    //Condition for deletion.
    else if(ch=='d')
    {
        int place;
        //Asking user for the position of the deletion to happen.
        printf("Position=");
        scanf("%d",&place);
        //Loop for backward shifting of elements.
        for(int j=place-1; j<=9; j++)
        {
            arr[j]=arr[j+1];
        }
        //Loop for printing the modified array.
        for (int j = 0; j<9; j++)
        {
            printf("%d\n", arr[j]);
        }
    }
    //Loop for printing the array.
    else if(ch=='p')
    {
        for (int j = 0; j<9; j++)
        {
            printf("%d\n", arr[j]);
        }
    }
    //Loop for reverse printing the array.
    else if(ch=='r')
    {
        int A[12];
        for (int j = 0; j<10; j++)
        {
            //Reverse entry to new array.
            A[9-j]=arr[j];
        }
        //For printing the new array with reverse entries.
        for (int j=0; j<10; j++)
        {
//            arr[j]=A[j];
            printf("%d\n",A[j]);
        }
    }
    return 3;
}
