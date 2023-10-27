// 1.Sort elements of array in ascending order;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], temp;
    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sortedd array:\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}



// 2.Sort elements of array in descending order;
/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], temp;
    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
*/