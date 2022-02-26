#include <stdio.h>

 int main()
 {
 //Definition of the variables
 int a = 10;
 int b = 20;

 //Definition of pointer to constant
 const int* ptr = &a; //Now, ptr is pointing to the value of the variable a

 ptr = &b; // Works: Since pointer is not constant

 return 0;
 }
