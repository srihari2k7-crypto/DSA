#include<iostream>
#include<vector>
#include<climits>
//moore's algo, majority element finder
using namespace std;
class Solution{
		
		
		public:
		int majorityElement(vector<int>& vec)
		{	
				int freq = 0;
				int ans = vec[0];
				for(int val : vec)
				{
							if(freq==0)
							{ans = val;}
							if(ans == val)
							{freq++;}
							if(ans!=val)
							{freq--;}

				}
				return ans;
		}
};
int main()
{
	vector<int> Vector1 = {4 , 4, 3,3,3,3};
	Solution s1;
	
	for(int val : Vector1)
	{
			cout<<val<<"   ";
	}
	cout<<endl;
	cout<<s1.majorityElement(Vector1)<<endl;
	
	return 0;
}
