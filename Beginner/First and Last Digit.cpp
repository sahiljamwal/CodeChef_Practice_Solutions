//https://www.codechef.com/problems/FLOW004


#include <iostream>
#include<math.h>
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
        
    
        int a=no/(pow(10,count-1));
        int b=no%10;
    
        cout<<a+b<<endl;


    }

	return 0;
}
