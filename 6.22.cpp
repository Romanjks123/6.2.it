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
void Sort(int* a, const int size) // Сортування масиву за зростанням.
{ // Пояснення методу - див. параграф
	for (int i = 0; i < size - 1; i++){
			// n-1 раз шукаємо мінімальний елемент
			int max = i; // вважаємо і-й елемент мінімальним
			for (int j = i + 1; j < size; j++)
					if (a[j] > a[max]) // якщо поточний елемент менший
						max = j; // того, який вважаємо мінімальним
					// - запам'ятали його індекс
					// обмін місцями елементів з номерами i та imin
					int tmp = a[i];
					a[i] = a[max];
					a[max] = tmp;
					

	}
}int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 9;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Sort(a, n);
	Print(a, n);
	return 0;
}