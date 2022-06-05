#include <iostream>
using namespace std;

int row; // inisialisasi variabel row

void buildTriangle(int row, int temp = 1) {
	for (int i = 0; i < temp; i++) { //berfungsi untuk print bintang sesuai dengan nilai variabel temp
		cout << "* ";
	} cout << endl; //berfungsi sebagai line baru setelah bintang diprint

	temp++;	
	
	if (temp != row + 1) {	//perkondisian apabila variabel temp tidak sama dengan variabel row , fungsi akan dijalankan kembali
		buildTriangle(row, temp);
	}
}

int main() {
	cout << "------Triangle Using Recursive------" << endl;
	cout << "\nEnter number of rows: ";//untuk input panjang sisi segitiga yang diinginkan
	cin >> row; //hasil dari inputan akan masuk ke dalam variabel row
	buildTriangle(row);// untuk menjalankan fungsi buildTriangle yang akan mencetak bentuk segitiganya dengan char "*"
	
}