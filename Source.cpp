#include"fun.h"
int main() {
	/*int r;
	cin >> r;*/
	int n = 5;
	int m = 5;
	int**mas;
	mas=new int*[n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n, m);
	print_matrix(mas, n, m);
	/*cout << count_pos(mas, n, m) << endl;
	cout << count_chet(mas, n, m) << endl;
	cout << count_proizvod(mas, r, m) << endl;*/
	/*mul_by_number(mas, n, m, 2);*/
	/*print_matrix(mas, n, m);*/
	cout << amean(mas, n, m);
	cout << fact(sum_main(mas, n, m)) << endl;
	reverse(mas, 0, m);
	main_revers(mas, n);
}