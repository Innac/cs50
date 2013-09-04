#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
int height;    
    do
      {
        printf("What is the height of Mario's Pyramid?");
        height = GetInt();
      }
    while (height <= 0);
    
    for(int line = 1; line <= height; line++)
      {
	for(int space = 0; space <= height - line; space++)
	  {
	    printf(" ");
	  }   
        for (int hash = 0; hash < line + 1; hash++)
	  {
            printf("#");
	  }
        printf("\n");
      }
    
    return 0;
}
