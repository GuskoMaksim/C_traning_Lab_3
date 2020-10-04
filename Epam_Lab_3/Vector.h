#pragma once
#include <iostream>
#include <strstream> 

using namespace std;

class Vector
{
protected:
	int _size = 0;
	int* _arr = NULL;
public:
	Vector() :
		_size(NULL)
	{

	}
	Vector(int size) :
		_size(size)
	{
		_arr = new int[size];
	}
	Vector(int size, int* arr) :
		_size(size)
	{
		_arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			_arr[i] = arr[i];
		}
	}
	void set_size(int size)
	{
		if (_arr != NULL)
		{
			delete[]_arr;
		}
		_arr = new int[size];
		_size = size;
	}
	void set_arr(int size, int *arr)
	{
		if (_arr != NULL)
		{
			delete[]_arr;
		}
		_arr = new int[size];
		_size = size;
		for (int i = 0; i < _size; i++)
		{
			_arr[i] = arr[i];
		}
	}
	void Z1()
	{
		float average = 0;
		for (int i = 0; i < _size; i++)
			average += (float)_arr[i];
		for (int i = 0; i < _size; i++)
		{
			for (int k = i+1; k < _size; k++)
			{
				if (_arr[i] < _arr[k])
					swap(_arr[i], _arr[k]);
			}
		}
		cout << "Min: " << _arr[_size - 1] << endl;
		cout << "Max: " << _arr[0] << endl;
		cout << "Average: " << average / (float)_size << endl;
	}
	void Z2()
	{
		int max = _arr[0];
		for (int i = 1; i < _size; i++)
		{
			if (_arr[i] > max)
				max = _arr[i];
		}
		for (int i = 0; i < _size; i++)
		{
			if (_arr[i] < 0)
				_arr[i] = max;
		}
	}
	void get_arr()
	{
		if ((_size != 0) && (_arr != NULL))
			for (int i = 0; i < _size; i++)
			{
				cout << _arr[i] << " ";
			}
		cout << endl;
	}
	~Vector()
	{
		delete[]_arr;
	}
};