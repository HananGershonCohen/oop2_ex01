#pragma once
#include "Operation.h"

class Transpose : public Operation
{
public:
	Transpose();
	~Transpose() = default;
	virtual SqrMatrix calc(SqrMatrix) { return SqrMatrix(); };
	virtual void printName() const {}; // print name tha class (virtual).
private:

};
