#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int count = 0, prefixXor = 0;
    unordered_map<int, int> mpp;
    
    for(int i : arr) {
        prefixXor ^= i;
        if(prefixXor == x) 
            count++;
        
        int currXor = prefixXor ^ x;
        if(mpp.find(currXor) != mpp.end()) {
            count += mpp[currXor];
        }
        
        mpp[prefixXor] ++;
       
    }
    return count;
}
