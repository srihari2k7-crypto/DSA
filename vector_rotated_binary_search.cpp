#include<iostream>
#include<vector>
using namespace std;
class Solution
{
        public:
                int binarySearch(vector<int>& vec, int target, int start = 0, int end = 0)
                {
                        
                        end = vec.size()-1;
                        while(start<=end)
                        {
                                int mid = start + (end-start)/2;
                                if(vec[mid]==target)
                                {
                                        return mid;
                                }
                                else if(vec[mid]>target)
                                {
                                        end = mid-1;
                                }
                                else if(vec[mid]<target)
                                {
                                        start = mid+1;
                                }
                        }
			return -1;

                }
		int rotatedBinarySearch(vector<int>& vec, int target)
		{
			int start = 0;
			int end = vec.size()-1;
			while(start<=end)
			{
				int mid = start + (end-start)/2;
				if(vec[start]<=target && target<=vec[mid])
				{
					return binarySearch(vec, target, start, mid);
				}
				else 
				{
					start=mid+1;
				}
			}
			return -1;
		}
};
int main()
{
        vector<int> samp = {7,9,12,0,1,5};
        for(int val : samp)
        {
                cout<<val<<" ";
        }
        cout<<endl;
        int tar =1;
        Solution s1;
        cout<<s1.rotatedBinarySearch(samp, tar)<<endl;
}
