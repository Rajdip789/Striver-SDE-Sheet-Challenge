#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int count = 0;
    int candidate = 0;
    
    for(int ind = 0; ind < n; ind++) {
        if(count == 0) {
            candidate = arr[ind];
        }
        if(arr[ind] == candidate) {
            count++;
        }
        else { 
            count --;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) count++;
    }
    if(count<=n/2) return -1;
    return candidate;
}
