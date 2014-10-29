#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("How much change is owed?\n");
  float n = GetFloat();
  while(n < 0){
    printf("Please enter a valid dollar amount...\n");
    n = GetFloat();
  };
  printf("You want me to give you this much change?\n %.2f \n", n);
  int d = roundf(n * 100);
  int q = d/25;
  int e = d%25;
  int dime = e/10;
  int h = e%10;
  int nickel = h/5;
  int i = h%5;
  int penny = i/1;
  printf("Your change is %d quarters, %d dimes, %d nickels, and %d pennies", q, dime, nickel, penny);

}
