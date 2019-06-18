//https://www.codechef.com/problems/POTATOES

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int x,y;
        cin>>x>>y;
        
        int sum=0;
        sum=x+y;
        
        int prime=0;
        for(int z=1;z<1000;z++)
        {
            
            int no=sum+z;
            int flag=1;
            for(int j=2;j<no-1;j++)
            {
                
                if(no%j==0)
                {
                    flag=-1;
                    break;
                }
                    
            }
            if(flag==1){
                prime=no;
                break;
            }
        }
        cout<<(prime-sum)<<endl;
            
            
            
            
            
        
        
        
        
    }



	return 0;
}
