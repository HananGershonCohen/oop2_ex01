#pragma once
#include "Operation.h"

class Transpose : public Operation
{
public:
	Transpose();
	virtual ~Transpose() = default;
	virtual SqrMatrix calc(SqrMatrix) override;
	virtual void printName() const override; // print name tha class (virtual).
};
