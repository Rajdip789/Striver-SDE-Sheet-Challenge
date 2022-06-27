#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long trappedWater = 0;
    int left = 1, right = n - 2;
    long leftMax = arr[0], rightMax = arr[n-1];
    
    while(left <= right) {
        if(leftMax <= rightMax) {
            if(leftMax <= arr[left])
                leftMax = arr[left];
            else
                trappedWater += (leftMax - arr[left]);
            left++;
        }
        else {
            if(rightMax <= arr[right])
                rightMax = arr[right];
            else 
                trappedWater += (rightMax - arr[right]);
            right--;
        }
    }
    return trappedWater;
}
