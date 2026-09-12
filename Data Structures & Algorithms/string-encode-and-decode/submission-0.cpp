class Solution {
public:
    pair<int, int> fun(string s, int i){
        int num = 0;
        while(s[i] != '-'){
            num *= 10;
            num = num + s[i] - '0';
            i++;
        }
        return {num, i};
    }

    string encode(vector<string>& strs) {
        string ans;
        for(auto it : strs){
            ans += to_string(it.length());
            ans += "-";
            ans += it;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string> strs;
        for(int i = 0; i < s.length(); i++){
            auto it = fun(s, i);
            i = it.second;
            int num = it.first;

            cout << i << " " << num << endl;

            strs.push_back(s.substr(i+1, num));
            i += num;
        }

        return strs;
    }
};
