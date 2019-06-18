//https://www.codechef.com/problems/INTEST

#include <iostream>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;
    
    int count=0;
    for(int i=0;i<n;i++){
        
        int no;
        cin>>no;
        if(no%k==0)
            count++;
            
        
        
    }

    cout<<count;

	return 0;
}
