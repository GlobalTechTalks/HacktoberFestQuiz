//Wirte your code logic here
int birthdayCakeCandles(vector<int> ar) {
sort(ar.begin(),ar.end());
int count=0;
int s=ar.size();
for(int i=s;i>0;i--)
{
    if(ar[s-1]==ar[i-1])
    count++;
}
return count;
}
