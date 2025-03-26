#include "Transpose.h"

Transpose::Transpose() : Operation("Transpose") {}

SqrMatrix Transpose::calc(SqrMatrix matrix)
{
	matrix.transpose();

	return matrix;
}

void Transpose::printName() const
{
	cout << m_name;
}
