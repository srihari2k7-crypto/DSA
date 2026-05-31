#include<iostream>
#include<vector>
#include<climits>
//kadane's algorithm - vectors
using namespace std;
class Solution{
		int max(int a, int b)
		{
			if(a>b)
			{
					return a;
			}
			return b;
		}
		
		public:
		int maxSubarraySum(vector<int>& vec)
		{
				int curr = 0;
				int Max = INT_MIN;
				for(int val : vec){
					curr += val;
					Max = max(curr, Max);
					if(curr<0)
					{
						curr = 0;
					}
				}
				return Max;
		}
};
int main()
{
	vector<int> Vector1 = {4 , -1, 2, 7,- 6};
	
	for(int val : Vector1)
	{
			cout<<val<<"   ";
	}
	Solution s1;
	
	cout<<endl;
	cout<<s1.maxSubarraySum(Vector1);
	//cout<<s1.linearSearch(Vector2,5 )<<endl;
	return 0;
}
