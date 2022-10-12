/*
  Edward Alexander Munoz
  CSE 1320-006
  9/18/22
*/

#define BITS 8
#include <stdio.h>
#include <stdlib.h>

void ConvertDecimalToBinary(int x, char a[]) //NEED TO OUTPUT REVERSE ARRAY
 {
   int Array[BITS + 1] = {};
   int y = 0, BitMask = 1;
   int reversedIndex = 0;
   int arrayIndex;
   int temp;

    for(int i = 0; i < BITS; i++)
      {
        Array[i] = x;
        x = x >> 1;
           if(Array[i] & BitMask)
            {
              Array[i] = 1;
            }
             else
              {
               Array[i] = 0;
              }

      }

      arrIndex = BITS - 1; // reverses the original array so the number can be read in binary
        while (reversedIndex < arrayIndex)
        {
          temp = Array[reversedIndex];
          Array[reversedIndex] = Array[arrayIndex];
          Array[arrayIndex] = temp;
          reversedIndex++;
          arrayIndex--;
        }

         for (int j = 0; j < BITS; j++) //actually prints the reversed array
         {
            printf("%d", Array[j]);
         }
  }




 int main(void)
 {
     char operator[3] = {};
     char new[BITS + 1] = {};
     int numberOne;
     int numberTwo;


     printf("\n\n");
     printf("Bitwise Calculator \n\n");
     printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result. \nThe format is \n\n" );
     printf("FirstNumber \t Bitwise Operator \t SecondNumber \n\n");

     printf("For example, enter the expression \n\n");

     printf("2 & 3 \n\n");

     printf("This calculator can be used with &, |, ^, << and >> \n\n");
     printf("Please note that the spaces between numbers and operator is essential \nand the two entered values must be between 0 and 225 \n\n");
     printf("Enter expression: ");

     scanf("%d %c %d", &numberOne, operator, &numberTwo);

     while(numberOne > 255 || numberOne < 0 || numberTwo < 0 || numberTwo > 255)
     {
         printf("\n\n");
         printf("The entered expression contains out of range values.\nPlease reenter the expression using values between 0 and 255.\n");
         scanf("%d %c %d", &numberOne, operator, &numberTwo);
     }
       if (operator[0] == '&')
       {
         int andBit = numberOne & numberTwo;
         printf("\n");
         printf("In base 10... \n\n");
         printf("%d %s %d = %d \n\n", numberOne, operator, numberTwo, numberOne & numberTwo);

         printf("In 8-bit base 2... \n\n");
         ConvertDecimalToBinary(numberOne, new);
         printf("\n&\n");
         ConvertDecimalToBinary(numberTwo, new);
         printf("\n===========\n");
         ConvertDecimalToBinary(andBit, new);
       }
           else if(operator[0] == '|')
           {
             int orBit = numberOne | numberTwo;
             printf("In base 10... \n\n");
             printf("%d %s %1.0d = %d \n\n", numberOne, operator, numberTwo, numberOne | numberTwo);

             printf("In 8-bit base 2... \n");
             ConvertDecimalToBinary(numberOne, new);
             printf("\n|\n");
             ConvertDecimalToBinary(numberTwo, new);
             printf("\n===========\n");
             ConvertDecimalToBinary(orBit, new);
           }
             else if (operator[0] == '^')
             {
               int xorBit = numberOne ^ numberTwo;
               printf("In base 10... \n\n");
               printf("%d %s %d = %d \n\n", numberOne, operator, numberTwo, numberOne ^ numberTwo);

               printf("In 8-bit base 2... \n\n");
               ConvertDecimalToBinary(numberOne, new);
               printf("\n^\n");
               ConvertDecimalToBinary(numberTwo, new);
               printf("\n===========\n");
               ConvertDecimalToBinary(xorBit, new);
              }
                else if (operator[0] == '<') //doesnt work with double bits???
                {
                 int leftBit = numberOne << numberTwo;
                 printf("\n");
                 printf("In base 10... \n\n");
                 printf("%d %s %d = %d \n\n", numberOne, operator, numberTwo, numberOne << numberTwo);

                 printf("In 8-bit base 2... \n\n");
                 ConvertDecimalToBinary(numberOne, new);
                 printf("\n<<\n");
                 ConvertDecimalToBinary(numberTwo, new);
                 printf("\n===========\n");
                 ConvertDecimalToBinary(leftBit, new);
                }
                   else if(operator[0] == '>') // doesnt work with double bits???
                   {
                     int rightBit = numberOne >> numberTwo;
                     printf("\n");
                     printf("In base 10... \n\n");
                     printf("%d %s %d = %d \n\n", numberOne, operator, numberTwo, numberOne >> numberTwo);

                     printf("In 8-bit base 2... \n");
                     ConvertDecimalToBinary(numberOne, new);
                     printf("\n>>\n");
                     ConvertDecimalToBinary(numberTwo, new);
                     printf("\n===========\n");
                     ConvertDecimalToBinary(rightBit, new);
                    }
                      else
                       {
                        printf("Operator %s is not supported by this calculator. \n\n", operator);
                        exit(0);
                       }
 }
