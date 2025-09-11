#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isLeapYear(int year){
        bool leap_year = false;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) leap_year = true;
                else leap_year = false;
            }
            else leap_year = true;
        }            
        return leap_year;
    }

    int dayOfYear(string date){
        string s1,s2,s3;
        int year,month,day,ans=0;
        for(int inx=0;inx<date.length();inx++){
            if(inx<4) s1+=date[inx];
            else if(inx>4 & inx<7) s2+=date[inx];
            else if(inx>7) s3+=date[inx];
        }
        year = stoi(s1);
        month = stoi(s2);
        day = stoi(s3);
        if(isLeapYear(year)){
            switch(month){
                case 1:ans+=0;break;
                case 2 : ans+=31;break;
                case 3 :ans+=59;break;
                case 4 : ans+=90;break;
                case 5 : ans+=120;break;
                case 6 : ans+=151;break;
                case 7 : ans+=181;break;
                case 8 : ans+=212;break;
                case 9 : ans+=243;break;
                case 10 : ans+=273;break;
                case 11 : ans+=304;break;
                case 12 : ans+=334;break;
            }
        }
        else{
            switch(month){
                case 1:ans+=0;break;
                case 2 : ans+=31;break;
                case 3 :ans+=60;break;
                case 4 : ans+=91;break;
                case 5 : ans+=121;break;
                case 6 : ans+=152;break;
                case 7 : ans+=182;break;
                case 8 : ans+=213;break;
                case 9 : ans+=244;break;
                case 10 : ans+=274;break;
                case 11 : ans+=305;break;
                case 12 : ans+=335;break;
            }
        }   
        ans+=day;
        return ans;    
    }
};
int main(){
    Solution s;
    // cout<<s.dayOfYear("2003-03-01");
    cout<<s.isLeapYear(2000);
    return 0;
}