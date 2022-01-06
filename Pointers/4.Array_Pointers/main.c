#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int *p;
    p=&arr;
    for(int i=0; i< sizeof(arr)/sizeof(int); i++)
    {
        printf("\nvalue of arr[%d] : %d",i,*p);
        *p++;
        printf("\n");
    }

    return 0;
}
/*
p++
++*p  dereferncing first it will add the dereferensed value
*++p   incrementing Address and dereferencing
*/
