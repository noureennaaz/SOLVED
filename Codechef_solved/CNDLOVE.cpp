#include<iostream>
using namespace std;

int main(){

    int t, n,a ,i;
    cin>>t;

    while(t--){

        cin>>n;

        int a[n];
        int sum =0;

        for(int i=0;i<n ;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        if(sum%2 == 0)
            cout<<"NO"<<endl;
        
            else 
            cout<<"YES"<<endl;

    
    }
}