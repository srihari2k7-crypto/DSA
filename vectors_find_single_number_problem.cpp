#include<iostream>
#include<vector>
//finding one unique element in a vector (using xor operation)
using namespace std;
class Solution{
		public:
		int findSingleNum(vector<int>& vec)
		{
				int ans = 0;
				for(int val : vec)
				{
					ans = ans ^ val;
				}
				return ans;
		}
};
int main()
{
	vector<int> Vector = {4 , 1, 2, 1, 2};
	Solution s1;
	cout<<s1.findSingleNum(Vector);
	return 0;
}