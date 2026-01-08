#include<iostream>

using namespace std;

void myfiveshort (int dataAngka[]) {
	for (int i = 0; i < 5; i++) {
		if (dataAngka[i] > 5) {
			for (int j = 5; j < 10; j ++ ) {
				if (dataAngka[j] <= 5) {
					int wadah = dataAngka[i];
					dataAngka[i] = dataAngka[j];
					dataAngka[j] = wadah;

					break;
				}
			}
		}
	}
 }
void hasil(int kumpulanAngka[]) {
	for (int i = 0; i < 10; i++) {
		cout << kumpulanAngka[i] << (i == 9 ? "" : ",");
	}
}

int main() {
	int angka[10];

	cout << "masukkan 10 angka dengan memberi spasi ";
	for (int i = 0; i < 10; i++) {
		cin >> angka[i];
	}

	myfiveshort(angka);

	cout << "hasil akhir: ";
	hasil(angka);

	return 0;
}

