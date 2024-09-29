#include<iostream>
#include<conio.h>
using namespace std;
class BGNU{
public:
void fee()
{
	cout<<"your second smester fee is 30k"<<endl;
}
void merit()
{
	cout<<"Your addmission has been conformed on the base of merit"<<endl;
}
virtual void sport()=0;
virtual void transport()=0;
virtual void scholarship()=0;};
class IT:public BGNU{
	public:
		void sport()
		{
			cout<<"i will participate in sport"<<endl;
		}
		void transport(){
			cout<<"transport is neccessary for me for coming university"<<endl;
		}
};
class course:public IT{
	public:
		void scholarship()
		{
		cout<<"i have been get my scholarship"<<endl;}
};
int main(){
	course t;
	t.fee();
	t.merit();
	t.transport();
	t.sport();
	t.scholarship();
	return 0;
}