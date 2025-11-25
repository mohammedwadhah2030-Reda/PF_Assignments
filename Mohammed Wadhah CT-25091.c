#include <stdio.h>
//Mohammed Wadhah CT-25091
void CountFrequency(int array1[], int size)
{
    int count[11] = {0};   

    for(int i = 0; i < size; i++)
    {
        count[array1[i]] = count[array1[i]] + 1;
    }

    printf("\nValue  Count\n");

    for(int i = 0; i <= 10; i++)
    {
        if(count[i] > 0)
        {
            printf("%d\t%d\n", i, count[i]);
        }}
    }
int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array1[size];
    printf("Enter %d elements (0 to 10):\n", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }
    CountFrequency(array1, size);

    return 0;
}

