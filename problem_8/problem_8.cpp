int breakingRecords(int n, int scores[])
{
    int max, min, max_count=0, min_count=0, max_now;
    min = max = max_now = scores[0];
    for(int i=1; i<n; i++)
    {
        if(scores[i] < min)
        {
            min_count++;
            min = scores[i];
        }
        else if(scores[i] > max_now)
        {
            max_count++;
            max_now = scores[i];
        }
    }
    cout<<max_count<<" "<<min_count;
    return 0;
}
