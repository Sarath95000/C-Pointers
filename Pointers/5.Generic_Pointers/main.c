//Generic Pointers (or) Void Pointers
#include<stdio.h>
int main()
{
    int arr[]={50,40,30,20,10};
    void *p;
    p=&arr;
    printf("Generic Function : %d",*(int *)p);
    return 0;
}
