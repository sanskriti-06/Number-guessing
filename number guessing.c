#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	int guess,att=0;
	srand(time(0));
	int num=rand() % 100+1;
	do
	{
	printf("guess the no. between 1 1o 100:\t");
	scanf("%d",&guess);
	att+=1;
	if(guess>num)
		printf("your guess is quite high\n");
	else if(guess<num)
		printf("your guess is quite low\n");
	else
		printf("congrats! you got it in %d attemts\n",att);
}
while(guess!=num);
}