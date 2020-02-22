#include<iostream>

using namespace std;

class Box
{
	int l,b,h;
	
	public:
		Box()
		{
			cout<<"Enter the values of l,b,h"<<endl;
			cin>>l>>b>>h;
		}
		
		Box(int input_1)
		{
			l=b=h=input_1;
		}
		Box(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		Box(Box &p)
		{
			l=p.l;
			b=p.b;
			h=p.h;
		}
		void show()
    {
    	cout<<l<<endl<<b<<endl<<h<<endl;
	}
		
};

   
	
	int main()
	{
		Box b1;
	/*	b1.show();
		Box b2(10);
		b2.show();
		Box b3(2,3,4);
		b3.show();*/
	}


