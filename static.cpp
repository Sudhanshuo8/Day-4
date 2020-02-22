#include<iostream>
using namespace std;
class demo
{
	static int a;
	public:
		void get()
		{
			static cout<<"enter an integer:";
			cin>>a;
		}
	static 	void show()
		{
			cout<<a;
			cout<<a+1;
			
		}
};
int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
