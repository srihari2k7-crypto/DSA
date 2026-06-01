#include <iostream>
#include<vector>
using namespace std;
//
//need O(n) time solution
class Solution
{
    public:
    vector<int> moveZeroes(vector<int>& vec)
    {
        int readidx = 0;
        int writeidx=0;
        for( readidx = 0 ; readidx<vec.size(); readidx++)
        {
            if(vec[readidx]!=0)
            {
                vec[writeidx]=vec[readidx];
                writeidx++;
            }
        }
        while(writeidx<vec.size())
        {
            vec[writeidx]=0;
            writeidx++;
        }
        return vec;
    }
};
int main() {
    vector<int> V = {4,2,1,0,5,0,8};
    
    Solution s1;
    vector<int> sol = s1.moveZeroes(V);
    for (int val: sol)
    {
        cout<<val<<" ";
    }
    return 0;
}
