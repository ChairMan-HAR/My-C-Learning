#ifndef _VECTOR_H_
#include<iostream>
namespace Run_Vector {

	class Vector
	{
		private:
		double x;
		double y;
		void set_X(double *x);
		void set_Y(double *y);

	public:
		Vector();
		Vector(double x, double y);
		Vector operator+(const Vector & Fx) const;
		Vector operator-(const Vector & Fx) const;
		Vector operator*(int *n) const;
		friend Vector & operator*(Vector & Gx,Vector & Fx);
		friend Vector & operator/(Vector & Gx, Vector & Fx);
		friend std::ostream & operator<<(std::ostream & os,const Vector & Fx);
	};





}














#endif _VECTOR_H_
