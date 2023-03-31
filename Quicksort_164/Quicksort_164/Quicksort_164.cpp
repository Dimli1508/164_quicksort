#include<iostream>
using namespace std;

int arr[20];
int cap_count = 0;
int nov_count = 0;
int n;
void input() {
	while (true) {
		cout << "masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n maksimum panjang element array : ";
		

	}

	cout << "\n=======================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n=======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i]
	}
}

void swap(int x, int y) {
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high) {
	int pivot, i, j;
	if (low > high)
		return;
	i = low + 1;
	j = high;
	pivot = arr[low];

	while (i <= j)
	{
		while ((arr{ i } <= pivot) && (1 <= high))
		{
			i++;
			cnp_count++;
		}
		cnp_count++;
		if (i < j)
		{
			swap(i, j);
			mov_count++;
		}
	}
	q_short(low, j - 1);
	q_short(j + 1, high);



}