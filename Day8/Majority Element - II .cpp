#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int nums1 = 0, nums2 = 0, c1 = 0, c2 = 0;
    for(int &it : arr) {
        if(it == nums1) c1++;
        else if(it == nums2) c2++;
        else if(c1 == 0) {
            nums1 = it;
            c1 = 1;
        }
        else if(c2 == 0) {
            nums2 = it;
            c2 = 1;
        }
        else {
            c1--;
            c2--;
        }
    }
    
    vector<int> ans;
    c1 = 0, c2 = 0;
    for(int &it : arr) {
        if(it == nums1) c1++;
        else if(it == nums2) c2++;
    }
    if(c1 > n/3) ans.push_back(nums1);
    if(c2 > n/3) ans.push_back(nums2);
    
    return ans;
}
