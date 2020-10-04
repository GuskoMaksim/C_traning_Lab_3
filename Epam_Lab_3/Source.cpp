#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	int f_arr[] = { 1,2,4,5,7,10,200,0,-1,54 };
	int s_arr[] = { -10,2,34,-100,999,2,3,4,-120,9 };
	Vector f(10, f_arr);
	Vector s(10);
	s.set_arr(10, s_arr);
	f.get_arr();
	s.get_arr();
	f.Z1();
	s.Z2();
	f.get_arr();
	s.get_arr();
}