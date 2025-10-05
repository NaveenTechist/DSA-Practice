#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    int gcd(int N, int arr[]){
    	int sample_value = arr[0];
    	for(int i = 1; i < N; i++){
    	    sample_value = __gcd(sample_value, arr[i]);
    	}
    	return sample_value;
    }
};
