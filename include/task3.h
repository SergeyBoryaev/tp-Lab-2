#ifndef TASK3_H
#define TASK3_H

#include <iostream>

template <typename T, size_t n> 
void map(T arr[], T(*change)(T))
{
	for (size_t i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}

#endif 
