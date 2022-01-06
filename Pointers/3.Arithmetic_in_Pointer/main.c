#include<stdio.h>
int main()
{
    int a=10,*p,*r;
    p=&a;
    r=p+1;
    printf("\nSize of Integer A : %d",sizeof(a));
    printf("\nValue in P : %d",p);
    printf("\nValue in r : %d",r);


}
