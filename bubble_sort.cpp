#include<iostream>  
using namespace std;
int main ()
{
   int i, j,temp;
   int a[8] = {7, 2, 5, 1, 8, 3, 9, 6};
   cout <<"Input list\n";
   for(i = 0; i<8; i++) {
   cout <<a[i]<<"\t";
}
cout<<endl;
for(i = 0; i<8; i++) {
   for(j = i+1; j<8; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Sorted Element List\n";
for(i = 0; i<8; i++) {
   cout <<a[i]<<"\t";
   }
return 0;
}
