/* This file is created for studying C programing language and other technologies that use for create, compiling and use C code.
   Don't change signature and name of the function.
   For compiling code please use comand line (for example cygwin) and the Make program.
*/

#include "stdio.h"
#include "stdint.h"



/*                          Task 1
Git branch: Task1_intToStr
Create function for converting number to string. Don't use standard C library
Please, take into account, that function must process full range INT value
*/

uint8_t *task1_intToStr(int32_t number)
{
    static uint8_t buffer[12];
    uint8_t flag = 0;
    if(number != 0){
        if(number < 0){
            flag = 1;
            buffer[0] = '-';
            number =~number+1;
        }
        for (int8_t i = 9+flag; i>=0+flag; i--)
        {
            buffer[i] = number % 10 + '0';
            number /= 10;
        }
        for (int8_t i = 0+flag; i<=9+flag; i++)
        {
            if (buffer[0+flag] == 0 + '0')
            {
                for(int8_t q = 0+flag; q<=9+flag; q++)
                {
                   buffer[q] = buffer[q+1];
                }
                buffer[10+flag] = '\0';
            }
        }
        buffer[10+flag] = '\0';
    }else{
        buffer[0] = 0 +'0';
        buffer[1] = '\0';
    }
    return buffer;
}

void main(char **inArg, int numArg)
{

    int32_t task1Num1 = -23;
	int32_t task1Num2 = 1000001;
	int32_t task1Num3 = 0;

    printf("**************TASK 1****************\n");
    printf("num1 = %s\n", task1_intToStr(task1Num1));
    printf("num2 = %s\n", task1_intToStr(task1Num2));
    printf("num3 = %s\n", task1_intToStr(task1Num3));
    return 0;
}
