class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,int> mp;
        for(auto x: reservedSeats){
            if(mp.contains(x[0]))
                mp[x[0]] |= 1<<x[1];
            else mp[x[0]] = 1<<x[1];
        }

        int cnt = 0;
        for(auto &[key, v] : mp) {
            if(!(60 & v)) {
                v |= 1<<4;
                cnt++;
            }
            if(!(960 & v)){
                v |= 1<<7;
                cnt++;
            }
            if(!(240 & v)){
                cnt++;
            }
            
        }
        cnt += 2 * (n - (int)mp.size());
        return cnt;
    }
};