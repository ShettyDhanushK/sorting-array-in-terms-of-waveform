#include <stdio.h>

void printArray(int arr[], int N); //Prints the array

void Swap(int * x, int * y) //Swap x and y
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Sort(int arr[], int N) //Sorting elements using bubble sort -> ascending
{
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                Swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void sortInWave(int arr[], int N) //The sorting of wave in terms of waveform takes place
{
    Sort(arr, N); //Calling the sort function to sort the array

    for(int i = 0; i < N-1; i+=2) //Iterating over all the even or high positioned elements.
    {
        Swap(&arr[i], &arr[i+1]);//The element at the high positioned index(i.e 0,2,4,6,8,10...) is swapped with it's next element as the array is sorted.
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

//The time complexity is O(N*Log(N))

//Prints the Array
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