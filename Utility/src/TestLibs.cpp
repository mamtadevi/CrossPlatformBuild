
#include <iostream>
#include "EMVUtils.h"
using namespace std;
int main()
{
	EMVUtils testEMVUtils(2,6);
	double result = testEMVUtils.testMul();
	
	cout<< "Execution successful" << endl;
	return 0;

}
