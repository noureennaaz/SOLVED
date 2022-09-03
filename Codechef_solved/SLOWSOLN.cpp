#include<iostream>
using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int Tmax, Nmax, Nsum;
        long long square=0 ;

        cin>> Tmax >> Nmax >> Nsum ;

        while(Nsum*Nsum>= Nmax && Nsum > 0 && Tmax-- )
        {
            //cout<<"Nsum="<<Nsum<<endl;
            square += Nmax*Nmax;
            Nsum-= Nmax ;
            
            if(Nsum<Nmax)
            {
                Nmax=Nsum;
            }
            

        }
        cout<<square<<endl;
    }


}