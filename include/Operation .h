#include "SqrMatrix.h"

class Operation
{
public:
	Operation() = default;
	~Operation() = default;
	virtual SqrMatrix calc(SqrMatrix) {}; 
	virtual void print() const {}; // print name tha class (virtual).
};