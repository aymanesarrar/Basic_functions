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