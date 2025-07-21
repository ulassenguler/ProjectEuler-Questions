/*
“What is the largest prime factor of the number 600851475143?”

1) Start
) Initialise n and i
) Divde the number to smallest prime factor which is 2.
) Control the division. If you can, keep divide it, otherwise go to 4
) To divide it move on to the next prime factor number
) The last remaining number becomes the prime factor.
) Exit
*/

#include <stdio.h>

int main(){

long long n = 600851475143LL;
int i=2;

while (i * i <= n)
{
    if(n % i == 0){
        n = n / i;
    }
    else{
    	i++;
	}
}

printf("Largest prime factor: %lld\n", n);


}
