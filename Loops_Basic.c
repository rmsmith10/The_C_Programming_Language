#include <stdio.h>

int main()
{
    int number_one = 0;
    int number_two = 0;
    int display_number = 0;
	do{
	    printf("Enter 1st Number: \n");
	    scanf("%d", &number_one);
	    if(!number_one)
	        continue;
	    printf("Enter 2nd Number: \n");
	    scanf("%d", &number_two);
	    if(number_one == 99 && number_two == 0){
            printf("Sum: %d\nFinish.", number_one + number_two);
            break;
	    }
	    else{
	        ++display_number;
	        printf("Sum: %d\n", number_one + number_two);
	    }
	}while(number_one != 0);
	        
	
	return 0;
}