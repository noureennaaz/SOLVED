#include <iostream>
using namespace std;

int main() {
	
	int t ;
	cin>>t ;
	while(t--){
	    int n , amount ;
	    
	    cin>>n >>amount ;
	    
	    int a[n];
	    
	    for(int i=0 ; i<n ; i++){
	        
	        cin>>a[i];
	        
	    }
	    
	    for(int i =0 ; i<n ; i++)
	    {
	        if(a[i]>amount)
	            cout<<0;
	        
	        else{
	            cout<<1;
	            amount-=a[i];
	        }
	          
	    }
	    cout<<endl;
	    
	}
	return 0;
}