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

