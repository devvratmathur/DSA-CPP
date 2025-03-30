#include<iostream>
using namespace std;
int main()
{

/////////////    Lecture    /////////////

//print o from 101 to 200
/*
int i;
for(i=101;i<=200;i++)
cout<<i<<" ";
*/

//Print alphabet a to z
/*
char alpha;
for(alpha='a';alpha<='z';alpha++)
cout<<alpha<<" ";
cout<<endl;
for(alpha='A';alpha<='Z';alpha++)
cout<<alpha<<" ";
*/

//Print no in reverse order
/*
int n,i;
cout<<"Enter NO";
cin>>n;
for(i=n;i>=1;i--)
cout<<i<<"  ";
*/

//print no from 1 to 100 but difference is 3
/*
int n;
for(n=1;n<=100;n=n+3)
cout<<n<<" ";
*/

//print table till 15
/*
int i,n;
cout<<"ENter Table";
cin>>n;
for(i=1;i<=15;i++)
{
    cout<<n<<" x "<<i<<"="<<i*n<<endl;
}
for(i=1;i<=10;i++)
{
    cout<<i*n<<endl;
}
for(i=n;i<=10*n;i=i+n)
{
    cout<<i<<endl;
}
*/
//Power of any number with loop without math library
/*
int i,n,pow,out;
cout<<"Enter number";
cin>>n;
cout<<"Enter power";
cin>>pow;

for(i=1;i<pow;i++)
{
    n=n*n;
}
cout<<n;
*/

//sum of n natural no using loop
/*
int i,sum=0,n;
cout<<"enter till natiral no sum you want";
cin>>n;
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
cout<<sum;
*/
/*
//factorial of any number
 int n,i,fact=1;
 cout<<"enter th the number for factorial";
 cin>>n;
 for(i=1;i<=n;i++)
{
  fact=fact*i;
}
cout<<fact;
*/
//prime number
/*
int main()
{
int i,n;
cout<<"enter no  ";
cin>>n;
if(n<2)
{
 cout<<"not an prime";
 return 0;
}
else
 for(i=2;i<n;i++)
{
    if(n%i==0)
    cout<<"not an prime";
    else    
    cout<<"prime no";
    return 0;
 }
 cout<<"prime no1";
return 0;
*/

/////////////    Homework    /////////////

/*
//print no from 280 to 250
int i;
for(i=280;i>=250;i--)
cout<<i<<" ";
*/
/*
//Print char from ‘A’ to ‘Z’ with the help of a for loop
char alpha;
for(alpha='A';alpha<='Z';alpha++)
cout<<alpha<<" ";
*/
/*
//Print char from ‘Z’ to ‘A’ with the help of a for loop.
char alpha;
for(alpha='Z';alpha>='A';alpha--)
cout<<alpha<<" ";
*/
/*
//There is an Arithmetic Progression, First number is 220 
//and Common Difference is 7. So print all the numbers from
// 220 to 730 which follow the AP.
int i;
for(i=220;i<=730;i=i+7)
cout<<i<<" ";
*/
/*
//Print Sum of square of first n natural number.
int i,sum=0,n,sqr;
cout<<"enter till natural no sum sqr you want";
cin>>n;
for(i=1;i<=n;i++)
{
    sqr=i*i;
    sum=sum+sqr;
}
cout<<sum;
*/
/*
//Print Sum of cube of first n natural number
int i,sum=0,n,cube;
cout<<"enter till natural no sum sqr you want";
cin>>n;
for(i=1;i<=n;i++)
{
    cube=i*i*i;
    sum=sum+cube;
}
cout<<sum;
*/
/*
//Print n’th Fibonacci number.
int i,n,pre=0,cur=1,fib;
cout<<"enter the nth postion of fibnacci series you want  ";
cin>>n;
if(n==1)
{
cout<<pre;
return 0;
}
else if(n==2)
{
cout<<cur;
return 0;
}
else
{
for(i=3;i<=n;i++)
{
    fib=pre+cur;
    pre=cur;
    cur=fib;
}
}
cout<<fib;
*/
}