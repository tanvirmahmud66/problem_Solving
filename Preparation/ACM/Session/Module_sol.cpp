    #include <bits/stdc++.h>
     
    using namespace std ; 
     
    long long int arr[ 100010 ] ; 
    long long int query[ 100010 ] ; 
    long long int res[ 100010 ] ; 
     
    void process(int n, int q) {
     
    	priority_queue<pair<long long,int> > pq ; 
     
    	for( int i = 0 ; i < n ; i ++ ) {
    		pair<long long,int> tmp ;
    		tmp.first = arr[ i ] ; 
    		tmp.second = i ; 
    		pq.push(tmp);
    	}
     
    	for(int i = 0 ; i < q ; i ++ ) {
    		long long int cur_num = query[ i ] ; 
     
    		while( true ) {
    			pair<long long int,int> cur_top = pq.top() ; 
    			if( cur_top.first == 0 ) break ; 
    			if( cur_top.first < cur_num ) break ; 
    			pq.pop() ; 
    			cur_top.first %= query[ i ] ; 
    			pq.push(cur_top);
    		}
    	}
     
    	while(!pq.empty()) {
    		pair<long long int,int> cur_top = pq.top() ; pq.pop() ; 
    		res[ cur_top.second ] = cur_top.first ; 
    	}	
    }
     
    void print_result(int n) {
    	for( int i = 0 ; i < n ; i ++ ) {
    		if( i == 0 ) printf("%lld",res[i]);
    		else printf(" %lld",res[i]);
    	}
    	printf("\n");
    }
     
    int main() {
     
    	int t ; 
     
    	scanf("%d",&t) ; 
     
    	for( int i = 0 ; i < t ; i ++ ) {
    		int n ; 
     
    		scanf("%d",&n);
     
    		for( int j = 0 ; j < n ; j ++ ) {
    			scanf("%lld",&arr[ j ]) ; 
    		}
     
    		int q ; 
     
    		scanf("%d",&q);
     
    		for( int j = 0 ; j < q ; j ++ ) {
    			scanf("%lld",&query[ j ] ) ; 
    		}
     
    		process(n,q) ; 
     
    		printf("Case %d:\n",i+1);
    		print_result(n);
    	}
    	return 0 ; 
    }