#include <iostream>
#include <string>
#include "SqrMatrix.h"
#include "Id.h"
#include "Operation.h"
#include <vector>
#include <memory>
#include "Eval.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::vector <std::shared_ptr<Operation>> operVec;
	operVec.push_back(std::make_shared<Id>());

	for (int i = 0; i < operVec.size(); i++)
	{
		cout << i << ". ";
		operVec.at(i)->print();
		cout << endl;
	}

	std::string str;
	std::getline(std::cin, str);
	cout << str << endl;
	if (str == "eval 0 2")
	{
		Eval eval(operVec.at(0),3);
	}
}