#include<iostream>
using namespace std;
class vehicle{
	public:
	void fullup()
	{
		cout<<"filling up the tank"<<endl;
	}
	virtual void drive()=0;
};
class electricvehicle{
	public:
		virtual void chargebattery()=0;		
};
class car: virtual public vehicle{
	public:
		void drive()
		{
			cout<<"he drives the car"<<endl;
		}
};
class electriccar:virtual public vehicle, virtual public electricvehicle{
	public:
		void drive(){
	cout<<"he is driving"<<endl;		
		}
		void chargebattery()
		{
			cout<<"charging battery"<<endl;
		}
};
int main()
{
car b;
electriccar d;
b.drive();
b.fullup();
d.chargebattery();
d.drive();
return 0;
}