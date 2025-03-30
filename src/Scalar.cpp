#include "Scalar.h"

Scal::Scal(int scal) :Operation(("scal ") + std::to_string(scal)), m_scalar(scal) {}

SqrMatrix Scal::calc(SqrMatrix matrix)
{
	matrix.scalar(m_scalar);
	return	matrix;
}
