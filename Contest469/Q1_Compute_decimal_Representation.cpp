#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> ans;
    vector<int> decimalRepresentation(int n){
        Computepower(n);
        return ans;
    }
    void Computepower(int n){
        if(n==0) return;
        if(n<=10){
            ans.push_back(n);
            cout<<"n is : "<<n<<endl;
            return;
        }
        int digit = 0,copyn = n;
        cout<<"n is :"<<n<<endl;
        while(n>0){
            n = n/10;
            digit++;
        }
        cout<<"digit is :"<<digit<<endl;

        double power = pow(10,digit-1);
        cout<<"power is : "<<power<<endl;
        int num = (copyn/power);
        cout<<"num is : "<<num<<endl;
        ans.push_back(num*power);
        Computepower(copyn-num*power);
    }
};
int main(){
    Solution s;
    vector<int> ans = s.decimalRepresentation(125);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}