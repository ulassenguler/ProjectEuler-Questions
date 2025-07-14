/* Q1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000. 
*/
//START
//initialise sum
//initialise i and loop from 0 to 1000 (not including)
//if i is divisible by 3 or 5, then add i to sum
//print the value of sum
//FINISH

#include <stdio.h>

int main(){
	
	
	int sum = 0; 

	
	for(int i=0; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	
	
	printf("%d", sum);
	return 0;
}
