/*************************
* Автор: Прохоров В.В.   *
* Дата: 13.10.2026       *
* Название: Лаб. No3     *
* Вариант: 22            *
*************************/

#include <iostream>

using namespace std;

int main() {
	double vis, HeightE, TubeR, DinamicV, WaterRes, K, RelativeR;
	vis = 0.009;
	HeightE = 1;
	TubeR = 15;
	cout << "Enter dinamic speed = "; cin >> DinamicV;
	
	RelativeR = HeightE / TubeR;
	K = log10( DinamicV * HeightE / vis );

	if (K < 0.55) {
		WaterRes = pow((1 / (0.7 + 2 * K - 2 * log10(RelativeR))), 2);
	} else {
		WaterRes = pow((1 / (1, 18 + 1, 13 * K - 2 * log10(RelativeR))), 2);
	}

	cout << "The coefficient of resistance to fluid flow in rough pipes at K = " << WaterRes << endl;
	cout << "The K = " << K;
}
