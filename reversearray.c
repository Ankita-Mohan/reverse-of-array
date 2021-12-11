#include <stdio.h>
//reverse of an array
int main()
{
    int array396[100], i396, n396, temp396;
    printf("Enter the size of 1D array :\n");
    scanf("%d", &n396);
    printf(" Enter the Array elements \n");
    for (i396 = 0; i396 < n396; i396++)
    {
        printf("[%d] location \n", i396);
        scanf("%d", &array396[i396]);
    }
    printf("Actual array:  ");
    for (i396 = 0; i396 < n396; i396++)
    {
        printf("%d \t", array396[i396]);
    }
    int last396 = n396 - 1;
    for (i396 = 0; i396 < n396 / 2; i396++)
    {
        temp396 = array396[i396];
        array396[i396] = array396[last396];
        array396[last396] = temp396;
        last396--;
    }

    printf("\nREVERSE array:  ");
    for (i396 = 0; i396 < n396; i396++)
    {
        printf("%d \t", array396[i396]);
    }
    return 0;
}
//created by Ankita Mohan
