#ifndef my_header_
#define my_header_
#define PI 3.14159

void fct_putchar(char c);
void fct_putstr(char *str);
int evenOdd(int nb);
int isPrime(int nb);
int isPalindrome(int nb);
int isPerfect(int nb);
int power(int nb, int n);
int isArmstrong(int nb);
int factorial(int nb); //using recursion
int strong(int nb);
int count_digits(int nb); //using recursion
void swap(int *nb_1, int *nb_2);
int fibonacci(int nb);
int largest_of_two(int a, int b);
int area_of_triangle(int height, int base);
float volume_of_sphere(float radius);
int leap_year(int year);
int binary_to_decimal(int nb);

#endif