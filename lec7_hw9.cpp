#include<iostream>
using namespace std;
int main()
{

/////////////    Lecture    /////////////

/*
//First Pattern
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
    cout<<"*  ";}
    cout<<endl;
}
*/
/*
//Second Pattern, acending number pattern
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
    cout<<j<<" ";}
    cout<<endl;
}
*/
/*
//Another 1
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++)
    {cout<<i<<" ";}
    cout<<endl;
}
*/
/*
//3rd Pattern
int i,j;
for(i=1;i<=5;i++){
    for(j=i;j>=1;j--){
    cout<<j<<" ";}
    cout<<endl;
}
*/
/*
//4th pattern
char s;int i,j;
for(i=1;i<=5;i++)
{ s='a'+(i-1);
 for(j=1;j<=i;j++)
 {cout<<s<<" ";}
 cout<<endl;
}
*/
//5th pattern
/*
int i,j;
for(i=1;i<=5;i++)
{
 for(j=1;j<=(5-(i-1));j++)
  {cout<<"*  ";}
 cout<<endl;
}
*/
/*
//6th Pattern
int i,j;
for(i=1;i<=5;i++)
{
    for(j=1;j<=(5-(i-1));j++)
    {cout<<j<<" ";}
cout<<endl;
}
*/
/*
//7th Pattern
int i,j;
for(i=1;i<=5;i++)
{for(j=5;j>=5-i+1;j--)//5-(i-1)
{cout<<j<<"  ";}
cout<<endl;}
*/
/*
//7th Pattern for nth
int i,j,n;
cout<<"enter number:";
cin>>n;
for(i=1;i<=n;i++)
{for(j=n;j>=n-(i-1);j--)//5-(i-1)
{cout<<j<<"  ";}
cout<<endl;}
*/

/////////////    Homework    /////////////

//First Pattern:      
//   a
//   bb
//   ccc
/*
char s;int i,j;
for(i=1;i<=5;i++)
{ s='a'+(i-1);
 for(j=1;j<=i;j++)
 {cout<<s<<" ";}
 cout<<endl;
}
*/

//First Pattern:      
//   1
//   12
//   123
/*
int i,j;
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
 {cout<<j<<" ";}
 cout<<endl;
}
*/

//Second Pattern:      
//   A
//   AB
//   ABC
/*
int i,j;
for(i=1;i<=5;i++)
{
 for(char j='A';j<='A'+i-1;j++)
 {cout<<j<<" ";}
 cout<<endl;
}
*/

//Third Pattern:      
//   10
//   10 11
//   10 11 12
/*
int i,j;
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
 {cout<<10+j<<" ";}
 cout<<endl;
}
*/

//Fourth Pattern:
//      A B C D
//      A B C
//      A B
//      A
/*
int i,j;
for(i=1;i<=5;i++)
{
 for(char j='A';j<='A'+(5-i);j++)
 {cout<<j<<" ";}
 cout<<endl;
}
*/
}