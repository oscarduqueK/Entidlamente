#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int posMin(const vector<int>& v, int left, int right) //for selection sort
{
	int pos = left;
	for (int i = left + 1; i <= right; ++i)
	{
		if (v[i] < v[pos])
			pos = i;
	}
	return pos;
}

void selectionSort(vector<int>& v)
{
	int last = v.size() - 1;
	for (int i = 0; i < last; ++i)
	{
		int k = posMin(v, i, last);
		swap(v[k], v[i]);
	}

	cout << "Selection Sort: "; 
	//print vector sorted mayou
	for (int a : v)
	{
		cout << a << " ";
	} cout << endl << endl; 
}


void insertionSort(vector<int>& v)
{
	for (int i = 1; i < v.size(); ++i)
	{
		int x = v[i];
		int j = i;
		while (j > 0 && v[j - 1] > x) 
		{
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x; 
	}

	cout << "Insertion Sort: ";
	//print vector insertion mayou
	for (int a : v) 
	{
		cout << a << " "; 
	} cout << endl; 

}

void main()
{
	vector<int> v = { 4, 2, 1, 3, 5, 8, 6, 7 };
	
	selectionSort(v); // se garantiza q v estará ordenado
	
	insertionSort(v);


	
}