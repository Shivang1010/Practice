//Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
//By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include<stdio.h>
int main(){
    int testcase;
    scanf("%d",&testcase);
    while(testcase>0){
    long long int r,k,i=1;
    long long int j=2;
    long long int sum=0;
    long long int b;
    scanf("%lld",&b);
   // printf("%lld %lld ",i,j);
    for(k=0;k>=0;k++)
    {
        sum=i+j;
        if(sum>b)
        break;
        if(sum%2==0){
            r=r+sum;
        }
       // printf("%lld ",sum);
        i=j;
        j=sum;
        
        
    }
    r=r+2;
    printf("%lld \n",r);
    r=0;
    testcase--;
    }
    return 0;
}
