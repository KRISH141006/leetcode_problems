// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     string addBinary(string a, string b) {
//         char carry='0';
//         string ans=" ";
//         if(a.length()>b.length()){
//             while(a.length()-b.length()==0){
//                 b.insert(b.begin(),'0');
//             }
//         }

//         else if(a.length()<b.length()){
//             while(b.length()-a.length()==0){
//                 a.insert(a.begin(),'0');
//             }
//         }

//         for(int i=a.length()-1;i>=0;i++){
//             if((a[i]=='0' && b[i]=='0') && carry=='0'){
//                 ans.insert(ans.begin(),'0');
//                 carry='0';
//             }
//             else if(((a[i]=='0' && b[i]=='1')||(a[i]=='1' && b[i]=='0')) && carry=='0'){
//                 ans.insert(ans.begin(),'1');
//                 carry='0';
//             }
//             else if((a[i]=='1' && b[i]=='1') && carry=='0'){
//                 ans.insert(ans.begin(),'0');
//                 carry = '1';
//             }
//             else if((a[i]=='0' && b[i]=='0') && carry=='1'){
//                 ans.insert(ans.begin(),'1');
//                 carry='0';
//             }
//             else if(((a[i]=='0' && b[i]=='1')||(a[i]=='1' && b[i]=='0')) && carry=='1'){
//                 ans.insert(ans.begin(),'0');
//                 carry=1;
//             }
//             else if((a[i]=='1' && b[i]=='1') && carry=='1'){
//                 ans.insert(ans.begin(),'1');
//                 carry=1;
//             }
//             if(i==0 && carry == '1'){
//                 ans.insert(ans.begin(),'1');
//                 carry='0';
//             }
//         }
//         return ans;
//     }
// };
// int main(){
//     Solution s;

//     string ans = s.addBinary("1010","1011");
//     cout<<ans<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;

        // Pad shorter string with 0s
        while(a.length() < b.length()) a.insert(a.begin(), '0');
        while(b.length() < a.length()) b.insert(b.begin(), '0');

        // Add from LSB to MSB
        for(int i = a.length() - 1; i >= 0; i--) {
            int bitA = a[i] - '0';
            int bitB = b[i] - '0';

            int sum = bitA + bitB + carry;
            ans.insert(ans.begin(), (sum % 2) + '0');
            carry = sum / 2;
        }

        if(carry) {
            ans.insert(ans.begin(), '1');
        }

        return ans;
    }
};

int main() {
    Solution s;
    string result = s.addBinary("1010", "1011");
    cout << result << endl;  // Output: 10101
    cout<<result;
    return 0;
}
