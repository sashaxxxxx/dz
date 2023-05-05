#include <iostream>
#include <random>

using namespace std;

bool Even(int k)
{
	if (k % 2 == 0) { return true; }
	else { return false; }
}

bool IsPowerN(int K, int N)
{
	while (K % N == 0) K /= N;
	return (K == 1);
}

void Swap(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
}
void SortInc(int& a, int& b, int& c) {
	if (b > a) Swap(a, b);
	if (c > b) Swap(c, b);
	if (b > a) Swap(a, b);
}

int AddRightDigit(int D, int K) {
	return K * 10 + D;
}

void MinMax(int arr[10], int & min, int & max) {
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
}

int main()
{
	srand(time(NULL));
	int k, q = 0;
	for (int i = 0; i <= 10; i++)
	{
		k = -7 + rand() % 14;
		cout << k << endl;
		if (Even(k) == true)
		{
			q++;
		}
	}
	cout << "четных чисел: " << q << "\n\n";

	srand(time(NULL));
	int n;
	q = 0;
	std::cout << "N:";
	std::cin >> n;
	std::cout << "введите числа";
	for (int i = 0; i <= 10; i++)
	{
		std::cin >> k;
		if (IsPowerN(k, n) == true)
		{
			q++;
		}
	}
	std::cout << q << "\n";


	int a, b, c;
	std::cin >> a >> b >> c;
	SortInc(a, b, c);
	std::cout << a<< ", " << b << ", " << c << "\n";

	std::cin >> a >> b >> c;
	SortInc(a, b, c);
	std::cout << a << ", " << b << ", " << c << "\n";

	int  d;
	std::cin >> k >> d;
	std::cout << AddRightDigit(d, k) << "\n";

	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		k = -10 + rand() % 20;
		arr[i] = k;
	}
	int min = 11, max = -11;
	std::cout << min, max;
}
