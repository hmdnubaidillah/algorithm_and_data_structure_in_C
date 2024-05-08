#include <stdio.h>

void bubblesort(int numbers[], int size);

int main()
{

    int numbers[5] = {5, 2, 1, 7, 6};
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);

    // print unsorted array
    printf("unsorted array\n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\n", numbers[i]);
    }

    // sort arr
    bubblesort(numbers, arrSize);

    // print sorted array
    printf("\n");
    printf("sorted array\n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

void bubblesort(int numbers[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        printf("outer loop is executed\n");
        // inner loop is for traversing through the array values
        for (int j = 0; j < size - i - 1; j++)
        {
            printf("inner loop is executed\n");
            // check the numbers
            if (numbers[j] > numbers[j + 1])
            {
                // swapping
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
