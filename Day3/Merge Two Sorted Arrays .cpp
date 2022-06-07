#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
    /*int gap = ceil((float)(n + m)/2);
    while(gap > 0) {
        int i = 0;
        int j = gap;
        while(j < n + m) {
            if(j < n && arr1[i] > arr1[j]) {
                swap(arr1[i], arr1[j]);
            }
            else if (i < n && j >= n && arr1[i] > arr2[j-n]) {
                swap(arr1[i], arr2[j-n]);
            }
            else if (i >= n && j >= n && arr2[i-n] > arr2[j-n]) {
                swap(arr2[i-n], arr2[j-n]);
            }
            i++;
            j++;
        }
        if(gap == 1) gap = 0;
        else gap = ceil((float)gap/2);
    }
    return arr1;*/
    
    int nums1Size=m+n-1;
    m--;
    n--;

    while ((m >= 0) && (n >= 0)) {
        if (nums2[n] > nums1[m]) {
            nums1[nums1Size--] = nums2[n--];
        } else {
            nums1[nums1Size--] = nums1[m--];
        }
    }

    while (n >= 0) {
        nums1[nums1Size--] = nums2[n--];
    }
    return nums1;
}
