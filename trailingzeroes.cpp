//TRAILING ZEROES

#include <iostream>
using namespace std;

int factorial(int a){
	int temp;
	if(a<=1)
		return 1;
	else
		temp=a*factorial(a-1);
		return temp;
}


int trail(int f)
{
	int i,count=0;
	for(i=5;f/i>=1;i*=5){
		count+=f/i;
	}
	return count;
}

