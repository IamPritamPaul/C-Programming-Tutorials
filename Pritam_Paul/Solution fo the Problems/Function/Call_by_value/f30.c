// 30. Write a program to input any number and check it is prime or not using call by value with return.
// need mofication
#include <stdio.h>
#include <math.h>
int my_sqrt(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x / i == i)
        {
            return i;
        }
        else
        {
            if ((x - i - i / 2) / i == i)
            {
                return i;
            }
        }
    }
}
int check_factor(int x)
{
    int i = 2, count = 0;
    while (i < x)
    {
        if (x % i == 0)
            count++;
        i++;
    }
    return count;
}
int check_prime(int n)
{
    if (n == 1)
        return 0;
    int w = my_sqrt(n);
    printf("%d is the sqrt.\n", w);
    // printf("%d\n", check_factor(w));
    return (check_factor(w) == 0);
}
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    if (check_prime(n))
    {
        printf("Yes It is a Prime Number.\n");
    }
    else
    {
        printf("No It is not a Prime Number.\n");
    }
    return 0;
}

/*
int my_sqrt(int x)
{
  for(int i=2;i<x;i++)
  {
    if(x/i==i)
    {
       return i;
    }
    else
    {
        if((x-i-i/2)/i==i)
        {
        return i;
        }
    }
  }
}
int check_prime(int x)
{
    int sum=0;
    if(x==1)
    {
      sum++;
      return sum;
    }
    else{
    for(int i=2;i<my_sqrt(x);i++)
    {
      if(x%i==0)
      {
        sum++;
      }
    }
    return sum;
    }
}
*/