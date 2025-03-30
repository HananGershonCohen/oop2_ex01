#pragma once
#include "Operation.h"

class Transpose : public Operation
{
public:
	Transpose();
	virtual ~Transpose() = default;
	virtual SqrMatrix calc(SqrMatrix) override;
};
