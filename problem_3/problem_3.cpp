int birthdayCakeCandles(vector<int> ar) {
    int n = sizeof(ar)/sizeof(ar[0]); 
    sort(ar.begin(), ar.end(), greater<int> ());
    
    int i = 0;
    
    while(ar[i] == ar[i+1]) {
        i++;
    }

    return i+1;
}
