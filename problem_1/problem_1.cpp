//Wirte your code logic here!

void find_min_max(int arr[])
{
    int min_sum=0, max_sum=0, min=0, max=0;
    for(int i =0 ;i <4; i++)
    {
        if(arr[i]<arr[i+1])
        min = arr[i];
        if(arr[i]>arr[i+1])
        max = arr[i];
    }
    for(int i=0; i<4;i++)
    {
        if(arr[i] != max)
        max_sum += max_sum;
        else if(arr[i] != min)
        min_sum += min_sum;
    }
    cout<<min_sum<<" "<<max_sum;
}
