#include "my_header.h"
#include <stdio.h>
int main()
{
    int numbers[5] = {2,500,227,300,5000};
    int secondLargest = second_largest(numbers,5);
    printf("%d",secondLargest);
}