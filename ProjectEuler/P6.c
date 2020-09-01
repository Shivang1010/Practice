#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int i,sumsquare,squaresum;
        int sum1=0;
        int sum2=0;
        int diff;
        for(int i=1;i<=n;i++){
            sum1=sum1+i;
            }
            sumsquare=sum1*sum1;
        
        for(i=1;i<=n;i++){
            sum2=i*i+sum2;
        }
        squaresum=sum2;
        diff=sumsquare-squaresum;
        printf("%d\n",diff);

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
