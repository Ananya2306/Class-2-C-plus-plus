#include<iostream>
using namespace std;

class Billboard
{
	private:
		string title;
		
		public:
			void setTitle(string x)
			{
				title = x;
			}
			string getTitle()
			{
				return title;
			}
};

int main()
{
	Billboard bill;
	bill.setTitle("Top 5 Songs of 2022");
	cout<<bill.getTitle();
	return 0;
}
