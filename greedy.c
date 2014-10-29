#include <cs50.h>
#include <stdio.h>
#include <math.h>

void change (int d);

int main(void)
{
  printf("How much change is owed?\n");
  float n = GetFloat();
  while(n < 0){
    printf("Please enter a valid dollar amount...\n");
    n = GetFloat();
  };
  printf("You want me to give you this much change?\n %.2f \n", n);
  int d = roundf(n*100);
  printf ("Your change is ");
  change(d);
};
  void change(int d) {
    if (d >= 25)
    {
      int quarter = d/25;
      if ( quarter > 1)
      {
        printf("%d quarters ", quarter);
      }
      else
      {
        printf("%d quarter ", quarter);
      }
      int e = d%25;
      d = e;
      change(d);
    }
    else if (d >= 10)
    {
      int dime = d/10;
      if ( dime > 1)
        {
          printf("%d dimes ", dime);
        }
      else
        {
          printf("%d dime ", dime);
        }
        int h = d%10;
        d = h;
        change(d);
    }
    else if (d >= 5)
    {
      int nickel = d/5;
      if ( nickel > 1 )
        {
          printf("%d nickels ", nickel);
        }
      else
        {
          printf("%d nickel ", nickel);
        }
        int i = d%5;
        d = i;
        change(d);
    }
    else if ( d >= 1)
      {
        int penny = d/1;
        if (penny > 1)
          {
            printf("%d pennies", penny);
          }
        else
          {
            printf("%d penny", penny);
          }
      }
    else
      {
        printf("\n");
      }
  };
