#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	
	while(t--){
	    
	    short  a ,b ,c,d,e ; 
	    cin>>a>>b>>c>>d>>e;
	    
	    
	    if(  ( a<=e && b+c<=d) || (b<=e && a+c<=d) || (c<=e && a+b<=d))
	      cout<<"YES"<<endl;
	     
	    else
	      cout<<"NO"<<endl;
	    
	}
	return 0;
}
