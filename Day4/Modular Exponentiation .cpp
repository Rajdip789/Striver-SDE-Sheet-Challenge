#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long ans = 1;
    long xx =x;

    while(n>0){
        if(n%2==0){
            xx=(xx%m*xx%m)%m;
            n=n>>1;
        } else{
            ans=(ans*xx%m)%m;
            n=n-1;
        }
    }
    return (int)(ans%m);
}
