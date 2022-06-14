#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    vector<int> mpp(256, -1);
    int left = 0, right = 0;
    int len = 0;
    int n = s.size();
    while(right < n){
        if(mpp[s[right]] != -1) 
            left = max(mpp[s[right]] + 1, left);
        mpp[s[right]] = right;
        len = max(len, right - left + 1);
        right++;
    }
    return len;
}
