//https://www.codechef.com/problems/TWOSTR

#include <iostream>
#include<string>
using namespace std;
int main() {

        int t;
        cin>>t;

        for(int i=0;i<t;i++){

            string x,y;
            cin>>x>>y;

            int s1=x.length();
            
            int flag=-1;
            for(int j=0;j<s1;j++){
                if(x[j]=='?'||y[j]=='?'||x[j]==y[j]){
                    continue;
                }
                else{
                    flag=0;
                }
            }
            
            if(flag==-1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }


return 0;

}
