//https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

int main() {


    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int no;
        cin>>no;
        int num1=no;
        
        int count=0;
        while(num1>0){
            
            num1=num1/10;
            count++;
        }
        int sum=0;
        int q=no/10;
        int r=no%10;
        
        sum+=r;
        
        
        for(int i=0;i<count-1;i++){
            
            r=q%10;
            q=q/10;
            
            sum+=r;
            
            
            
            
            
            
        }
        
        cout<<sum<<endl;
        
    }
	return 0;
}
