//https://www.codechef.com/problems/LUCKFOUR

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

for(int i=0;i<t;i++){

    int no;
    cin>>no;

    int num=no;
    int count=0;
    while(num>0){

        num=num/10;
        count++;

    }
    int detect=0;
    int q=no/10;
    int r=no%10;
    if(r==4)
        detect++;
    for(int i=0;i<count-1;i++){
        r=q%10;
        q=q/10;
        if(r==4)
            detect++;
    }
    cout<<detect<<endl;
}


return 0;
}


