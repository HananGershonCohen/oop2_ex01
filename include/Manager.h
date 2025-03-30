#pragma once
#include <iostream>
#include <string>
#include "SqrMatrix.h"
#include "Id.h"
#include "Operation.h"
#include <vector>
#include <memory>
#include "Eval.h"
#include "Transpose.h"
#include "Scalar.h"

using std::cout;
using std::cin;
using std::endl;

class Manager
{
public:
	Manager();
	void run();

private:
	std::vector <std::shared_ptr<Operation>> m_operations;
	Eval m_eval;
	bool m_need2exitFromLoop = false;
	void showMenu();
	void readCommand(std::string& command, int& num1, int& num2);
	void processCommand(std::string& command, int& num1, int& num2);
	
};