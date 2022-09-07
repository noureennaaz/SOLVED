#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	
	while(t--){
	    
	    int k, n, index=0 ;
	    
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i = 0 ; i<n ; i++)
	    {
	        cin>>a[i];
	    }
	    
	    cin>>k;
	    
	    for(int i=0 ; i<n ; i++)
	    {
	        if(a[i]<a[k-1]){
	            index++;
	        }
	            
	    }
	   
	        
	   cout<<index+1<<endl;
	    
	}
	return 0;
}
