#include <stdio.h>
int main()
{
    int n,input,k,i,j,count=0;
    int arr[999];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0)
       { printf("999");
        break;}
    }
    scanf("%d",&input);
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(arr[j]+arr[k]==input){
                count++;
            }
        }
    }
    if(count==0)
    printf("999");
    else
    printf("%d",count);
    return 0;
}
