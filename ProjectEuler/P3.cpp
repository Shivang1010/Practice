//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?
#include<stdio.h>
#include <limits.h>
int main(){
    long long int  Number=600851475143, i = 1, j, Count; 
//  	printf("\n Please Enter number to Find Factors  :  ");
//  	scanf("%lld", &Number);
 
 	while (i <= Number)
   	{
   		Count = 0;
    	if(Number % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				Count++;
				}
				j++;
			}
			if(Count == 2)
			{
				printf("\n %lld is a Prime Factor ", i);
			} 
      	}
    	i++;
   	}
    
    return 0;
}




