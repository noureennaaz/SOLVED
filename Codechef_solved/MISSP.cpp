#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,a;
       int op=0;
       cin>>n;
       
       while(n--){
          cin>>a;
          op^=a;
        }
        
    cout<<op<<endl;
	}
	
	return 0;
}