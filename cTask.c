/* This file is created for studying C programing language and other technologies that use for create, compiling and use C code.
   Don't change signature and name of the function.
   For compiling code please use comand line (for example cygwin) and the Make program.
*/

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"


/*                          Task 1
Git branch: Task1_intToStr
Create function for converting number to string. Don't use standard C library
Please, take into account, that function must process full range INT value
*/

uint8_t *task1_intToStr(int32_t number)
{
    if(number != 0)
    {
        int32_t TempNumber = number;
        uint8_t Flag_Minus = 0;
        uint8_t Size_Buffer = 0;
        do
        {
            TempNumber /= 10;
            Size_Buffer++;
        }while (TempNumber != 0);

        if(number < 0)
        {
            Size_Buffer += 2;
            Flag_Minus = 1;
            number = ~number + 1;
        }else
        {
            Size_Buffer += 1;
        }

        uint8_t* Buffer = (uint8_t*)malloc(sizeof(uint8_t) * Size_Buffer);

        if(Flag_Minus == 1)
        {
            Buffer[0] = '-';
        }

        for (int8_t i = Size_Buffer - 2; i >= 0 + Flag_Minus; i--)
        {
            Buffer[i] = number % 10 + '0';
            number /= 10;
        }
        Buffer[Size_Buffer - 1] = '\0';
        return Buffer;
    }else
    {
        uint8_t* Buffer = (uint8_t*)malloc(sizeof(uint8_t) * 2);
        Buffer[0] = '0';
        Buffer[1] = '\0';
        return Buffer;
    }
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
