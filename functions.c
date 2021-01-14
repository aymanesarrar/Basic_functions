#include "my_header.h"
#include <unistd.h>

void fct_putchar(char c)
{
  write(1, &c, 1);
}
void fct_putstr(char *str)
{
  int i;
  i = 0;
  while (str[i])
    fct_putchar(str[i++]);
}
int evenOdd(int nb)
{
  return (nb % 2 == 0);
}
int isPrime(int nb)
{
  int i;
  int counter;
  i = 1;
  counter = 1;
  while (i < nb)
  {
    if (nb % i == 0)
      counter++;
    i++;
  }
  if (counter == 2)
    return 1;
  else
    return 0;
}
int isPalindrome(int nb)
{
  int remainder;
  int newnb = 0;
  int temp;
  temp = nb;
  while (nb != 0)
  {
    remainder = nb % 10;
    newnb = (newnb * 10) + remainder;
    nb = nb / 10;
  }
  nb = temp;
  if (newnb == nb)
    return 1;
  else
    return 0;
}
int isPerfect(int nb)
{
  int sum = 0;
  int i;
  i = 1;
  while (i < nb)
  {
    if (nb % i == 0)
      sum = sum + i;
    i++;
  }
  if (sum == nb)
    return 1;
  else
    return 0;
}
int power(int nb, int n)
{
  int mult = 1;
  while (n >= 1)
  {
    mult = mult * nb;
    n--;
  }
  return mult;
}
int isArmstrong(int nb)
{
  int sum = 0;
  int temp;
  temp = nb;
  int remainder;
  while (nb != 0)
  {
    remainder = nb % 10;
    sum = sum + power(remainder, 3);
    nb = nb / 10;
  }
  nb = temp;
  if (sum == nb)
    return 1;
  else
    return 0;
}
int factorial(int nb)
{
  if (nb == 0 || nb == 1)
    return 1;
  else
    return nb * factorial(nb - 1);
}
int strong(int nb)
{
  int temp;
  int sum = 0;
  int remainder;
  temp = nb;
  while (nb != 0)
  {
    remainder = nb % 10;
    sum = sum + factorial(remainder);
    nb = nb / 10;
  }
  nb = temp;
  if (sum == nb)
    return 1;
  else
    return 0;
}
int count_digits(int nb)
{
  if (nb >= 0 && nb <= 9)
    return nb;
  else
    return count_digits(nb / 10) + count_digits(nb % 10);
}
void swap(int *nb_1, int *nb_2)
{
  int temp;
  temp = *nb_1;
  *nb_1 = *nb_2;
  *nb_2 = temp;
}
int fibonacci(int nb)
{
  if (nb == 0)
    return 0;
  else if (nb == 1)
    return 1;
  else
    return fibonacci(nb - 1) + fibonacci(nb - 2);
}
int largest_of_two(int a, int b)
{
  return a > b ? a : b;
}
int area_of_triangle(int height, int base)
{
  return (height * base) / 2;
}
float volume_of_sphere(float radius)
{
  return (4.0/3.0) * PI * radius * radius * radius;
}
int leap_year(int year)
{
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int binary_to_decimal(int nb)
{
  int i, remainder;
  int sum = 0;
  i = 0;
  while (nb != 0) {
    remainder = nb % 10;
    if (remainder == 1) {
      sum = sum + power(2,i);
    }
    i++;
    nb = nb / 10;
  }
  return sum;
}
int decimal_to_binary(int nb)
{
  int remainder, binary, i;
  binary = 0;
  i = 1;
  while (nb != 0) {
    remainder = nb % 2;
    binary = binary + (remainder * i);
    nb = nb / 2;
    i = i * 10;
  }
  return binary;
}
int binary_to_octal(int nb)
{
  int octal = 0, remainder, i = 1, decimal;
  while (nb != 0)
  {
    remainder = nb % 1000;
    decimal = binary_to_decimal(remainder);
    octal = octal + (decimal * i);
    i = i * 10;
    nb = nb / 1000;
  }
  return octal;
}
int gcd_recursive(int a, int b)
{
  if (a == b)
    return a;
  else if (a > b)
    return gcd_recursive(a-b, b);
  else if (b > a)
    return gcd_recursive(a, b-a);
}
int gcd_no_recursive(int a, int b)
{
  int i, gcd;
  i = 1;
  while (i <= a && i <= b)
  {
    if (a % i == 0 && b % i == 0)
      gcd = i;
    i++;
  }
  return gcd;
}
int lcm_with_gcd(int a, int b)
{
  return (a * b / gcd_recursive(a,b));
}
int lcm_iterative(int a, int b)
{
  int multiple, lcm;
  multiple = (a < b) ? a : b;
  while (1)
  {
    if ((multiple % a == 0) && (multiple % b == 0)) {
      lcm = multiple;
      break;
    }
    multiple++;
  }
  return lcm;
}
int *largest_and_smallest(int arr[], int size, int newArr[2]) {
  int i, smallest, largest;
  i = 0;
  smallest = arr[0];
  largest = arr[0];
  while (i < size)
  {
    if (arr[i] < smallest)
    {
      swap(&arr[i], &smallest);
    } else if (arr[i] > largest)
    {
      swap(&arr[i], &largest);
    }
    i++;
  }
  newArr[0] = smallest;
  newArr[1] = largest;
  return newArr;
}
int second_largest(int arr[], int size)
{
  int secondLargest;
  int largest;
  int i;
  secondLargest = arr[0];
  while (i < size)
  {
    if (largest < arr[i])
    {
      swap(&arr[i], &largest);
    }
    i++;
  }
  i = 0;
  secondLargest  = arr[0];
  while (i < size)
  {
    if ((secondLargest < arr[i]) && (arr[i] != largest))
    {
      swap(&arr[i], &secondLargest);
    }
    i++;
  }
  return secondLargest;
}