//https://www.codechef.com/problems/CHOPRT

#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int a,b;
        cin>>a>>b;
        //cout<<a<<" "<<b<<endl;
        if(a<b)
            cout<<"<"<<endl;
        else if(a>b)
            cout<<">"<<endl;
        else if(a==b)
            cout<<"="<<endl;

        
    }
    
    
    return 0;
}