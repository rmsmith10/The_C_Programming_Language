/******************************************************************************

Celsius to Fahrenheit Converter
"Explore a foundational C project showcasing the effective utilization of 
symbolic constants to enhance code clarity, printf conversion specifiers for 
precise output formatting, and proficient handling of float arithmetic operations. 
The primary takeaway from this endeavor lies in exercising caution with integer 
and float arithmetic operations. Introducing decimals aids in pinpointing 
segments of the code where float conversions take place."

*******************************************************************************/
#include <stdio.h>

#define UPPER 20 //Symbolic Constants Line 13 - 15
#define LOWER 0
#define STEP 2
int main() {
    float cels; //Declaration Type (float) and name of variable(s)
    
    cels = 0.0; //Assignment operation
    
    printf("CELSIUS\tFAHRENHEIT\n"); //PrintF Function with string constant arguments and escape sequences 
    for (cels = LOWER; cels <= UPPER; cels += STEP) //For(assignment, condition, increment or decrement)
        printf(" %3.0f \t  %3.1f\n", cels, (9.0*cels)/5.0 + 32.0);
        
}
