#include<iostream>

using namespace std;

/*

*изменить размер массива

*добавить элемент впереди массива

*удалить элемент массива

*/



void FillArray(int*const arr, const int size)



{

	for (int i = 0; i < size; i++)

	{

		arr[i] = rand() % 30;

	}

}



void PrintArray(int*const arr, const int size)

{

	for (int i = 0; i < size; i++)

	{

		cout << arr[i] << "\t" << endl;;

	}

}

void push_front(int *&arr, int &size, const int value)

{

	int *newArray = new int[size + 1];

	for (int i = 0; i < size; i++)

	{

		newArray[i] = arr[i];

	}

	newArray[size] = value;

	size++;

	delete[]arr;

	arr = newArray;

}

void main()

{

	int size = 5;

	int *arr = new int[size];

	FillArray(arr, size);

	PrintArray(arr, size);

	push_front(arr, size, 111);

	PrintArray(arr, size);

	delete[]arr;

}
/*

void push_front(int* &arr, int &n, const int value)
{
	int* new_arr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[size] = value;
	size++;
	delete[]arr;
	arr = new_arr;
}
void push_back(int* &arr, int &size, const int value)
{
	int* new_arr = new int[size + 1];
	new_arr[0] = value;
	for (int i = 0; i < size; i++)
	{
		new_arr[i + 1] = arr[i];
	}
	size++;
	delete[]arr;
	arr = new_arr;
}

void pop_back(int* &arr, int &size)
{
	int* new_arr = new int[size- 1];
	for (int i = 0; i < size - 1; i++)
	{
		new_arr[i] = arr[i];
	}
	size--;
	delete[]arr;
	arr = new_arr;
}
void pop_front(int* &arr, int &size)
{
	int* new_arr = new int[size - 1];
	for (int i = 1; i < size; i++)
	{
		new_arr[i - 1] = arr[i];
	}
	size--;
	delete[]arr;
	arr = new_arr;
}

void erase(int* &arr, int &size, int index)
{
	int* new_arr = new int[size - 1];
	for (int i = 0; i < size; i++)
	{
		if (i >= index)
		{
			new_arr[i] = arr[i + 1];
		}
		else
		{
			new_arr[i] = arr[i];
		}
	}
	size--;
	delete[]arr;
	arr = new_arr;
}
void insert(int*& arr, int &size, int index, int value)
{
	int* new_arr = new int[size + 1];
	new_arr[index] = value;
	for (int i = 0; i < index; i++)
	{
		new_arr[i] = arr[i];
	}
	for (int i = index; i < size; i++)
	{
		new_arr[i+1] = arr[i];
	}
	size++;
	delete[]arr;
	arr = new_arr;
}


*/