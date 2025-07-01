//sum of n natural numbers 
#include <iostream>
using namespace std;
int main() 
{
    int n,sum;
    cout<<"Enter the range: ";
    cin>>n;
    for(int i;i<=n;i++)
    {
        cout<<i<<endl;
        sum=n*(n+1)/2;
    }
    cout<<"The sum of n values are: "<<sum;
    return 0;
}
