#include<stdio.h>
int main()
{

    int a=10,*p;
    p=&a;
    printf("\nValue of a           :%d",a);
    printf("\nAddress of a         :%d",&a);
    printf("\nValue of P           :%d",p);
    printf("\nAddress of p         :%d",&p);
    printf("\n*p Dereferencing     :%d",*p);
    printf("\n-----------------------------------------------------");

    int **q;
    q=&p;
    printf("\nValue of p           :%d",p);
    printf("\nAddress of p         :%d",&p);
    printf("\nValue of q           :%d",q);
    printf("\nAddress of q         :%d",&q);
    printf("\n**q Dereferencing    :%d",**q);
    printf("\n-----------------------------------------------------");

    int ***r;

    r=&q;
    printf("\nValue of q           :%d",q);
    printf("\nAddress of q         :%d",&q);
    printf("\nValue of r           :%d",r);
    printf("\nAddress of r         :%d",&r);
    printf("\n***r Dereferencing    :%d",***r);
    printf("\n-----------------------------------------------------");

    return 0;
}
/*
    *       single pointer derefrenecing
    **      double pointer derefrenecing
    ***     triple Pointer and derefrenecing
*/
