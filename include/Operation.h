#pragma once
#include "SqrMatrix.h"

// A base class that groups together all the operations that can be performed on the matrix.
class Operation
{
public:
	Operation() = default;
	~Operation() = default;
	virtual SqrMatrix calc(SqrMatrix) = 0;
	virtual void print() const = 0; // print name tha class (virtual).
};