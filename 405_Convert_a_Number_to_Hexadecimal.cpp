#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;  

        string hex = "";
        char hexMap[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                         '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

        while (n > 0) {
            hex += hexMap[n % 16];
            n /= 16;
        }

        reverse(hex.begin(), hex.end());
        return hex;
    }
};
int main(){
    Solution s;
    cout<<s.toHex(-2);
    return 0;
}