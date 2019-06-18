//https://www.codechef.com/problems/PRIME1


#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        long int m,n;
        cin>>m>>n;
        
        int flag=-1;
        for(int j=m;j<=n;j++)
        {
            int flag=-1;
            if(j==1){
                flag=1;
            }
            
            for(int k=2;k<=sqrt(j);k++)
            {
                if(j%k==0){
                    flag=1;
                    break;
                    
                }
                
                
            }
            if(flag==-1)
                cout<<j<<endl;
        }
        cout<<endl;
        
        
        
        
    }


	return 0;
}
