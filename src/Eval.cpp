#include "Eval.h"

Eval::Eval(std::shared_ptr<Operation> ptr , int size)
{
	SqrMatrix matrix(size);
	cout << " enter " << size * size << " value for MATRIX :size " << size << " X " << size << endl;
	cin >> matrix;
	cout << "this MATRIX " << endl;
	cout << matrix;

	cout << "send to class Id";
	SqrMatrix newMatrix = ptr->calc(matrix);
	cout << " NEWMATRIX " << endl;
	cout << newMatrix;
}
