#include <stdio.h>   
#include <stdlib.h>
    

float score;
float r;

int calScore(float score)
{
	// this function converts scores to letters
	if (score>=90)
	printf("A");
	
	if (score>=80)
	printf("B");
	
	if (score>=70)
	printf("C");
	
	if (score>=60)
	printf("D");
	
	else 
	printf("F");
	
	return;
}

int main(){

printf("Please Enter Your Score: \n");
scanf("%f", &r);

printf("Your Score is: %c ", calScore(r));


}
