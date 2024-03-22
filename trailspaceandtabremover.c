/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAXLINE 300

char currentline[300];
char newline[MAXLINE];

void get_line(char s[]);
int string_size (char s[]);
void bsremover(char in[], char out[]);

int main()
{
    get_line(currentline);
    printf("\n%s", currentline);
    printf("\nSize:%d", string_size(currentline));
    bsremover(currentline, newline);
    printf("\nAfter BS Remover: %s", newline);
    printf("\nSize: %d", string_size(newline));
    
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

void bsremover(char in[], char out[]){
    int length = 0;
    int state = 1;
    
    length = string_size(in);
    for(int i = length; i >= 0 && state; --i){
        if(in[i] == ' ' || in[i] == '\t')
            ;
        else{
            state = 0;
            out[i] = in[i];
        }
    }
    out[length + 1] = '\0';

}