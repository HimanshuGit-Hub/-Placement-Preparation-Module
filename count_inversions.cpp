#include <bits/stdc++.h> 

long long getInversions(long long *arr, int n){

    // Write your code here.

    int sum=0;

    for(int i=n-1;i>0;i--){

        for(int j=i-1;j>=0;j--){

            if(arr[i]<arr[j])

            sum++;

        }

    }

    return sum;

}