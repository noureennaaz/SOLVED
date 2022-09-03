#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ,b;

        cin>>n>>b;

        int a[n][2],price[n];

        int max=1, ar;

        

        for(int row =0 ; row<n ; row++){
            ar=1;

            for(int col=0; col<2; col++){

                cin>>a[row][col];
                ar=ar*a[row][col];
            }

            cin>>price[row];

            if(price[row]<=b && max<ar)
            {
                max=ar;
            }
            
        }

        if(max==1)
        cout<<"no tablet"<<endl;
        else 
        cout<<max<<endl;

    }
    return 0;
}