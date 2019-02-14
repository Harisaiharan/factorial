#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int factorial(n)
{
    int f=1;
    if(n>0)
    {
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    }
    else if(n==0)
    {
       f=1;
    } 
    return(f);
}

int main()
{
    int n,f;
    scanf("%d",&n);
    f=factorial(n);
	printf("%d\n%d",n,f);
    
   
   
}

