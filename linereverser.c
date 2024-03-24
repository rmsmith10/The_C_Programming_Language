/******************************************************************************

Line Reverser

This application takes user input and reverses it using three custom functions:
`get_line()`, `string_size()`, and `line_reverser()`. 

The `get_line()` function retrieves user input and appends a null '\n' terminator 
at the end of the string. Reversing the string requires two character arrays: 
`currentline[]` and `reverseline[]`. 

The `line_reverser()` function utilizes the `string_size()` function to pinpoint 
the end of the string, marked by the null terminator '\0'. The `reverseline()` 
function's "for" loop iterates through the `currentline[]` array, starting at the 
last non-null escape sequence character. It then assigns each memory location's 
value to the `reverseline[]` array, effectively reversing the string. 

An "if" statement is incorporated within the "for" loop to prevent '\n' and '\0' 
from being copied to the beginning of the `reverseline[]` array. Copying '\0' to 
the beginning would cause `printf()` to halt reading the string prematurely, 
resulting in no output of string characters. 

Since only characters are copied to the new memory location, the `reverseline()` 
function also appends a '\0' null terminator, and '\n' newline escape sequence at 
the end of the reversed string to adhere to `printf()` function string conversion 
specifications. 

Note: There was an issue with the last character of the `currentline[]` array 
not being assigned to the first memory location of `reverseline[]`. This was 
caused by a while loop that checked for "EOF" received by the terminal while 
using `getchar()`. Removing this condition resolved the issue, ensuring proper 
assignment of characters to the `currentline[]` array.


*******************************************************************************/
#include <stdio.h>
#define MAXLINE 300

char currentline[MAXLINE];
char reverseline[MAXLINE];

void get_line(char s[]);
int string_size (char s[]);
void line_reverser(char in[], char out[]);

int main()
{
    while(1){
     get_line(currentline);
     line_reverser(currentline, reverseline);
     printf("\nReversed Line: %s\n", reverseline);
    } 

    
}

void get_line(char s[]){
    int i;
    
    for(i = 0; (s[i] = getchar()) != '\n'; ++i)
        putchar(s[i]) ;
   
    s[i+1] = '\0';
    
}

int string_size(char s[]){
    int size;
    for(size = 0; s[size] != '\0'; ++size)
        ;
    return size;
    
}

void line_reverser(char in[], char out[]){
    int position = 0;
    
    int size = string_size(in);
    for(int i = size; i >= 0; i--){
        if(in[i] == '\0' || in[i] == '\n' )
            ;
        else{
            out[position] = in[i];
            ++position;
        }
    }
    out[position + 1] = '\n';
    out[position + 2] = '\0';
  
}
