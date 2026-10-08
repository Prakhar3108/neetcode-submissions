class Solution {
public:
    int f(vector<int> &a){
        return a[0]*a[0]  + a[1]*a[1];
    }


    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), [this](vector<int> &a, vector<int> &b){
            return f(a) < f(b);
        });

        return vector<vector<int>>(points.begin(), points.begin() + k);
        
    }
};
