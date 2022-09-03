#include<stdio.h>
int main(){
    int t;

    scanf("%d", &t);

    while(t--){
        int a, count ;
        count =0;
        scanf("%d",&a);
        while(a){
            if(a & 1)
                count++;
            a=a>>1;

        }
        
        printf("%d\n",count-1);
    }
}