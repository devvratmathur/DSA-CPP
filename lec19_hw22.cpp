#include<iostream>
using namespace std;
int main()
{
/////////////    Lecture    /////////////

////////    Selection Sort

    // int size;
    // cout<<"Enter size of array  :  ";
    // cin>>size;
    // char x[1000];
    // for(int i=0;i<size;i++){
    // cout<<"Enter Array  :  ";
    // cin>> x[i];}

    // cout<<"Array is  :  ";
    // for(int p=0;p<size;p++)
    // cout<<x[p]<<"   ";
    
    // for(int i=0;i<size-1;i++)
    //  {int index =i;
    //  for(int j=i+1; j<=size;j++)
    //   {if(x[j]<x[index])
    //    index=j;}
    //  swap(x[index],x[i]);
    //  }
     
    // cout<<endl<<"Sorted Array using selection sort   :  :  "<<endl;
    // for(int k=0;k<size+1;k++)
    // cout<<x[k]<<"   ";


/////////////    Homework    /////////////


// Function to perform selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


}