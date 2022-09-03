#include <iostream>
using namespace std;

int main() {
	
    int t ;
    cin>>t;
    while(t--){
        
        
        long long n,n1, ans;
        cin>>n;
        
        if(n%2==0){
            
            n/=2;
            cout<<n*n*2<<endl;
            
            
        }
        else{
            n1= (n+1)/2;
            n/=2;
            
            cout<<n*n1*2<<endl;
        }
        
        
    }
	return 0;
}