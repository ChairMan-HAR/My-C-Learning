#include"Vector.h"

using namespace Run_Vector;

Vector::Vector() {
	x = 0;
	y = 0;
};

Vector::Vector(double p_x, double p_y) {
	x = p_x;
	y = p_y;
};

Vector Vector::operator+(const Vector & Fx) const
{
	return Vector(x + Fx.x, y + Fx.y);
};

Vector Vector::operator-(const Vector & Fx) const
{
	return Vector(x - Fx.x, y - Fx.y);
}

Vector & Run_Vector::operator*(Vector & Fx,Vector & Gx)
{
	//Vector mult = Gx;
	Fx.x *= Gx.x;
	Fx.y *= Gx.y;
	return Fx;
}

Vector Vector::operator*(int *n) const
{

	return Vector(x**n, y**n);
};

Vector & Run_Vector::operator/(Vector & Fx, Vector & Gx)
{
	Fx.x /= Gx.x;
	Fx.y /= Gx.y;
	return Fx;
	
}

std::ostream & Run_Vector::operator<<(std::ostream & os, const Vector & Fx)
{
	
	os << "("<<Fx.x << ',' << Fx.y<<')';
	return os;
}