#include<iostream>
#include<vector>
//linear search implementation with vectors
using namespace std;
class Solution{
		public:
		int linearSearch(vector<int>& vec, int target)
		{
				
				for(int val : vec)
				{
					if (val == target)
					return val;
				}
				return -1;
		}
};
int main()
{
	vector<int> Vector1 = {4 , 1, 2, 7, 6};
	vector<int> Vector2 = {4 , 1, 2, 8, 6};
	
	Solution s1, s2;
	cout<<s1.linearSearch(Vector1,2 )<<endl;
	cout<<s1.linearSearch(Vector2,5 )<<endl;
	return 0;
}
