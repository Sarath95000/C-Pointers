#include<stdio.h>
int main()
{

   int a=10,*p;
   p=&a;
   printf("\nvalue of A : %d",a);
   printf("\n");
   printf("\nAddress of A : %d",&a);
   printf("\nValue in P : %d",p);
   printf("\nValue in P : %d",&p);
    return 0;
}
/*
*two types of Variables
  ->data variable - stores values
  ->Pointer Varialbles - address of similar data type
Pointer size is based on the Processor

int *p; for declaring Pointer

assigning one address in another variable is called single pointer


*/
