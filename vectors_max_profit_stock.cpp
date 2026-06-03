#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution
{
    public:
    int maxProfit(vector<int>& vec)
    {
        int bb = vec[0];
        int mp = INT_MIN;
        for(int val :vec)
        {
            int curr = val - bb;
            mp = (curr>mp)?curr:mp;
            bb = (val<bb)?val:bb;
        }
        return mp;
    }
};
int main()
{
    vector<int> v = {4,6,8,3,1,2};
    Solution s1;
    cout<<"Max profit"<<s1.maxProfit(v);
    return 0;
}

