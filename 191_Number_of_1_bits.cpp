#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int len = log2(n),count=0;
        string binary = bitset<64>(n).to_string().substr(64 - len - 1);

        cout<<binary<<endl;
        
        for(int i=0;i<binary.length();i++){
            int n = binary[i] - '0';
            cout<<"1^"<<n<<" = "<<(1^n)<<endl;
            if((1^n)==false) count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout<<s.hammingWeight(127)<<endl;
    return 0;
}
