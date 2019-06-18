//https://www.codechef.com/problems/TLG

#include<iostream>
using namespace std;


int main(){

int n;
cin>>n;

int sum1=0,sum2=0;
int lead[n];//stores lead of current round
int winner[n];//stores winner of current round

for(int i=0;i<n;i++){

    int a,b;
    cin>>a>>b;

    sum1+=a;
    sum2+=b;
    if(sum1>sum2)
        {
            lead[i]=(sum1-sum2);
            winner[i]=1;
        }
    else
        {
            lead[i]=(sum2-sum1);
            winner[i]=2;
        }

}


int max=lead[0];
int index=0;
for(int i=0;i<n;i++){

    if(lead[i]>=max)
        {
            max=lead[i];
            index=i; //stores index of lead array where lead is maximum
        }
}

cout<<winner[index]<<" "<<max;

return 0;
}
