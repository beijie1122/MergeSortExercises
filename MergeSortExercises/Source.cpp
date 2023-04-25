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
	int Mid = (s + e) / 2;
	int i = s;
	int j = Mid + 1;
	int k = s;

	while (i <= Mid && j <= e)
	{
		if (x[i] < y[j])
		{
			a[k] = x[i];
			i++;
			k++;
		}
		else
		{
			a[k] = y[j];
			i++;
			k++;
		}
	}
	while (i <= Mid)
	{
		a[k] = x[i];
		k++;
		i++;
	}
	while (j <= e)
	{
		a[k] = y[j];
		k++;
		j++;
	}
}

void mergeSort(int a[], int s, int e)
{
	if (s >= e)
	{
		return;
	}
	int Mid = (s + e) / 2;
	int x[100];
	for (size_t i = 0; i <= Mid; i++)
	{
		x[i] = a[i]; 
	}
	int y[100];
	for (size_t j = Mid + 1; j <= e; j++)
	{
		y[j] = a[j];
	}
	mergeSort(x, s, Mid);
	mergeSort(y, Mid + 1, e);
	MergeArrays(x, y, a, s, e);

}

int Partition(int input[], int s, int e)
{
	int i = s;
	int pivot = input[e];

	for (int j = s; j <= e - 1; j++)
	{
		if (input[j] < pivot)
		{
			std::swap(input[i], input[j]);
			i++;
		}
	}
	std::swap(input[i], input[e]);
	return i;
}

void QuickSort(int input[], int s, int e)
{
	if (s >= e)
	{
		return;
	}
	int p = Partition(input, s, e);
	
	QuickSort(input, s, p - 1);
	QuickSort(input, p + 1, e);
}



int main()
{
	std::vector<int> Array1{ 1, 2, 3, 4, 5 };
	std::vector<int> Array2{ 6, 7 ,8, 9, 10 };
	int MergeTestArray[6]{ 5, 4, 8, 0, 3, 2 };

	int QuickSortArray[7]{ 8, 5, 2, 1, 7, 3, 4 };

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
		std::cout << Array1.at(i) << "\n";
	}
	//PrintArrayInput(Array1, 0);
	
	mergeSort(MergeTestArray, 0, 5);

	for (size_t i = 0; i < 6; i++)
	{
		std::cout << MergeTestArray[i] << "\n";
	}

	QuickSort(QuickSortArray, 0, 6);

	printf("QuickSort Array Outcome: \n");
	for (size_t i = 0; i < 7; i++)
	{
		std::cout << QuickSortArray[i] << "\n";
	}

	return 0;
}