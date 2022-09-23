/*
  Edward Alexander Munoz
  CSE 1320-006
  9/18/22
*/
#define BITS 8
#include <stdio.h>

int main(void)
{
  char operator[3];
  int numberOne;
  int numberTwo;
  char operator;

  printf("Bitwise Calculator \n");
  printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result. The format is \n" );
  printf("FirstNumber Bitise Operator SecondNumber \n");

  printf("For example, enter the expression \n");

  printf("2 & 3 \n");

  printf("This calculator can be used with &, |, ^, << and >> \n");
  printf("Please note that the spaces between numbers and operator is essential \n and the two entered values must be between 0 and 225 \n");
  
  printf("Enter expression: ");

  while(numberOne > 0 && numberOne < 255 && numberTwo > 0 && numberTwo < 255)
  {
   scanf("%d %c %d", &numberOne, &operator, &numberTwo);
  }
  printf("\n");

  printf("In base 10... \n");

  //ConvertDecmial Function for numberOne;
  //ConvertDecimal Function for numberTwo;
}


// void ConvertDecimalToBinary(int, char[BITS])
// {
//   int bitList[BITS];
//   int number = 0, BitMask = 0;

//   if(numberOne & BitMask)
//   {

//   }


//}
