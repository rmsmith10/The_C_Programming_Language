#include <stdio.h>
/* Line generator limited to 20 lines */
int main()
{
    int line_number = 0;
    
    scanf("%d", &line_number);
    do{
	for(int i = 0; i < line_number; ++i){
        printf("\n");
        if(line_number == 0)
            printf("*#");
        else if(line_number > 20)
            line_number = 20;
        else{
	    for(int j = 0; j <= i; ++j)
	        printf("*#");
        }
	}
	return 0;
    }while(line_number <= 20);
}