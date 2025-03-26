#pragma once
#include "Operation.h"
#include <memory>

// "eval" class:
// The class knows how to take the operation number from the list of operations, and execute the operation.

class Eval
{
public:
	Eval() = default;
	void evaluate(std::shared_ptr<Operation>, int);
};