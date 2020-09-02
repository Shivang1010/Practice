//approach one failed some testcases in hackerrank

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.
int p(long long int n){
    long long int i,j,sum,isPrime;
    sum=0;
   /* Find all Prime numbers between 1 to end */
    for(i=2; i<=n; i++)
    {        /* Assume that the current number is Prime */
        isPrime = 1; 
        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {    /*if i is divisible by any number other than 1 and self then it is not prime number */
            if(i%j==0)
            {   isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            sum=sum+i;
        }
    
    }
    return sum;
    }

int main()
{
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n,k; 
        scanf("%lld",&n);
        k=p(n);
    printf("%lld \n",k);

    }
    return 0;
}



// approach two in python



