#include<iostream>
using namespace std;
class interface{
	public:
		virtual void print()=0;
};
class image:virtual public interface{
	public:
		void print()
		{
			cout<<"printing images"<<endl;
}
};
class document:virtual public interface{
	public:
		void print(){
			cout<<"printing documents"<<endl;
		}
};
int main()
{
	image b2;
	b2.print();
	document d2;
	d2.print();
	return 0;
	
}