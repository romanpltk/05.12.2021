#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void fill_random(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}
int count_pos(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0)k++;
		}
	}
	return k;
}
int count_chet(int** mas, int n, int m) {
	int l = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0)l++;
		}
	}
	return l;
}
int count_proizvod(int** mas, int r, int m) {
	int proizvod = 1;
	for (int j = 0; j < m; j++) {

		proizvod *= mas[r][j];
	}

	return proizvod;
}
void mul_by_number(int** mas, int n, int m, int number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= number;
		}
	}
}
double amean(int** mas, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i][i];
	}
	return static_cast<double>(sum) / n;
}
int sum_main(int** mas, int n, int m) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += mas[i][i];
	}
	

	return s;
}
long long int fact(int k) {
	long long int f = 1;
	for (int i = 1; i <= k; i++) {
		f *= i;
	}
	return f;
}
void reverse(int** mas, int k, int m) {
	int s = m / 2;
	for (int j = 0; j<s; j++) {
		swap(mas[k][j],mas[k][m-1-j]);
	}
}