/******************************************************************************

Function Introduction
This function serves as a foundational tool for computing the squares and cubes 
of integers ranging from 0 to 9, leveraging arguments passed to a function named 
power() that is invoked within the main() function. Both the function prototype 
and definition for power are provided, with an initial printf statement 
integrating a string constant and escape sequences to enhance output clarity. 
Additionally, a global integer variable is declared to track the current base 
term for power() calculations, while symbolic constants are employed to enhance 
code clarity and remove "magic numbers" from function arguments and statements. 
It's important to note that in C, arguments are passed by value, meaning the 
value of variables in the calling function remains unchanged by the called 
function, although exceptions exist such as with arrays where modifications can 
occur. The function is designed to return the result, as indicated by the int 
return type in the power() function prototype, with the actual power calculations 
executed within the power() function definition before returning the solution. 
Lastly, it's worth noting that while C functions are not obligated to return a 
response, they are capable of performing actions.

*******************************************************************************/
#include <stdio.h>

#define SQUARE 2 
#define CUBE   3
#define LOWER  0 
#define UPPER 10

int power (int m, int n); //Function prototype and parameter type two integers

int main(){
    
    int i; //Variable declaration global
    
    printf("BASE   SQUARED    CUBED\n");
    
    for (i = LOWER; i < UPPER; ++i) //Calculate for powers 0 through 9
        printf("%3d\t%6d\t%6d\n", i, power(SQUARE,i), power(CUBE,i)); //Function called with arguments
    return 0;
} 

int power(int base, int n){ //Function definition
    
    int i, p; //Local Variable
    
    p = 1; //Variable Assignment
    
    for(i = 1; i <= n; ++i) //Perform calculations
        p = p * base;
    return p; //Returns solution
}
