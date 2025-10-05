// Asking MicroSoft 
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkHarshadNumber(int num) {
        int count = 0;
        int temp_num = num;
        while(temp_num != 0){
            int last_digit = temp_num % 10;
            count += last_digit;
            temp_num /= 10;
        }
        return num % count == 0;
    }
};
