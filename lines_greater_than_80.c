/******************************************************************************

Print Lines greater than 80 characters
This program represents a modification of the K&R C application for printing the
longest line. The enhanced version selectively prints lines exceeding 80 
characters in length. Line length determination is facilitated by the getline() 
function, which both returns the length and writes the line content. This project 
exemplifies the capability of functions to return values and to modify array 
contents by passing the array name as an argument. In C, when an array is passed 
as a function argument, the location or address of the array's beginning is 
conveyed. Consequently, the function can alter array values using subscripting.

*******************************************************************************/
#include <stdio.h>
//Symbolic Constants
#define MAXLINE 1000 //Limits line size *memory
#define MINLINE 80 //MIN line size to be outputted 

//Function Prototypes
int get_line(char line[], int maxline); //Returns line size
void copy(char to[], char from[]); //Return nothing, performs copy action

int main(){
//***Variable declarations***
    int len; //Current line length
    char line[MAXLINE]; //Current input string
    char longest[MAXLINE]; //Longest line stored where
    

    
    while((len = get_line(line, MAXLINE)) > 0)
        if (len >= MINLINE) { //Checks if line is greater than 80 characters long
          printf("%s\n", line); //Print line that is greater than 80 characters
        }
    return 0;
        
}
//Function definitions
int get_line(char s[], int lim){
    int c, i;
    
    /*If statement ensures line is less than 1000 characters (lim), EOF not reached, and 
    newline escape sequence not reached*/
    for (i = 0; i < lim - 1 && (c = getchar()) !=EOF && c != '\n'; ++i) 
        s[i] = c;
    if(c == '\n'){ //Passes newline escape sequence to array
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; /*Passes null character \0 to array. Printf %s string conversion
    specification expects this format H,E,L,L,O,\n,\0*/
    return i;
    }
    
void copy(char to[], char from[]){ //Not used for this program
    int i;
    
    i = 0;
    while( (to[i] = from[i]) != '\0')
        ++i;
}

    
