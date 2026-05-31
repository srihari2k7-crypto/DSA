#include<iostream>
#include<vector>
#include<climits>
//particular pair sum - vectors
using namespace std;
class Solution{
		
		
		public:
		vector<int> pairSum(vector<int>& vec, int target)
		{
				vector<int> sol = {};
				int i = 0;
				int j =  vec.size()-1;
				while(i<j)
				{
						int ps = vec.at(i)+ vec.at(j);
						if(ps>target)
						j--;
						else if(ps<target)
						i++;
						else{
							sol.push_back(i+1);
							sol.push_back(j+1);
							return sol;
						}

				}
				cout<<"\noopsies? no solution huh";
				return sol;
		}
};
int main()
{
	vector<int> Vector1 = {1,2,3,4,6,8};
	Solution s1;
	int tg;
	for(int val : Vector1)
	{
			cout<<val<<"   ";
	}
	cout<<"\nEnter target sum: ";
	cin>>tg;
	cout<<endl;
	vector<int> solution = s1.pairSum(Vector1, tg);
	cout<<"\npair:";
	for(int val : solution)
	{
			cout<<val<<"   ";
	}
	
	return 0;
}
