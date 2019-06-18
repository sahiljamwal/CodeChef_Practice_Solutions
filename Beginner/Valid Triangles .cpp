//https://www.codechef.com/problems/FLOW013

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a+b+c==180)
            cout<<"YES"<<" ";
        else
            cout<<"NO"<<" ";
        
        
    }



	return 0;
}
