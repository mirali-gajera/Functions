#include <stdio.h>
void checkprime(int n)
{
	//initially, a is set or true or 1
	int a=1,i;
        //loop to iterate through 2 to n/2
	for (i=2;i<=n/2;i++){
		//if n is completely divisible by i
		//set a to false or 0
		if(n%i==0){
			a=0;
			break;
		}
	}
	if (a){
		printf("The number %d is prime number\n",n);
	}
	else{
		printf("The number %d is not a prime number\n",n);
	}
	return;
}
int main()
{
	int x;
	printf("Enter any number:\n");
	scanf("%d",&x);
	checkprime(x);
	return 0;
}
