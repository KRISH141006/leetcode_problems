// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

#include<iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int length = s.size(),sum=0;
        for(int i=length-1;i>=0;i--){
            int curr=roman(s[i]);
            if(i==length-1){
                sum = curr;
            }else{
                int prev = roman(s[i+1]);
                if(prev>curr){
                    sum = sum - curr;
                }
                else{
                    sum +=curr;
                }
            }
        }
        return sum;
    }
    int roman(char c){

        c = toupper(c);
        switch (c)
        {
            case 'I': return 1; break;
            case 'V': return 5; break;
            case 'X': return 10; break;
            case 'L': return 50; break;
            case 'C': return 100; break;
            case 'D': return 500; break;
            case 'M': return 1000; break;
            default: return 0; break;
        }
    }
};

int main(){

    Solution s;
    cout<<s.romanToInt("XXX");
    return 0;
}
