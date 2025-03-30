#include<iostream>
using namespace std;
int main()
{

/////////////    Lecture    /////////////

//Pattern 1    *
//            **
//           ***  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {cout<<"* ";}
cout<<endl;    
}
*/

//Pattern 2    1
//            22
//           333  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {cout<<i<<" ";}
cout<<endl;    
}
*/

//Pattern 3    1
//            12
//           123  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {cout<<j<<" ";}
cout<<endl;    
}
*/

//Pattern 4    A
//            AB
//           ABC  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(char Alpha='A';Alpha<='A'+(i-1);Alpha++)
    {cout<<Alpha<<" ";}
cout<<endl;    
}
*/

//Pattern 4    A  another way
//            AB
//           ABC  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {char lpha = 'A'+j-1;
    cout<<lpha<<" ";}
cout<<endl;  
}
*/

//Pattern 5    1
//            21
//           321  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=i;j>=1;j--)
    {cout<<j<<" ";}
cout<<endl;    
}
*/

//Pattern 6    *
//            * *
//           * * *  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<" ";}
    for(j=1;j<=i;j++)
    {cout<<"* ";}
cout<<endl;    
}
*/
/////////////    Homework    /////////////

//Pattern 1    1
//            21
//           321  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=i;j>=1;j--)
    {cout<<j<<" ";}
cout<<endl;    
}
*/

//Pattern 2    A
//            BB
//           CCC  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {char Alpha ='A'+(i-1)
     cout<<Alpha<<" ";}
cout<<endl;    
}
*/

//Pattern 3    5
//            54
//           543  for n rows
/*
int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=n;j>=n-(i-1);j--)
    {cout<<j<<" ";}
cout<<endl;    
}
*/

//Pattern 3
//             E
//           E D
//         E D C
//       E D C B
//     E D C B A

int i,j,n;
cout<<"Enter Your Choice Number";
cin>>n;
for(i=1;i<=n;i++)
{   for(j=1;j<=(n-i);j++)
    {cout<<"  ";}
    for(j=1;j<=i;j++)
    {for(name ='A'+n-1;name>=(i-1)+'A';name--)
    {cout<<name<<" ";}}
cout<<endl; 
}

}