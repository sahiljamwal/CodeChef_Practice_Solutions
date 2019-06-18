//https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int even=0,odd=0;
    
    for(int i=0;i<n;i++){
        
        int a[n];
        for(int j=0;j<n;j++){
            
            cin>>a[j];
        }
        
        
        
        for(int k=0;k<n;k++){
            
            if(a[k]%2==0)
                even++;
            else 
                odd++;
        }
        
       
        
        
    }
     if(even>odd)
            cout<<"READY FOR BATTLE"<<endl;
        else
            cout<<"NOT READY"<<endl;

	return 0;
}
