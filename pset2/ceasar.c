#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
//Determining the key
int k = 0;
 if(argc != 2) 
   {
     printf("Please enter one positive number in the command line.\n");
     return 1;
   }
 else 
   {
     k = atoi(argv[1]); //key number
     if(k>26)
       {
	 k = k%26;
       }       
   }
   
 //Asking for a plain text input
    
 printf("Please type in text that you would like to encrypt: ");
 string s = GetString(); 
    
 //Encrypting string
   
    
 for ( int i = 0; i <strlen(s); i++) 
   {
    
     //If uppercase:
     if(s[i]>='A' && s[i]<='Z')
       {
	 s[i] = (s[i] + k - 'A')%26 + 'A'; 
	 printf("%c", s[i]);
       }
     //If lowercase:
     else if(s[i]>='a' && s[i]<='z')
       {
	 s[i] = (s[i] + k - 'a')%26 + 'a';
	 printf("%c", s[i]);
       }
     //If numbers, characters or spaces
     else if (isdigit(s[i]) || ispunct(s[i]) || isspace(s[i]))
       {
	 printf("%c", s[i]);
       }
   }    
    
 printf("\n");
       
 return 0;
}   


