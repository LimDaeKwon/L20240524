#include<iostream>
using namespace std;

void InsertRandomIndex(int*& Array , int& Size , int RandomIndex , int RandomNumber)
{
	int* Temp = new int[Size + 1];
	int ArrayIndex = 0;
	
	for (int Index = 0; Index < Size+1; ++Index)
	{
		if (RandomIndex == Index)
		{
			Temp[RandomIndex] = RandomNumber;
			continue;
		}
		Temp[Index] = Array[ArrayIndex++];
	}
	

	delete[] Array;

	Array = Temp;
	Size++;
}

int main()
{
	srand(time(nullptr));
	int Size = 10;
	int RandomIndex = rand() % Size;
	int* Array = new int[Size];
	int RandomNumber = 0;

	cin >> RandomNumber;
	

	for (int Index = 0; Index < Size; Index++)
	{
		Array[Index] = Index + 1;
	}
	InsertRandomIndex(Array, Size, RandomIndex, RandomNumber);

	for (int Index = 0; Index < Size; Index++)
	{
		cout << Array[Index] << " ";
	}
	

	delete[] Array;


	return 0;
}