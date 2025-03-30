#pragma once
#include "operation.h"

class Scal :public Operation
{
public:
	Scal(int);
	virtual ~Scal() = default;
	virtual SqrMatrix calc(SqrMatrix) override;

private: 
	int m_scalar;
};