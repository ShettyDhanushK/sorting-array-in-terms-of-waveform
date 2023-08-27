#include <stdio.h>

void printArray(int arr[], int N); //Prints the array

void Swap(int * x, int * y) //Swaps the x and y
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortInWave(int arr[], int N) //The sorting of wave in terms of waveform takes place
{
    for(int i = 0; i < N; i+=2) //Iterates only over the even positioned elements
    {
        //Checking if the previous element is greater than the current element.
        if(i>0 && arr[i] < arr[i-1]) //if i is greater than 0 and arr[i] is less than arr[i-1]
        {
            Swap(&arr[i], &arr[i-1]);
        }

        //Checking if the next element is greater than the current element.
        if(i<N-1 && arr[i] < arr[i+1]) //if i is greater than 0 and arr[i] is less than arr[i+1]
        {
            Swap(&arr[i], &arr[i+1]);
        }
    }
}


int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23, 34, 65, 12, 454, 34, 63, 45, 23, 132, 64, 52};
    int N = sizeof(arr) / sizeof(arr[0]); //Size of the array

    sortInWave(arr, N);

    printArray(arr, N);

    return 0;
}

//The time complexity of this approach is O(N).


//Prints the element of the array
void printArray(int arr[], int N)
{
    printf("Printing The Array....\n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\nPrinting The Wave Form Of The Array....\n");
    printf(" #\n #\n #");
    for(int i = 0; i < N; i+=2)
    {
        if(arr[i] > 999)
        {
            printf("%i ", arr[i]);
        } else if(arr[i] > 99)
        {
            printf("%i   ", arr[i]);
        } 
        else if(arr[i] > 9)
        {
            printf("%i    ", arr[i]);
        }
        else {
            printf("%i    ", arr[i]);
        }
    }
    printf("\n #");
    for(int i = 0; i < N; i+=2)
    {
        printf("---  -");
    }
    printf("\n #");
    for(int i = 1; i < N; i+=2)
    {
        printf("  |  |");
    }
    printf("\n #");
    for(int i = 1; i < N; i++)
    {
        printf("##|");
    }
    printf("####");
    printf("\n #");
    for(int i = 1; i <= N; i+=2)
    {
        printf("  |  |");
    }
    printf("\n #");
    for(int i = 1; i <= N; i+=2)
    {
        printf("  ----");
    }
    printf("\n #  ");
    for(int i = 1; i <= N; i+=2)
    {
        if(arr[i] > 999)
        {
            printf("%i  ", arr[i]);
        } else if(arr[i] > 99)
        {
            printf("%i   ", arr[i]);
        } 
        else if(arr[i] > 9)
        {
            printf("%i    ", arr[i]);
        }
        else {
            printf("%i     ", arr[i]);
        }
    }
    printf("\n #\n #\n\n\n");
}