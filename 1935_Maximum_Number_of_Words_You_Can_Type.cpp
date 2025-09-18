#include<bits/stdc++.h>
using namespace std;
void printVector(vector<string> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}
class Solution{
public :
    int bFAcanBeTypedWords(string text, string brokenLetters){
        vector<string> splitted_text;
        string temp = "";
        for(int i=0;i<text.length();i++){
            if(text[i]==' '){
                splitted_text.push_back(temp);
                temp = "";
            }
            else{
                temp+=text[i];
            }
        }
        splitted_text.push_back(temp);
        printVector(splitted_text);
        int count=0;
        for(int i=0;i<splitted_text.size();i++){
            bool flag = 0;
            for(int k=0;k<splitted_text[i].length();k++){
                for(int j=0;j<brokenLetters.length();j++){
                    if(splitted_text[i][k]==brokenLetters[j]){
                        flag=1;
                        break;
                    }
                } 
                if(flag==1){
                    break;
                }
            }
            if(flag==1) count++;
        }
        return count;
    }
    int canBeTypedWords(string text, string brokenLetters){
        int count=0,countSpace=0;
        bool flag = 0;
        for(int i=0;i<text.length();i++){
            if(text[i]==' '){
                countSpace++;
                flag = 0;
                continue;
            }
            for(int j=0;j<brokenLetters.length();j++){
                if(flag) break;
                if(text[i]==brokenLetters[j]){
                    count++;
                    flag=1;
                    break;
                }
            } 
        }
        if(brokenLetters=="") return countSpace+1;
        return countSpace+1-count;
    }

};
int main(){
    Solution s;
    string text = "leet code leet", brokenLetters = "lte";
    cout<<endl;
    // cout<<s.bFAcanBeTypedWords(text,brokenLetters);
    cout<<s.canBeTypedWords(text,brokenLetters);
    
    return 0;
}