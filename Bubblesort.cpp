#include<iostream>  
using namespace std;
int main ()
{
   int i, j,temp=0;
   int size=0;
   cout << "enter size of array" << endl;
    cin >> size;
    int* a = new int[size];
    cout << "Enter the elemetns of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
   cout <<"Input list\n";
   for(i = 0; i<size; i++) {
   cout <<a[i]<<"\t";
}
cout<<endl;
for(i = 0; i<size; i++) {
   for(j = 0; j<size-1; j++)
   {
      if(a[j] > a[j+1]) {
         temp = a[j];
         a[j] = a[j+1];
         a[j+1] = temp;
      }
   }
}
cout <<"Sorted Element List\n";
for(i = 0; i<size; i++) {
   cout <<a[i]<<"\t";
   }
return 0;
}
