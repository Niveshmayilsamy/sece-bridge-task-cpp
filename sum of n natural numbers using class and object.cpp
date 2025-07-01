//sum of n natural numbers using class and object
#include <iostream>
using namespace std;
class nsum
{
    public:
  int n,i,sum;
  void input()
  {
    cout<<"Enter the range: ";
    cin>>n; 
  }
  void csum()
  {
       sum=0;
       cout<<"Numbers:"<<endl;
       for(int i=1;i<=n;i++)
    {
       cout<<i<<endl;
       sum+=i;
    }
    sum=n*(n+1)/2;
    cout<<"The sum of n values are: "<<sum;
  }
};
int main() 
{
    nsum nat;
    nat.input();
    nat.csum();
    return 0;
}
