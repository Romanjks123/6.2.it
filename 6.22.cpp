#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void Sort(int* a, const int size) // ���������� ������ �� ����������.
{ // ��������� ������ - ���. ��������
	for (int i = 0; i < size - 1; i++){
			// n-1 ��� ������ ��������� �������
			int max = i; // ������� �-� ������� ���������
			for (int j = i + 1; j < size; j++)
					if (a[j] > a[max]) // ���� �������� ������� ������
						max = j; // ����, ���� ������� ���������
					// - �����'����� ���� ������
					// ���� ������ �������� � �������� i �� imin
					int tmp = a[i];
					a[i] = a[max];
					a[max] = tmp;
					

	}
}int main()
{
	srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����
	const int n = 9;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Sort(a, n);
	Print(a, n);
	return 0;
}