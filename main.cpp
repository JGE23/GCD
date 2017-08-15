#include <iostream>
using namespace std;

int gcd(int x, int y)
{
  if (y == 0)
  {
    return x;
    }
  else
  {
    return gcd(y, x % y);
    }
}
int main()
{
  int x,y;
  cout<<"Enter x int:"<<endl;
  cin>>x;
  cout<<"Enter y int:"<<endl;
  cin>>y;
  cout<< "GCD:"<<gcd(x,y)<<endl;
  return 0;
  }
