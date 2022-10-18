#include <iostream>
using namespace std;

int reverse(int arr[], int start, int end){
    if(start>end) return &arr;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = arr[start];

    reverse(arr,start+1,end-1);
}
int main(){

    int arr[]={1,2,3,4,5,6};

   cout<<reverse(arr,0,5);
}