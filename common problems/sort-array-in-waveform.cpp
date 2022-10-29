#define s(A) A.size()

vector<int> Solution::wave(vector<int> &A) {
    int n = s(A);
   
    //sort the array
    sort(A.begin(), A.end());
   
    //because, it is desired to have a lexicographically smallest such array:
    //swap the adjacent elements in the sorted array
    //swap till the last even pair
    for(int i=0; i<n-1; i+=2)
    {
        swap(A[i], A[i+1]);
    }
   
    return A;
   
}
