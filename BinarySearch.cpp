/*
Binary search using recursion.
*/

#include <iostream>
using namespace std;

//Function for binary search

int binary_search(int *arr, int n,int x,int start,int end){
 if(start<=end){
 int mid=(start+end)/2;
 if(arr[mid]==x)
 return mid;
 else if(arr[mid]<x){
 return binary_search(arr,n,x,mid+1,end);
 }
 else
 return binary_search(arr,n,x,start,mid-1);
 }
 return -1;
}

int main()
{
int n,key;
cout<<"Enter number of elements in array:\n";
cin>>n;
cout<<"Enter elements of the array:\n";
 //dynamically allocating array
int *arr=new int [n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
 cout<<endl;
 cout<<"elements of the array are"<<endl;
 for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
 
 for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 cout<<endl;
    cout << "SORTED ARRAY" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
cout<<"Enter the element which you want to search:\n";
cin>>key;
 
//calling the function
 
int ans=binary_search(arr,n,key,0,n-1);
 if(ans==-1)
 {
  cout<<"key not found"<<endl;
 }
 else
 {
  cout<<"The index of desired element is: "<<ans<<endl;
 }
 return 0;
}
