//https://www.codechef.com/problems/SMPAIR

#include <iostream>
#include<algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n;
        
        int a[n];
        
        for(int j=0;j<n;j++){
            
            cin>>a[j];
        }
        
        sort(a,a+n);
       
       cout<<a[0]+a[1]<<endl;

    }
	return 0;
}