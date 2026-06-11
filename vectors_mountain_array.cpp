#include<iostream>
#include<vector>
using namespace std;
class Solution
{
        public:
                int mountainArray(vector<int>& vec)
                {
                        int start = 0;
                        int end = vec.size()-1;
                        while(start<end)
                        {
                                int mid = start + (end-start)/2;
                                
                                if(vec[mid]<vec[mid+1])
                                {
                                        start= mid+1;
                                }
                                else 
                                {
                                        end = mid;
                                }
                        }
                        return start;

                }
};
int main()
{
        vector<int> samp = {0,1,6,12,3,1};
        for(int val : samp)
        {
                cout<<val<<" ";
        }
        cout<<endl;
       
        Solution s1;
        cout<<s1.mountainArray(samp)<<endl;
}
