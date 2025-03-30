#include <iostream>
using namespace std;
bool IsPrime(int num)
{
      if(num<=1)
      return false;
      for(int x = 2; x < num; x++)
      {if(num % x == 0) 
        return false;
      }
      return true;
}
int main()
 {
    int n;
    cout << "      Enter a number (n): ";
    cin >> n;
    for(int i = 1; i <= n; i++)
      {
          if(IsPrime(i))
          {
            cout << i << "\n";
          }
      }
 }