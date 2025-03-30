#include<iostream>
using namespace std;
int main()
{

/////////////    Lecture    /////////////

//////////While loop

// Printing 1 to n numbers

// int i,n;
// cout<<"Enter Number  :";
// cin>>n;
// i=1;
// while(i<=n){
//     cout<<i<<endl;
//     i++;
// }

//Table of any number

// int i=1,n;
// cout<<"Enter Number for table till 15x :";
// cin>>n;
// while(i!=15){
//     cout<<i*n<<endl;
//     i++;
// }

//Factor of Any Number

// int i,n;
// cout<<"Enter Number for factor of number   :";
// cin>>n;
// i=1;
// while(i<=n){
//     if(n%i==0){
//     cout<<i<<endl;}
//     i++;
// }

////////////do-while

// Printing 1 to n numbers

// int i,n;
// cout<<"Enter Number  :";
// cin>>n;
// i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }
// while(i<=n);

//Table of any number

// int i=1,n;
// cout<<"Enter Number for table till 15x :";
// cin>>n;
// do{
//     cout<<i*n<<endl;
//     i++;
// }
// while(i!=15);

//Sum of any number from 1 to n

// int i=1,n,sum=0;
// cout<<"Enter Number for sum :";
// cin>>n;
// do{
//     sum=sum+i;
//     i++; 
// }
// while(i<=n);
// cout<<sum;

//Switch case

// int n;
// cout<<"Enter week day number  ::: ";
// cin>>n;
// switch (n)
// {
// case 1:
//     cout<<"Monday";
//     break;
// case 2:
//     cout<<"Tuesday";
//     break;
// case 3:
//     cout<<"Wed";
//     break;    
// case 4:
//     cout<<"Thur";
//     break;
// case 5:
//     cout<<"Fri";
//     break;
// case 6:
//     cout<<"Sat";
//     break;
// case 7:
//     cout<<"Sun";
//     break;            
// default:
//     cout<<"Not week day";
// }

//Scope of Variable

// int num=10;
// cout<<num;

// int num=10;
// int num;
// cout<<num;

// cout<<num;
// int num=10;

// int n=10;
// int num=10;
// cout<<num<<endl;
// if(n==10){
//     int num=20;
//     cout<<num<<endl;
// }

/////////////    Homework    /////////////

// // 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

// cout<<"Enter the num till even number prints (while)   :  ";
// int i=0,n;
// cin>>n;
// while(i<=n){
//     if(i%2==0)
//     cout<<i<<endl;
//     i++;
// }

// cout<<"Enter the num till even number prints(do-while)   :  ";
// int i=0,n;
// cin>>n;
// do
// {
//     cout<<i<<endl;
//     i++;
// } while (i<=n);

// 2: Find the factorial of a number n using a while loop and do a while loop.

// cout<<"Enter the num for factorial (while)   :  " ;
// int i=1,n,fact=1;
// cin>>n;
// while(i<=n){
//     fact=fact*i;
//     i++;
// }
//     cout<<fact;

// cout<<"Enter the num for factorial (do-while)   :   " ;
// int i=1,n,fact=1;
// cin>>n;
// do
// {   fact=fact*i;
//     i++;
// } while (i<=n);
// cout<<fact;   

// Try divisibility of each number 3: Given a number n, print all the numbers from 1 to n (inclusive) which are not divisible by 3 and 5. (use Continue here).

// cout<<"Enter the num till you want  :   " ;
// int i=1,n;
// cin>>n;
// for(i=1;i<=n;i++){
// if(i%3==0 && i%5==0){
// cout<<i<<endl;}
// }

// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

// int n;
// cout<<"Enter month number  ::: ";
// cin>>n;
// switch (n)
// {
// case 1:
//     cout<<"Jan";
//     break;
// case 2:
//     cout<<"Feb";
//     break;
// case 3:
//     cout<<"Mar";
//     break;    
// case 4:
//     cout<<"Apr";
//     break;
// case 5:
//     cout<<"May";
//     break;
// case 6:
//     cout<<"Jun";
//     break;
// case 7:
//     cout<<"Jul";
//     break;  
// case 8:
//     cout<<"Aug";
//     break;          
// case 9:
//     cout<<"Sep";
//     break;
// case 10:
//     cout<<"Oct";
//     break;
// case 11:
//     cout<<"Nov";
//     break;
// case 12:
//     cout<<"Dec";
//     break;
// }

// 5: Print all the Capital and small letters using a while loop. It means A-Z, then a-z.

// char Ualpha = 'A',Lalpha = 'a';
// while(Ualpha<='Z'){
//     cout<<Ualpha<<endl;
//     Ualpha++;
// }
// while(Lalpha<='z'){
//     cout<<Lalpha<<endl;
//     Lalpha++;
// }

// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

cout<<"Enter Number   :  ";
int n;
cin>>n;
for(int i=1;i<=n;i++){
if(n<=1)
int i =2;
cout<<"Not Prime";
while(i<n){
    if(n%i==0)
    cout<<"Not Prime";
    else
    i++;
}
    cout<<"Prime";}
}