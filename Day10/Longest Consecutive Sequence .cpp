#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int N) {
    // Write your code here.
    unordered_set<int> hashSet;
        
    for(int i = 0; i < N; i++) {
        hashSet.insert(arr[i]);
    }

    int maxLen = 0;
    for(int i = 0; i < N; i++) {
        if(hashSet.find(arr[i] - 1) == hashSet.end()) {
            int currLen = 0;
            int currElement = arr[i];
            while(hashSet.find(currElement) != hashSet.end()) {
                currElement += 1;
                currLen += 1;
            }
            maxLen = max(maxLen, currLen);
        }
    }
    return maxLen;
}
