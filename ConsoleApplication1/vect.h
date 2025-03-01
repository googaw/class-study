#pragma once
#include<iostream>
#include<string>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode{RECT,POL};
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();
		//operator overloading
		void show();
		Vector operator+(const Vector& v1) const;
		Vector operator-(const Vector& v2) const;
		Vector operator-() const;
		Vector operator*(double n)const;
		friend Vector operator*(double n, const Vector& v);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	private:
		//private methods for setting values
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();	

	};
}