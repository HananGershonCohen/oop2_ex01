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

int main()
{
	std::vector <std::shared_ptr<Operation>> operVec;
	operVec.push_back(std::make_shared<Id>());
	operVec.push_back(std::make_shared<Transpose>());


	Eval eval;
	std::string str;

	while(true)
	{
		for (int i = 0; i < operVec.size(); i++)
		{
			cout << i << ". ";
			operVec.at(i)->printName();
			cout << endl;
		}

		
		std::getline(std::cin, str);
		cout << str << endl;
		if (str == "eval 0 2")
		{
			eval.evaluate(operVec.at(1), 3);
		}
	}
}