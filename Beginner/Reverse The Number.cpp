//https://www.codechef.com/problems/FLOW007

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {

        int n;
        cin>>n;
        int num=n;

        int count=0;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        
        int sum=0;
        for(int j=1;j<=count;j++)
        {
            int r=n%10;
            int q=n/10;
            n=q;
            sum+=(r*(pow(10,count-j)));
             
        }
       cout<<sum<<endl;
    }

	return 0;
}
