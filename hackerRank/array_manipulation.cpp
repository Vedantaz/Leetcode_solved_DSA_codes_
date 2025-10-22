long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> res(n + 1, 0);
    for(auto &query:queries){
        
        int a = query[0];
        int b = query[1];
        int k = query[2];
        
        res[a-1] += k;
        if(b<n) res[b] -=k;
    }
    
    long maxval=0, currval=0;
    for(int i=0;i<n;i++){
        currval +=res[i];
        if(currval >maxval) maxval = currval;
        
    }
    return maxval;
}

inputs
5 3
1 2 100
2 5 100
3 4 100

outputs

200