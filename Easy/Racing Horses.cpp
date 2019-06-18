//https://www.codechef.com/problems/HORSES

#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n;
        
        long int s[n];
        
        for(int j=0;j<n;j++){
            
            cin>>s[j];
            
        }
        
        sort(s,s+n);
        
        long int min=1000000000;
       for(int k=0;k<n;k++){
           
           long int temp=(s[k+1]-s[k]);
           if(temp<min)
                min=temp;
           
           
       }
        cout<<min<<endl;
        
        
    }

	return 0;
}
