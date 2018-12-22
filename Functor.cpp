#include <header>


class Functor{
	double add(double left, double right) {
		return left + right;
	}

	double multiply(double left, double right) {
		return left * right;
	}

	double binary_op(double left, double right, double(*f)(double, double)) {
		return (*f)(left, right);
	}

}