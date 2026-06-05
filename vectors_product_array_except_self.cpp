#include<iostream>
#include<vector>
using namespace std;
class Solution
{
	public:
	vector<int> productArray(vector<int> nums)
	{
		vector<int>sol(nums.size(),1);
		for(int i = 0;i<nums.size();i++)
		{
			if(i>0)
			{
				sol[i]=nums[i-1]*sol[i-1];
			}
		}
		for(int val: sol)
		
		{
			cout<<val<<" "<<endl;
		}
		int tp = 1;
		for(int i = nums.size()-1;i>=0;i--)
		{	
			
			if(i<nums.size()-1)
			{
				tp *= nums[i+1];
				cout<<"tp: "<<tp<<endl;
				sol[i]*=tp;
			}
		}
		return sol;

	}
};
int main()
{
	Solution s1;
	vector<int> v = {1,2,3,4,5};
	vector<int> vs = s1.productArray(v);
	for(int val : vs)
	{
		cout<<val<<" ";
	}
	return 0;
}
