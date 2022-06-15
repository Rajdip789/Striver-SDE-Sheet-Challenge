#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    bool flag = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int front = j + 1, back = n - 1;
            while(front < back) {
                int remainTarget = target - arr[i] - arr[j];
                int  twoSumValue = arr[front] + arr[back];
                if(twoSumValue == remainTarget) {
                    flag = 1;
                    break;
                }
                else if(twoSumValue < remainTarget) {
                    front++;
                }
                else {
                    back--;
                }
            }
        }
    }
    if(flag) return "Yes";
    return "No";
}

