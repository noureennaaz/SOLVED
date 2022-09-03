#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,left,i;

	    cin>>n>>k;

	    int add[n];
	    
	    for(int i=0;i<n; i++){
	        cin>>add[i];
	    }
	   
	  
	    for(i=0,left=0 ;i<n ;i++)
	   {    
	        left=left+add[i]-k;
	        
	        if(left<0)
	            break;
              
	    }
	    
	    if(i==n)
	    cout<<"YES"<<endl;
	    else
        cout<<"NO "<<i+1<<endl;
	}
	return 0;
}