#include<iostream>
using namespace std;
class animal{
	public:
		void eat()
		{
			cout<<"animal is eating"<<endl;
		}
			virtual void makesound()=0;
};
class cat:virtual public animal{
	public:
		void makesound()
		{
			cout<<"Meow"<<endl;
		}
};
class dog:virtual public animal{
	public:
		void makesound()
		{
			cout<<"bark"<<endl;
		}
};
int main()
{
	cat b;
	dog d;
	b.eat();
	b.makesound();
	d.eat();
	d.makesound();
	return 0;
	}