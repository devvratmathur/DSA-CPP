#include<iostream>
using namespace std;

/////////////    Lecture    /////////////

//Functions 

// Prime of a
// prime of b
// prime of b-a
// prime of a-b
// Fact of a
// Fact of b
// Fact of b-a
// Fact of a-b  all using a function

// bool prime(int n){
//     if (n<2)
//     return 0;

//     for(int i=2;i<n;i++){
//         if(n%i==0)
//         return 0;
//     }
//     return 1;
// }

// int fact(int n)
// { int ans =1;
//   for(int i=1;i<=n;i++)
//   {ans=ans*i;}
//   return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<"Enter a b   :"<<endl;
//     cin>>a>>b;
//     cout<<prime(a)<<endl;
//     cout<<prime(b)<<endl;
//     cout<<prime(a-b)<<endl;
//     cout<<prime(b-a)<<endl;
//     cout<<fact(a)<<endl;
//     cout<<fact(b)<<endl;
//     cout<<fact(a-b)<<endl;
//     cout<<fact(b-a)<<endl;
// }

// ///Pass by Value

// void Swap(int a,int b)
// {
//     int c;
//     c=b;
//     b=a;
//     a=c;
// }
// int main(){
//     int x,y;
//     cout<<"Enter No   :";
//     cin>>x>>y;
//     Swap(x,y);
//     cout<<"a =  "<<x<<endl<<"b  ="<<y;

// }

// ///Pass by Reference  //swap with extra variable

// void Swap(int &a,int &b)
// {
//     int c;
//     c=b;
//     b=a;
//     a=c;
// }
// int main(){
//     int x,y;
//     cout<<"Enter No   :";
//     cin>>x>>y;
//     Swap(x,y);
//     cout<<"a =  "<<x<<endl<<"b =  "<<y;

// }

// Instead of defining two functions that should do the same thing, it is better to overload one.

// In the example below, we overload the plusFunc function to work for both int and double:

// int plusFunc(int x, int y) {
//   return x + y;
// }

// double plusFunc(double x, double y) {
//   return x + y;
// }

// int main() {
//   int myNum1 = plusFunc(8, 5);
//   double myNum2 = plusFunc(4.3, 6.26);
//   cout << "Int: " << myNum1 << "\n";
//   cout << "Double: " << myNum2;
//   return 0;
// }

/////////////    Homework    /////////////

// 1: Find the cube of a number using Function.

// int cube(int &n){
//     n=n*n*n;
//     return 1;
// }
// int main(){
//     int a;
//     cout<<"Enter no for cube    :::  ";
//     cin>>a;
//     cube(a);
//     cout<<a;
// }

// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

// 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

// ////// Logic 1   Add Sub

// void swapWithoutTemp(int &a, int &b) {
//     a = a - b;
//     b = a + b;
//     a = b - a;
// }
// int main() {
//     int a,b;
//     cout<<"Enter two No. ::: ";
//     cin>>a>>b;
//     cout << "Before swapping: a = " << a << ", b = " << b <<endl;
//     swapWithoutTemp(a, b);
//     cout << "After swapping: a = " << a << ", b = " << b <<endl;
//     return 0;
// }

// ////// Logic 2  XOR Swapping

// void swapWithoutTemp(int &a, int &b) {

//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }
// int main() {
//     int a,b;
//     cout<<"Enter two No. ::: ";
//     cin>>a>>b;
//     cout << "Before swapping: a = " << a << ", b = " << b <<endl;
//     swapWithoutTemp(a, b);
//     cout << "After swapping: a = " << a << ", b = " << b <<endl;
//     return 0;
// }

// 5: Print “Hello Coder Army” n times using Function.

// int Print(string x)
// { cout<<"Hello Coder Army"<<endl;
// return 1;
// }
// int main(){
//     int n;string k;
//     cout<<"Enter Number of times :::";
//     cin>>n;
//     while(n>0){
//     Print(k);
//     n--;
//     }
// }

// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.