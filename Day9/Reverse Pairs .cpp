#include <bits/stdc++.h> 
int merge(int low, int mid, int high, vector<int> &nums) {
    int count = 0;
    int j = mid + 1;

    for(int i = low; i <= mid; i++) {
        while(j <= high && nums[i] > 2ll*nums[j]) {
            j++;
        }
        count += (j - (mid+1));
    }

    int temp[high - low + 1];
    int left = low, right = mid + 1, k = 0;

    while(left <= mid && right <= high) {
        if(nums[left] < nums[right]) {
            temp[k++] = nums[left++];
        }
        else {
            temp[k++] = nums[right++];
        }
    }

    while(left <= mid) {
        temp[k++] = nums[left++];
    }

    while(right <= high) {
        temp[k++] = nums[right++];
    }

    for(int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

    return count;
}

int mergeSort(int low, int high, vector<int> &nums) {
    if(low >= high) return 0;

    int mid = (low + high)/2;
    int pairCount = mergeSort(low, mid, nums);
    pairCount += mergeSort(mid + 1, high, nums);
    pairCount += merge(low, mid, high, nums);

    return pairCount;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.
    return mergeSort(0, n - 1, arr);
}
