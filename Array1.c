// 1. sum

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],s=0;
    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    printf("Sum is %d",s);

    return 0;
}*/

// 2. Average
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],s=0;

    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    float avg=s/10.0;
    printf("Average is %.3f",avg);

    return 0;
}*/

// 3. sum of even and odd
/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], soe = 0, soo = 0;
    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            soe += a[i];
        else
            soo += a[i];
    }
    printf("Sum of even = %d\n", soe);
    printf("Sum of odd = %d", soo);

    return 0;
}*/

// 4.Greatest in the array

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],max=0;
    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i <= 9; i++)
    {
       scanf("%d",&arr[i]);
       if(max<arr[i]) max=arr[i];

    }
    printf("Greatest element in the array is %d",max);
    
    return 0;
}*/

// 5.Smallest in the array
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    printf("Enter 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min= arr[0];
    for (int i = 0; i <= 9; i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    printf("Smallest element in the array is %d",min);
    
    
    return 0;
}*/