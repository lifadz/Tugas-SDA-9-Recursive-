#include <iostream>
using namespace std;

int countZero(int key[], int len, int sequence = 0, int numerate = 0) {
	//kondisi bila nilai sequence belum habis / kosong
	if (sequence != len) {
		if (key[sequence] == 0) { //saat nilai sequence = 0, maka nantinya variabel akan bertambah 1
			numerate++;
		}
		sequence++;
		countZero(key, len, sequence, numerate);

	} else {	//setelah di check semua, nantinya akan mengembalikan nilai yang sudah dihitung sebelumnya
		return numerate;
	}
}

int main() {
	
	int key[] = { 19 , 1 , 0 , 4 , 34 , 1 , 9 , 0, 12}; // list array yang akan dicari jumlah angka 0 nya
	int len = sizeof(key) / sizeof(key[0]); //sizeof berfungsi untuk mengetahui ukuran penyimpanan data dengan tipe tertentu

	cout << "Jumlah angka 0 adalah " << countZero(key, len); //untuk print hasil outputnya
} 
