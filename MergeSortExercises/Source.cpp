#include <iostream>
#include <vector>

void MergeTwoArraysIntoVector(std::vector<int> &Input1, std::vector<int> Input2, int Index)
{
	if (Input2.at(Index) > Input2.size())
	{
		return;
	}
	else
	{
		Input1.push_back(Input2.at(Index));
	}
	MergeTwoArraysIntoVector(Input1, Input2, Index + 1);



}

void PrintArrayInput(std::vector<int> Input1, int Index)
{
	if (Input1.at(Index) >= Input1.size())
	{
		return;
	}
	std::cout << Input1.at(Index);
	PrintArrayInput(Input1, Index + 1);
}

void MergeArrays(int x[], int y[], int a[], int s, int e)
{

}

void mergeSort(int a[], int s, int e)
{
	if (s >= e)
	{
		return;
	}
}



int main()
{
	std::vector<int> Array1{ 1, 2, 3, 4, 5 };
	std::vector<int> Array2{ 6, 7 ,8, 9, 10 };

	//MergeTwoArraysIntoVector(Array1, Array2, 0);

	//std::cout << Array2.size();
	//std::cout << Array2.at(0);

	for (size_t i = 0; i < Array2.size(); i++)
	{
		Array1.push_back(Array2.at(i));
		std::cout << "Pushed Back: " << Array2.at(i) << "\n";
	}

	for (size_t i = 0; i < Array1.size(); i++)
	{
		std::cout << Array1.at(i);
	}


	PrintArrayInput(Array1, 0);
	

	return 0;
}