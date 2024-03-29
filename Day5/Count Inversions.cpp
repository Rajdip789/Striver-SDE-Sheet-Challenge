#include <bits/stdc++.h> 
long long merge(long long *arr, long long *temp, int left, int mid, int right) {
    long inv_count = 0;
    int i = left, j = mid;
    int k = left;
    
    while((i <= mid - 1) && (j <= right)) {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            inv_count += mid - i;
        }
    }
        
    while(i <= mid - 1)
        temp[k++] = arr[i++];
    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long mergeSort(long long *arr, long long *temp, int left, int right) {
    int mid; 
    long long inv_count = 0;
    if(right > left) {
        mid = (left + right) / 2;
        
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
        
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    return mergeSort(arr, temp, 0, n-1);
}
