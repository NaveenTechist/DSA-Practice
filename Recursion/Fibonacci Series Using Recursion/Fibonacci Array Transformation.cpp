#include <bits/stdc++.h>
using namespace std;

class solution {
    
    int fibo(int num){
        if(num == 0) return 0;
        if(num == 1) return 1;
        return fibo(num-1) + fibo (num-2);
    }
    
    void eachElementFunction(vector<int>  &arr,int n, int index){
        if(index == n){
          return;  
        }
        arr[index] = fibo(arr[index]);
        eachElementFunction(arr, n, index+1);
    }
    
    public:
    vector<int> getTransformedArray(vector<int>& arr, int n) {
        eachElementFunction(arr, n, 0);
        return arr;
    }
};
