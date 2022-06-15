#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector<int> &A) {

    // Write your code here
    int n = A.size();
    int longest = 0, sum = 0;;
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        sum += A[i];

        if(sum == 0) {
            longest = i + 1;
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                longest = max(longest, i - mpp[sum]);
            } else {
                mpp[sum] = i;
            }
        }
    }
    return longest;
}
