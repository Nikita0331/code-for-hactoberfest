#include<iostream>
#include<math.h>

using namespace std;
int first(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
          
        }
       mid= start+ (end-start)/2;
    }
      return ans;
}
int last(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;       
             }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
          
        }
       mid= start+ (end-start)/2;
    }
      return ans;
}

   
int main(){
    int arr[9]={1,2,3,3,4,4,5,6,7};
    cout<<"index of first occurence is"<<first(arr,9,4)<<endl;
    cout<<"index of last occurence is"<<last(arr,9,4);

    
    return 0;
}
