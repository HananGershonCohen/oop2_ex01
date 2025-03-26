#include "Scalar.h"

Scal::Scal() :Operation("Scal") {}


SqrMatrix Scal::calc(SqrMatrix matrix, int num)
{
	matrix.scalar(num);
	return	matrix;
}

void Scal::printName() const
{
	cout << m_name;
}
