class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, int k, int n, vector<int> & t){
        if(i == 10){
            if(k == 0 && n == 0){
                ans.push_back(t);
            }
            return;
        }
        if(k!=0 && i<=n){
            t.push_back(i);
            solve(i+1,k-1,n-i,t);
            t.pop_back();
        }
        solve(i+1,k,n,t);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> t;
        solve(1,k,n,t);
        return ans;
    }
};
