/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Symbolic Constants
#define TABSPACE     5
#define COLUMN       6
#define MAXSTRING 1000
#define ROWSIZE TABSPACE * COLUMN

//Function Prototypes
int str_length(char s[]);

//Global Variables
char current_string[MAXSTRING];
char output_string[MAXSTRING];
void get_string(char s[]);
void detab(char s[]);

int main()
{
   printf("\t\tDETAB APP\n"); //Prints the header
   for(int i = 0; i <= COLUMN; ++i){
        for(int j = 0; j <= TABSPACE; ++j)
            printf("-");
    printf("|");
   }
    printf("\n");
    printf("%d", 13/5);
    get_string(current_string);
    
  
}

int str_length(char s[])
{
    int length;
    
    for( length= 0; s[length] != '\0'; ++length)
        ;
    return length;

}

void get_string(char s[])
{
    int c, i;
    
    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
    }
   
    s[i + 1] = '\0';
 
}

void detab(s[]){
    char c;
    int column_position = 0;
    int modulus = 0;
    int i;
    
    
    for(i = 0; s[i] != '\0'; ++i){
        ++column_position
        c = s[i];
    }   if(column_position/ROWSIZE)
            output_string[i] = '\n';
        else if()
    }
}
