#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int t; 
    scanf("%ld",&t);
    for(int a0 = 0; a0 < t; a0++){
        long int n; 
        scanf("%ld",&n);
        long int i,sumsquare,squaresum;
        long int sum1=0;
        long int sum2=0;
        long int diff;
        for(i=1;i<=n;i++){
            sum1=sum1+i;
            }
            sumsquare=sum1*sum1;
        
        for(i=1;i<=n;i++){
            sum2=i*i+sum2;
        }
        squaresum=sum2;
        diff=sumsquare-squaresum;
        printf("%ld\n",diff);

    }
    return 0;
}


/*
Input (stdin)
1
100
Your Output (stdout)
25164150
*/
