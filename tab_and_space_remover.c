/******************************************************************************

Trailing Space and Tab Remover
Here's a revised version of your explanation:

This application serves to eliminate trailing spaces and tabs from inputted text
lines. Since these characters aren't visible on the terminal I'm using, I've 
devised a custom size function to count all characters until the null terminator
'\0' is encountered. While C provides a built-in function for this purpose, I 
opted for a custom solution to enhance the learning experience. In a production 
environment, however, I would typically utilize the native C size function.

The application employs three primary functions: `bsremover()`, `string_size()`,
and `get_line()`. User input is obtained via the `get_line()` function and stored 
in the designated character array. Subsequently, the `bsremover()` function 
requires knowledge of the array size, which is provided by the `string_size()` 
function.

Within `bsremover()`, an 'IF' statement is employed to iterate backwards from the 
last character of the input. Each occurrence of ' ', '\t', or the null terminator '
\0' results in a decrement of the length counter until a non-escape sequence is 
encountered. To prevent unnecessary decrements, the 'else if' statement alters 
the state to false ('0') when an non-escape sequence is encountered. Since the state 
condition influences the preceding 'for' loop, termination occurs when non-escape 
sequences are detected, effectively removing trailing spaces and tabs.

Essentially, this application relies on the '\0'-terminated strings paradigm, as 
specified by the printf string "%s" conversion. The `bsremover()` function 
effectively repositions the null terminator to the end of the line while 
disregarding trailing spaces and tabs."


*******************************************************************************/
#include <stdio.h>
#define MAXLINE 300

char currentline[300];
char newline[MAXLINE];

void get_line(char s[]);
int string_size (char s[]);
void bsremover(char in[]);

int main()
{
    get_line(currentline);
    printf("\nBefore BS Remover function: %s", currentline);
    printf("\nSize:%d", string_size(currentline));
    bsremover(currentline);
    printf("\nAfter Tab and Space Remover: %s", currentline);
    printf("\nSize: %d", string_size(currentline));
    
}

void get_line(char s[]){
    int i;
    for(i = 0; (s[i] = getchar()) != '\n'; ++i)
            ;
    s[i] = '\0';
    
}

int string_size(char s[]){
    int size;
    for(size = 0; s[size] != '\0'; ++size)
        ;
    return size;
    
}

void bsremover(char in[]){
    int length = 0;
    int state = 1;
    
    length = string_size(in);
    
    for(int i = length; i >= 0 && state == 1; --i){
        if((in[i] == ' ') || (in[i] =='\t') || (in[i] == '\0')){
            --length;
        }
        else if(state){
            state = 0;
        }
    }
    in[length+1] = '\0';

}
