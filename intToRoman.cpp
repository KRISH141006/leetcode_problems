#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

class Solution {
public:
// simple but very bad mathod.....
    // string intToRoman(int num) {
    //     string ans="";
    //     int cnt=0;
    //     vector<long int> nums;
    //     for(int i=0;num>0;i++){
    //         nums.insert(nums.begin()+i,num%10);
    //         num /=10;
    //         cnt++;
    //     }
    //     for(int i=0;i<cnt;i++){
    //         if(i==2)
    //         nums[i] = (nums[i] * pow(10,i)) + 1;
    //         else
    //         nums[i] = nums[i] * pow(10,i);
    //     }
    //     reverse(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size();i++){
    //         switch(nums[i]){
    //             case 3000 : ans +="MMM";break;
    //             case 2000 : ans +="MM";break;
    //             case 1000 : ans +="M";break;
    //             case 900  : ans +="CM";break;
    //             case 800  : ans +="DCCC";break;
    //             case 700  : ans +="DCC";break;
    //             case 600  : ans +="DC";break;
    //             case 500  : ans +="D";break;
    //             case 400  : ans +="CD";break;
    //             case 300  : ans +="CCC";break;
    //             case 200  : ans +="CC";break;
    //             case 100  : ans+="C";break;
    //             case 90   : ans+="XC";break;
    //             case 80   : ans+="LXXX";break;
    //             case 70   : ans+="LXX";break;
    //             case 60   : ans+="LX";break;
    //             case 50   : ans +="L";break;
    //             case 40   : ans +="XL";break;
    //             case 30   : ans +="XXX";break;
    //             case 20   : ans +="XX";break;
    //             case 10   : ans +="X";break;
    //             case 9    : ans +="IX";break;
    //             case 8    : ans +="VIII";break;
    //             case 7    : ans +="VII";break;
    //             case 6    : ans +="VI";break;
    //             case 5    : ans +="V";break;
    //             case 4    : ans +="IV";break;
    //             case 3    : ans +="III";break;
    //             case 2    : ans +="II";break;
    //             case 1    : ans +="I";break;
    //         }
    //     }

    //     return ans;
    // }
    string intToRoman(int num){     
        string ans="";
        vector<string> signs = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> nums = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        
        for(int i=0;i<signs.size();i++){
            if(num>=nums[i]){
                ans+=signs[i];
                num-=nums[i];
            }
        }

        return ans;

    }
};

int main(){

    Solution s;
    s.intToRoman(1234);

    return 0;
}