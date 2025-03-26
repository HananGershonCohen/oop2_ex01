#pragma once
#include "operation.h"

class Scal :public Operation
{
public:
	Scal();
	virtual ~Scal() = default;
	virtual SqrMatrix calc(SqrMatrix,int) override;
	virtual void printName() const;
};