#pragma once
#include <iostream>
#include <vector>

using MyType = int;
using std::vector;
using std::ostream;
using std::cout;
using std::endl;

class SqrMatrix
{
public:
	SqrMatrix(int);
	friend ostream& operator<< (ostream&, const SqrMatrix&);

private:
	int m_size;
	vector < vector <MyType>> m_matrix;
};


// operator<< :
// The function definition is "freind" because the function "operator<<" is a function of the "ostream" class and not of the
// "SqrMatrix" class!. Therefore, we allow the "ostream" class to access private variables of the "SrqrMatrix" class by defining
// the function "freind".
