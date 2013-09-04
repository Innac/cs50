#include <cs50.h>
#include <stdio.h>

#define SIZE 8
bool search(int needle, int haystack[], int size)
{
int min = 0;
int max = size-1;
if(size < min)
  return false;
 else
   {
int midpoint = max/2;
if(haystack[midpoint] < needle)
  return midpoint + 1;
 else if(haystack[midpoint] > needle)
   return midpoint - 1;
 else
   return true;
}
}
int main(void)
{
int numbers[SIZE] = {4, 8, 15, 16, 23, 42, 50, 108};
printf("> ");
int n = GetInt();
if(search(n, numbers, SIZE))
  printf("YES\n");
        
return 0;
}
