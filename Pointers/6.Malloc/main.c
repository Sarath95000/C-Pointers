#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    ptr=malloc(n*sizeof(int));
     if(ptr!=NULL)
    {
        printf("\n--Memory Allocated Successfully--");
    }
    for(int i=0; i<n; i++)
    {
        printf("\nEnter The Element : ");
        scanf("%d",ptr+i);
    }
    for(int i=0; i<n; i++)
    {
        printf("\n %d",*(ptr++));
    }



    return 0;
}
//limit
//malloc
//null
//print *(ptr+i)

