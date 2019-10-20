#include<stdio.h>
int main()
{
    long int i,sum=0,sumt,max,min;
    int arr[5];
    for(i=0;i<5;i++){
        scanf("%d ",&arr[i]);
        sum = sum + arr[i];
    }
    sumt = sum;    
    
    min = sumt - arr[1];
    for(i=0;i<5;i++)
    {
        sumt = sumt - arr[i];
        if(min >= sumt)
        min = sumt;
        sumt = sum;
    }
    printf("%ld ",min);
    max = sumt - arr[1];

    for(i=0;i<5;i++)
    {
        sumt = sumt - arr[i];
        if(max <= sumt)
        max = sumt;
        sumt = sum;
    }
    printf("%ld",max);
    
    return 0;
}

