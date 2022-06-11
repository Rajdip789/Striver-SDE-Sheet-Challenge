#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
    int num = 0;
    for(int i = 1; i <= n; i++) num = num ^ i;
    for(int i = 0; i < n; i++) num = num ^ arr[i];
        
    int cnt = 0;
    while(num){
        if(num & 1) break;
        cnt += 1;
        num = num >> 1;
    }

    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] & 1 << cnt) 
            xor1 = xor1 ^ arr[i];
        else
            xor2 = xor2 ^ arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(i & 1 << cnt) 
            xor1 = xor1 ^ i;
        else
            xor2 = xor2 ^ i;
    }

    int flag = 1;
    pair<int ,int> ans;

    for(int i = 0; i < n; i++){
        if(arr[i] == xor1){
            ans.second = xor1; 
            flag = 0; 
            break;
        }
        else if(arr[i] == xor2){
            ans.second = xor2; 
            break;
        }
    }

    ans.first = (flag == 0)? xor2 : xor1;
    return ans;
}

