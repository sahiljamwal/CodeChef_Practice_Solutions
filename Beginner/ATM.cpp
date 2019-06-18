//https://www.codechef.com/problems/HS08TEST

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int amt;    
    float bal;
    cin>>amt>>bal;
    
    if(bal>=(amt+0.50))
        {
            if(amt%5==0)
            {
                bal-=(amt+0.50);
                cout<<fixed<<setprecision(2)<<bal;
            }
            else
            {
                cout<<fixed<<setprecision(2)<<bal;
            }
        }
    else
        cout<<fixed<<setprecision(2)<<bal;

	return 0;
}
