#include <stdio.h>   
#include <stdlib.h>
    
int x,y, max;
     
int maxsimum( )
{
	if (x >= y)
    	max = x;

	else
	    max = y;
    return max;
}

int main (){
	
x = printf("Enter the First Number: "); scanf("%d", &x);
y = printf("Enter the Second Number:  "); scanf("%d", &y);

max = maxsimum(x,y);
printf(" max of %d and %d is : %d ",x,y, max);	
}
     


