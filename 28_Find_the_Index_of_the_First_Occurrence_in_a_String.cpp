#include<bits/stdc++.h>
#include <numeric>
using namespace std;

class Solution{
public :
    int strStr(string haystack, string needle){
        if(needle.length()>haystack.length()) return -1;
        int index=-1;
        int needlelen = needle.length();
        int haylen = haystack.length();
        for(int i=0;i<haylen-needlelen+1;i++){
            if(needle[0]==haystack[i]){
                index = i;
                int needleindx = 0;
                for(int j=i;j<i+needlelen;j++){
                    if(haystack[j]==needle[needleindx]){
                        needleindx++;
                    }
                    else {
                        index = -1;
                        break;
                    }
                }
                if(index!=-1) break;
            }
        }
        return index;
    }
};
int main(){
    Solution s;
    string haystack = "mississippi", needle = "issip";
    cout<<endl;
    int ret_index = s.strStr(haystack,needle);
    cout<<ret_index;
    return 0;
}