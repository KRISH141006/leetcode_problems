#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string mergeAlternately(string word1, string word2) {
        if(word1.empty() && word2.empty()) return "";
        if(word1.empty()) return word2;
        if(word2.empty()) return word1;
        string answer = "";
        int length1=word1.length(),length2=word2.length();
        int indx1=0,indx2=0;
        int len = length1>length2 ? 2*length2 : 2*length1;
        for(int i=1;i<=len;i++){
            if(i%2!=0) {
                answer += word1[indx1];
                indx1++;   
            }
            else {
                answer += word2[indx2];
                indx2++;
            }
        }
        if(length1>length2) answer += word1.substr(indx1,length1);
        else answer += word2.substr(indx2,length2);
        return answer;
    }
};
int main(){
    Solution s;
    string word1 = "abc", word2 = "pqr";
    cout<<s.mergeAlternately(word1,word2);
    return 0;
}