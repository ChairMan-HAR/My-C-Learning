#include<thread>
#include"Vector.h"

using std::thread;
using std::ostream;
using std::cout;

int main() {
	using namespace Run_Vector;
	Vector Fx(12.38,10.3);
	Vector Gx(1,1);

	cout << "Fx:" << Fx <<'\n';
	cout << "Gx:" << Gx <<'\n';
	cout << "Fx+Gx" << Fx + Gx<<'\n';
	cout << "Fx-Gx" << Fx - Gx<<'\n';
	cout << "Fx*Gx:" << Fx*Gx <<'\n';
	cout << "Fx/Gx" << Fx/Gx<<'\n';	
	std::cin.get();
	std::cin.clear();
	return 0;
}

