#include<iostream>
#include<vector>
//linear search implementation with vectors
using namespace std;
class Solution{
		private:
		void swap(int *a, int* b)
		{
			int temp = *a;
			*a = *b;
			*b = temp;
		}
		public:
		void reverseVector(vector<int>& vec)
		{
				int* first = &vec.at(0);
				int* last = &vec.at(vec.size()-1);
				while(first<last)
				{
						swap(first, last);
						first++;
						last--;
				}
		}
};
int main()
{
	vector<int> Vector1 = {4 , 1, 2, 7, 6};
	vector<int> Vector2 = {4 , 1, 2, 8, 6};
	for(int val : Vector1)
	{
			cout<<val<<"   ";
	}
	Solution s1;
	s1.reverseVector(Vector1 );
	cout<<endl;
	for(int val : Vector1)
	{
			cout<<val<<"   ";
	}
	//cout<<s1.linearSearch(Vector2,5 )<<endl;
	return 0;
}
