//https://www.codechef.com/problems/FLOW017

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int a,b,c;
        cin>>a>>b>>c;
        
        if((a>b && a<c)||(a<b)&&(a>c) )
            cout<<a<<endl;
            
        if((b>c && b<a)||(b<c && b>a))
            cout<<b<<endl;
            
        if((c>a && c<b)|| (c<a && c>b))
            cout<<c<<endl;
        
        
    }

	return 0;
}