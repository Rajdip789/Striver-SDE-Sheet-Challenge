#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = 0;
    long long maxi = INT_MIN;
    
    for(int i = 0; i < n; ++i) {
        sum += arr[i];
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;
    }
    
    //If all the elements are negative then the maximym subarray is a empty set so we need to return zero.
    if(maxi < 0)
        return 0;
    return maxi;
}
