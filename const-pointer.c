#include <stdio.h>
 int main()
 {
 //Definition of the variable
 int a = 10;
 int b = 20;

 //Definition of pointer to constant
 const int* ptr = &a;//Now, ptr is pointing to the value of the variable a

 *ptr = 30; // Works,since the pointer pointing to the value is not constant

 ptr = &b; //Error:Now, ptr is pointing to the value of the variable b

 return 0;
 }
