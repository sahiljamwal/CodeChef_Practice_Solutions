//https://www.codechef.com/problems/HEADBOB

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n;
        
        char a[n];
        for(int k=0;k<n;k++){
        cin>>a[k];
        }
        
        int countN=0,countY=0,countI=0;
        
        for(int j=0;j<n;j++){
            
            if(a[j]=='N')
                countN++;
            if(a[j]=='Y')
                countY++;
            if(a[j]=='I')
                countI++;
        }
        
        if(countN==n)
            cout<<"NOT SURE"<<endl;
        if(countY>countI)
            cout<<"NOT INDIAN"<<endl;
        if(countY<countI)
            cout<<"INDIAN"<<endl;
        
        
        
    }




	return 0;
}
