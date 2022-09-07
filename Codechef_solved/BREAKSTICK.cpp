#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	
	while(t--){
	    int n  , x;
	    bool y = 0;
	    cin>>n>>x;
	    
	    if(n%2==0 || x%2!=0)
	        y= 1;
	  
	         
	   if(y)
	       cout<<"YES"<<endl;
	   else
	      cout<<"NO"<<endl;
	        
	    
	}
	return 0;
}
