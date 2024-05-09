#include <stdio.h>

void bubblesort(int *numbers, int size);
void printArray(int *numbers, int size);

int main()
{
    int numbers[5] = {5, 2, 1, 7, 6};
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);

    // print unsorted array
    printf("unsorted array\n");
    printArray(numbers, arrSize);

    // sort arr
    bubblesort(numbers, arrSize);

    // print sorted array
    printf("\n");
    printf("sorted array\n");
    printArray(numbers, arrSize);

    return 0;
}

void printArray(int *numbers, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }
}

void bubblesort(int *numbers, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // inner loop is for traversing through the array values
        for (int j = 0; j < size - i - 1; j++)
        {
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
