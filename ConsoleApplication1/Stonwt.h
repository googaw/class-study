//¼ÆËãÓ¢°÷+Ó¢Ê¯
#pragma once

#include<iostream>
#include<string>

namespace STONEWT
{
	class Stonewt
	{
	public:
		Stonewt(int a,int b);
		~Stonewt();
		void show();
		friend Stonewt operator*(double a, const Stonewt obj);

	private:
		int pound;
		int stones;
		
	};




}
