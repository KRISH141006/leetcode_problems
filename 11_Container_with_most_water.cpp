#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
int maxArea(vector<int>& height){
        //Simpler approach
        int width,length,left=0,right=height.size()-1,area=0,tempArea;
        // for(int i = 0;i<height.size();i++){
        //     for(int j = i+1;j<height.size();j++){
        //         width = j-i;
        //         length = min(height[i],height[j]);
        //         if(area<length*width)
        //             area = length*width;
        //     }
        // }
        // return area;
        //Optimum approach
        while(left<right){
            width = right - left;
            length = min(height[left],height[right]);
            tempArea = length*width;
            if(area<tempArea)
                area = tempArea;
            if(height[left]<=height[right]) left++;
            else right--;
        }
        return area;
    }
};
int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(height)<<endl;    
    return 0;
}