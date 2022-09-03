#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
        int n , temp;
        cin>>n;
        
        int a[n];
	    
	    for(int i =0 ; i < n ; i++ ){
	        
	        cin>>a[i];
	    }
	    
	    for(int i=0 ; i < n -1 ; i++){
	        
	        if(i%2==1 && a[i]<a[i+1]){
	        
	           temp=a[i];
	           a[i]=a[i+1];
	           a[i+1]=temp;
	           
	      }
	      else if(i%2 ==0 && a[i]>a[i+1]) {
	          
	          temp=a[i];
	          a[i]=a[i+1];
	          a[i+1]=temp;
	          
	      }
	      
	    
	    }
	    
	    for(int i=0; i<n ; i++){
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}
