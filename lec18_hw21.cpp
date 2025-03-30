#include<iostream>
using namespace std;
int main()
{

/////////////    Lecture     //////////////

// Time and Space Complexity

/////////////    Homework    /////////////


Find the Time Complexity Big(O), Theta, Omega:

   1: for(int i=1;i<=n*n;i++) 
       cout<<"Coder Army";       // O(n^2)
   
   2: for(int i=1;i<=n*n;i=i+2) 
       cout<<"Coder Army";       // O(n^2/2)=O(n^2)
   
  3: for(int i=1;i<=n;i++)       // O(n)
      for(int j=1;j<=n;j=j+5)    // O(n/5)
      cout<<"Coder Army";        // O(1), TOTAL = O(n^2)
  
  4: for(int i=1;i<=n;i++)      
      for(int j=i;j<=n;j=j++)   
      cout<<"Coder Army";       // n*(n+1)/2 = O(n^2)

  5: for(int i=1;i<=n;i++)      
      for(int j=1;j<=n;j=j*4)   // n(logbase4n)  = nlogn (base 2)
      cout<<"Coder Army";
  
  6: for(int i=1;i<=n;i=i*2)    
      for(int j=1;j<=i;j=j++)   // 1+2+4+8..... n  = O(n)
      cout<<"Coder Army";       

  7: for(int i=1;i<=n;i++)      
      for(int j=1;j<=n;j=j++)   
      for(int k=1;k<=n;k=k*3)   // n^2logn base3
      cout<<"Coder Army";      
 
  8: for(int i=1;i<=n;i++)     //  O(n^3)
      for(int j=1;j<=n;j=j++)     
      for(int k=1;k<=n;k++)     
      cout<<"Coder Army";


}