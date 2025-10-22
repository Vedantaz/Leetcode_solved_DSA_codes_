int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int am[n];
	    for(int i=0;i<n;i++){
	        cin>>am[i];
	    }
	    for(int i=0;i<n;i++){
	        if(am[i]<=k){
	            cout<<1;
	            k-=am[i];
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	
	return 0;