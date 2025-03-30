#include "Transpose.h"

Transpose::Transpose() : Operation("Transpose") {}

SqrMatrix Transpose::calc(SqrMatrix matrix)
{
	matrix.transpose();
	return matrix;
}