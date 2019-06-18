//https://www.codechef.com/problems/PPSUM

#include <iostream>
using namespace std;

int sum(int n){
    int temp=0;
    for(int i=1;i<=n;i++){
        temp+=i;

    }
    return temp; 
}

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int d,n;
        cin>>d>>n;
        
        int Sum=0;
        for(int j=0;j<d;j++){
            if(j==0)
                Sum+=sum(n);
            else
                Sum=sum(Sum);
        }

    cout<<Sum<<endl;


    }

	return 0;
}
