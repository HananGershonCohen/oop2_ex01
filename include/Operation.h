#pragma once
#include <string>
#include "SqrMatrix.h"
// A base class that groups together all the operations that can be performed on the matrix.
class Operation
{
public:
	Operation(std::string);
	virtual ~Operation() = default;
	virtual SqrMatrix calc(SqrMatrix) { return SqrMatrix(); };
	virtual SqrMatrix calc(SqrMatrix,int) { return SqrMatrix(); };
	virtual std::string getName() const { return m_name; }; // print name tha class (virtual).

protected:
	std::string m_name;
};