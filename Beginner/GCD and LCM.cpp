//https://www.codechef.com/problems/FLOW016

#include <iostream>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 


int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        long int a,b;
        cin>>a>>b;
        
        long int gc=gcd(a,b);
        
       
        
        long int lcm=(a*b)/gc;
        cout<<gc<<" ";
        cout<<lcm<<endl;
        
        
        
    }

	return 0;
}
