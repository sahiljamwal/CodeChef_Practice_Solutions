//https://www.codechef.com/problems/PRB01

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

for(int i=0;i<t;i++)
{
   int no;
   cin>>no;

   int flag=-1;
   for(int i=2;i<no;i++){

    if(no%i==0)
    {
        flag=0;
        break;
        }
        
    }

    if(flag==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;

}

return 0;
}
