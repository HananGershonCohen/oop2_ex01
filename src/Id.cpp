#include "Id.h"


Id::Id() :Operation("Id")
{
}

SqrMatrix Id::calc(const SqrMatrix matrix)
{
	return matrix;
}

void Id::print() const
{
	cout << "id ";
}
