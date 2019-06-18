//https://www.codechef.com/problems/REMISS

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int a,b;
        cin>>a>>b;
        
        int max,min;
        
        if(a>b)
            min=a;
        else
            min=b;
        
        max=a+b;
        
        cout<<min<<" "<<max<<endl;
        
        
        
    }


	return 0;
}
