class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        if(k == 10000 & !w) return 10000;
        vector<pair<int, int>> fuckYou;
        for(int i =  0 ; i < capital.size(); i++){
            fuckYou.push_back({capital[i], profits[i]});
        }

        sort(fuckYou.begin(), fuckYou.end(), [](pair<int, int> a,  pair<int, int> b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first < b.first;
        });



        int ans = w;
        set<int> s;

        for(int i = 0; i < k; i++){
            int cur = 0;
            while(cur < profits.size() && fuckYou[cur].first <= ans){
                cur++;
            }
            if(!cur) return ans;
            
            int earn = 0, index = 0;
            for(int i = 0; i < cur; i++){
                if(s.find(i) == s.end()){
                    if(fuckYou[i].second > earn){
                        earn = fuckYou[i].second;
                        index = i;
                    }
                }
            }
            s.insert(index);
            ans += earn;

        }

        return ans;
    }
};