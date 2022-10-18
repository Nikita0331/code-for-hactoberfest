
#include <bits/stdc++.h> 
using namespace std; 
  


class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        unordered_map<int,int> m;
        int i=n-1,sum=0;
        for(int i=0;i<n;i++)
            m[a[i]]++;
        
        while(i>=0)
        {
            int num=a[i];
            i--;
            
            if(m.find(num)!=m.end())
            {
                sum+=num;
                m[num]--;
                
                if(m[num]==0)
                {
                    auto it=m.find(num);
                    m.erase(it);
                }
                
            if(m.find(num-1)!=m.end())
            {
                m[num-1]--;
                 if(m[num-1]==0)
                {
                    auto it=m.find(num-1);
                    m.erase(it);
                }
            }
            
            }
            
          
        }
        
        return sum;
    }

};






int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}
