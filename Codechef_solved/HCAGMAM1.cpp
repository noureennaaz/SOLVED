#include <iostream>
using namespace std;

int main() {
 
 int t;
 cin>>t;
 
 while (t--){
     
     int wage , bonus , streak, streak_max , finalwage ;
     char workDay[30] ;
     
     streak=0;
     streak_max=0;
     finalwage=0;
     
     cin>>wage>>bonus;
     
     
     
     for(int i=0; i< 30 ; i++)
     {
         cin>>workDay[i];
         
         if(workDay[i]== '1'){
             
            
             finalwage  += wage ;
             streak++;
             
             if(streak_max<streak){
                 
                 streak_max=streak;
             }
         }
         
            else
                streak=0;
        
     }
     
     
     cout<<finalwage + bonus*streak_max <<endl;
    
 }
     
     
     
 return 0;
}
