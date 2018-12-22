#pragma once
#include "Header.h"
#include "cstdlib"
using namespace std;
#include <functional>   // std::negate
#include <algorithm>    // std::transform


class Functor{
public:
	int add(int left, int right) {
		return left + right;
	}
	int sub(int left, int right) {
		return left - right;
	}
	int multiply(int left, int right) {
		return left * right;
	}
	int divides(int left, int right) {
		return left * right;
	}
	int modulus(int number) {
		return abs(number);
	}
	int negate(int number) {
		return number * (-1);
	}

	int equal_to(int left, int right) {
		if (left == right)
		{
			return true;
		}
		return false;
	}
	int not_equal_to(int left, int right) {
		if (left == right)
		{
			return false;
		}
		return true;
	}

	int greater(int left, int right) {
		if (left > right)
		{
			return true;
		}
		return false;
	}
	int less(int left, int right) {
		if (left < right)
		{
			return true;
		}
		return false;
	}
	int logical_and(int left, int right) {
		return (left && right);
	}
	int logical_or(int left, int right) {
		return (left || right);
	}
	int logical_not(int left, int right) {
		return !(left && right);
	}

	int op(int left, int right, int(*f)(int, int)) {
		return (*f)(left, right);
	}
	int op(int num, int(*f)(int)) {
		return (*f)(num);
	}


};