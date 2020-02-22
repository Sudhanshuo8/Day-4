#include<iostream>

using namespace std;

class Student
{
	int a,b;
	
	public:
		Student()
		{
			cout<<"Enter the value"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<b<<endl;
		}
		void add()
		{
			cout<<a+b<<endl;
		}
		~Student()
		{
			cout<<"Destructer is called";
		}
};
   int main()
   {
   	Student s;
   	s.show();
   	s.add();
   	return 0;
   	
   	
   }
