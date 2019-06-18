//https://www.codechef.com/problems/GDOG

#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n,k;
        cin>>n>>k;
        
        int coins=0;        
        for(int i=1;i<=k;i++){
        
            if((n%i)>coins)
                coins=n%i;
            
            
        }
        
        cout<<coins<<endl;

    }



    return 0;
}