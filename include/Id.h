#include "operation .h"

class Id
{
public:
	Id() = default;
	virtual SqrMatrix calc(const SqrMatrix);
	virtual void print() const;
};