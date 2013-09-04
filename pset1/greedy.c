#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    
  //Asking for user's input and getting floating value
  float change;
    do
      {
        printf("Value has to be postive.\n");
        printf("Hey! How much change is owed?");
        change = GetFloat();
      }
    while (change < 0);
    
    int cents = round(change * 100);
    int coins = 0;
    
    while(cents >=25)
      {
        cents -= 25;
        coins++;
      }
    while(cents>=10)
      {
        cents-=10;
        coins++;
      }
    while(cents>=5)
      {
        cents-=5;
        coins++;
      }
    while(cents>=1)
      {
        cents-=1;
        coins++;
      }
    
    printf("%d\n", coins);
    return 0;
}
