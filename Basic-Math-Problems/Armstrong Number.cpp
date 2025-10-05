#include<bits/stdc++.h>
#include <cmath>
using namespace std;

class solution {
public:
    bool checkArmstrongNumber(int num) {
        int count = 0;
        int size = to_string(num).length();
        int temp_num = num;
        while(temp_num != 0){
            int last_digit = temp_num % 10;
            count += int(pow( last_digit, size));
            temp_num /= 10;
        }
        return num == count;
    }

};
