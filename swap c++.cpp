#include <iostream>
using namespace std;
class xyz
{
	private: 
	int num=100;
	public:
	friend void disp(xyz obj);
};
void disp(xyz obj)
{
	cout<<obj.num;
}
int main()
{
	xyz obj1;
	disp(obj1);
}
