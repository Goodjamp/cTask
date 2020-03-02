/* This file is created for studying C programing language and other technologies that use for create, compiling and use C code.
   Don't change signature and name of the function.
   For compiling code please use comand line (for example cygwin) and the Make program.
*/

#include "stdio.h"
#include "stdint.h"



/*                          Task 1
Create function for converting number to string. Don't use standard C library
Please, take into account, that function must process full range INT value
*/

uint8_t *task1_intToStr(int32_t number) 
{

}

void main(char **inArg, int numArg)
{
    int32_t task1Num1 = 23;
	int32_t task1Num2 = 1000001;
	
	printf("**************TASK 1****************\n");
	
    printf("num1 = %s\n", task1_intToStr(task1Num1));
	printf("num2 = %s\n", task1_intToStr(task1Num2));

}