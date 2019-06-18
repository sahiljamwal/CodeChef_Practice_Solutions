//https://www.codechef.com/problems/JOHNY

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n;
        
        
        long int a[n]={};
        
        for(int j=1;j<=n;j++){
            
            cin>>a[j];
            
        }
        
        int k;
        cin>>k;
        
        long int song=a[k];
        
        sort(a,a+(n+1));
        
       
        
        int index=1;
        for(int p=1;p<=n;p++){
            
            if(a[p]==song)
                index=p;        
            
        }
        
        cout<<index<<endl;
    }



	return 0;
}
