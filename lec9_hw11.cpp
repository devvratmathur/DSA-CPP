#include<iostream>
using namespace std;
int main()
{
/////////////    Lecture    /////////////

//Pattern 1    *      pyramid
//            ***
//           *****  for n rows
/*
int i,j,n;
cout<<"Enter the numbeor Pyramid fr";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++)
    cout<<"  ";
    for(j=1;j<=(2*i-1);j++)
    cout<<"* ";
cout<<endl;    
}
*/

//Pattern 2    1      pyramid
//            121
//           12321  for n rows
/*
int i,j,n;
cout<<"enter number of pyramid size   :";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++)
    cout<<"  ";
    for(j=1;j<=i;j++)
    cout<<j<<" ";
    for(j=i-1;j>=1;j--)
    cout<<j<<" ";
cout<<endl;    
}
*/

//Pattern 3    ********* n=5
         //     *******
        //       *****
        //        ***
        //         *
/*
int i,j;
for(i=5;i>=1;i--){
    for(j=1;j<=((9-2*i+1)/2);j++)
    cout<<"  ";
    for(j=1;j<=(2*i-1);j++)
    cout<<"* ";
cout<<endl;    
}
*/

// Pattern 4    ********* n=n
//               *******
//                *****
//                 ***
//                  *

// int i,j,n;
// cout<<"Enter Pyramid Size  :";
// cin>>n;
// for(i=n;i>=1;i--){
//     for(j=1;j<=n-i;j++)
//     cout<<"  ";
//     for(j=1;j<=(2*i-1);j++)
//     cout<<"* ";
// cout<<endl;    
// }


// Pattern 4    * * * * * * * * 
//              * * *     * * * 
//              * *         * *
//              *             *
//              *             *
//              * *         * *
//              * * *     * * *
//              * * * * * * * *  
/*
int i,j,n;
cout<<"Enter the Number like n*n  : ";
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++)
    cout<<"* ";
    for(j=1;j<=(2*n-2*i);j++)
    cout<<"  ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;    
}
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    cout<<"* ";
    for(j=1;j<=2*(n-i);j++)
    cout<<"  ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;   
}
*/

//Pattern mine         
//      * *       
//    * * * *     
//  * * * * * *   
//  * * * * * *   
//    * * * *     
//      * * 

/*
int i,j,n;
cout<<"Enter the Number like n*n  : ";
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++)
    cout<<"  ";
    for(j=1;j<=(2*n-2*i);j++)
    cout<<"* ";
    for(j=1;j<=i;j++)
    cout<<"  ";
cout<<endl;    
}
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    cout<<"  ";
    for(j=1;j<=2*(n-i);j++)
    cout<<"* ";
    for(j=1;j<=i;j++)
    cout<<"  ";
cout<<endl;   
}
*/
//Pattern 4    *             *    n=4
//             * *         * *
//             * * *     * * *    butterfly
//             * * * * * * * *
//             * * *     * * *
//             * *         * *
//             *             *
/*
int i,j,n;
cout<<"Enter the Number like n*n  :";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    cout<<"* ";
    for(j=1;j<=(2*n-2*i);j++)
    cout<<"  ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;    
}
for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++)
    cout<<"* ";
    for(j=1;j<=2*(n-i);j++)
    cout<<"  ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;   
}
*/

//Pattern 4    
//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    * 
/*
int i,j,n;
cout<<" Enter the Number like n    :";
cin>>n;
for(i=1;i<=n;i++){
    for(j=n-i;j>=0;j--)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;    
}
for(i=n;i>=1;i--){
    for(j=n-i;j>=0;j--)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;    
}
*/
/////////////    Homework    /////////////

//Pattern 1   
//    * 
//   * * 
//  * * * 
// * * * *
/*
int i,j,n;
cout<<" Enter the Number like n    :";
cin>>n;
for(i=1;i<=n;i++){
    for(j=n-i;j>=0;j--)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"* ";
cout<<endl;    
}
*/

//Pattern 2
//              1
//            1 2 3
//          1 2 3 4 5
//        1 2 3 4 5 6 7
//      1 2 3 4 5 6 7 8 9

int i,j,n,x=1;
cout<<"Enter the Number like n    :";
cin>>n;
for(i=1;i<=n;i++){
    for(j=n-i;j>=0;j--)
    cout<<"  ";
    for(j=1;j<=2*n-1;j++)
    cout<<x<<" ";
    x++;
cout<<endl;    
}

//Pattern 3
//              A
//            A B A
//          A B C B A
//        A B C D C B A
//      A B C D E D C B A

//Pattern 4    
//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    * 

// int i,j,n;
// cout<<" Enter the Number like n    :";
// cin>>n;
// for(i=1;i<=n;i++){
//     for(j=n-i;j>=0;j--)
//     cout<<" ";
//     for(j=1;j<=i;j++)
//     cout<<"* ";
// cout<<endl;    
// }
// for(i=n;i>=1;i--){
//     for(j=n-i;j>=0;j--)
//     cout<<" ";
//     for(j=1;j<=i;j++)
//     cout<<"* ";
// cout<<endl;    
// }

}