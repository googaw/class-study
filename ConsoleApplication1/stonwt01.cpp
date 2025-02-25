#include"Stonwt.h"
using namespace std;
namespace STONEWT
{
	Stonewt::Stonewt(int a, int b)
	{
		pound = a;
		stones = b;
	}

	Stonewt::~Stonewt()
	{
	}

	Stonewt operator*(double n, const Stonewt obj_class)
	{
		Stonewt sum(0, 0);
		sum.stones = int(n * obj_class.stones) % 14;
		sum.pound = n * obj_class.pound + n * obj_class.stones / 14;
		return sum;
	}

	void Stonewt::show()
	{
		cout << "total:" << pound << "pound" << stones << "stones";
	}


}
