#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    int res;
    if(num==1 || num==0)
        return 1;
    else
        res=num *fact(num-1);
    return res;
}

int main()
{
   int i,n;
   printf("enter the number: ");
   scanf("%d",&n);

   i=fact(n);
   printf("%d",i);


    return 0;
}
