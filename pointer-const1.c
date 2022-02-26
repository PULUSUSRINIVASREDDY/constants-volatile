#include <stdio.h>
int main()
{

        //Definition of the variable
        int a = 10;

        //Definition of pointer to constant
         const int* ptr = &a; //Now, ptr is pointing to the value of the variable a

         *ptr = 30; //Error: Since the value is constant

          return 0;
 }
