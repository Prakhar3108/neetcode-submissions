class Solution {
public:
    bool isValid(string s) {

        map<char, char> mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';

        stack<char> st;
        for(auto it : s){
            if(it == '(' || it == '[' || it == '{'){
                st.push(it);
            } else {
                if(st.empty()) return false;
                if(st.top() != mp[it]) return false;
                st.pop();
            }
        }
        cout << st.empty();

        return st.empty();
    }
};
