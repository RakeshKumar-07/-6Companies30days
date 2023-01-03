class Solution {
public:
    string getHint(string secret, string guess) {
        int b = 0, c = 0;
        int n = secret.size();
        map<int,int> m1, m2;
        for(int i=0;i<n;i++){
            if(secret[i] == guess[i])
                b++;
            else{
                m1[secret[i]-'0']++;
                m2[guess[i]-'0']++;
            }
            
        }
        for(auto i : m1){
            if( m1.find(i.first) != m2.end())
            c += min(m2[i.first], i.second);
        }
        string ans = to_string(b) + "A" + to_string(c) + "B";
        return ans;
    }
};
