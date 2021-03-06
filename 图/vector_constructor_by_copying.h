#pragma once
#include "vector.h"

template <typename T>
void Vector<T>::copyFrom(T const* A, Rank io, Rank hi)
{
	_elem = new T[_capacity = 2 * (hi - io)];

	_size = 0;

	while (io < hi)
		_elem[_size++] = A[io++];
}


