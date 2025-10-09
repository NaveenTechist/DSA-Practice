#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    
    bool canBecomePalindromeChecking(string tring,int left,int right, vector<pair<int, int>> &arr){
        if(left >= right){
            if(arr.size() == 0){
                return true;
            }else if(arr.size() == 1){
                auto first_element = arr[0];
                return (tring[first_element.first] == tring[tring.size() / 2] || tring[first_element.second] == tring[tring.size() / 2]);
            }else if(arr.size() == 2){
                auto first_element = arr[0];
                auto second_element = arr[1];
                return (tring[first_element.first] == tring[second_element.second] && tring[first_element.second] == tring[second_element.first]) || 
                       (tring[first_element.first] == tring[second_element.first] && tring[first_element.second] == tring[second_element.second]);
            }
        }
            
        if(tring[left] == tring[right]){
            return canBecomePalindromeChecking(tring, left +1, right-1, arr);
        }else{
            arr.push_back({left, right});
            if(arr.size() > 2){
                return false;
            }
            return canBecomePalindromeChecking(tring, left +1, right -1, arr);
        }
    }

    bool canBecomePalindrome(string s) {
        vector<pair<int, int>> arr;
        return canBecomePalindromeChecking(s, 0, s.length()-1, arr);
    }
};
