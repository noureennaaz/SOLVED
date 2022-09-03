#include <iostream>
#include<string>
using namespace std;

int main() {
	
	int t;
	cin>>t ;
	while(t--){
	    string s;
	    
	    cin>>s;
	    int count=0 ;
	    
	    for(int i=0 ; i< s.size()  ; i++){
	        
	        if(s[i] != '0'){
	            
	            for (int j=i+1  ; j < s.size() ;j++)
	            {
	                
	                if( s[i]==s[j]){
	                    s[j]='0';
	                    break;
	                }
	            }
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}