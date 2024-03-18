/******************************************************************************

Word Line Separator

This straightforward program prints one word per line. It employs a while loop 
to detect the EOF (end-of-file) condition for program termination. Upon the 
termination of a word, indicated by escape sequences ('\n', ' ', '\t'), the 
state variable switches to OFF. The if statement checks for the presence of an 
escape sequence, which indicates the termination of a word.  The else-if 
condition triggers when a valid character is received and the state variable is 
in the OFF condition, signaling the start of a new word. It sets the state to ON
and inserts the '\n' escape sequence using print. The second if statement 
verifies if the state is ON, indicating the detection of a new word. While this 
application is basic and does not encompass all scenarios, it adequately fulfills 
the exercise requirements. Its main objective is to demonstrate the usage of if,
else if, and else statements, along with introducing state tracking.

*******************************************************************************/
#include <stdio.h>

#define ON  0x01
#define OFF 0x00

int main() {
    
    int c = 0;
    int state = OFF; //Track state of word ON = WORD, OFF = NO WORD
    
    while ((c = getchar()) != EOF){ //Check for EOF condition
        if(c == '\n' || c == ' ' || c == '\t') //Word Termination
            state = OFF;
        else if (state == OFF){ //New word detected
            state = ON;
            printf("\n"); //Insert new line if new word detected
        }
        if (state == ON)
            putchar(c); //Output characters on new line
        
            
    }
            
   
        
}
