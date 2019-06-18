//https://www.codechef.com/problems/CONFLIP

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int m=0;m<t;m++){
        
        int g;
        cin>>g;
        for(int j=0;j<g;j++){
            
            int i,n,q;
            cin>>i>>n>>q;
            
            if(n%2==0 || i==q)
                cout<<n/2<<endl;
                
            else
                cout<<(n/2)+1<<endl;
            
            
            
        }
        
        
        
    }


	return 0;
}
