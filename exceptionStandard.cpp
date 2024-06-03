#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan
#include <array>
//untuk objek array yang akan kita gunakan
using namespace std;

int main() {
    cout << "asal program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exection
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya
         memiliki 3 elemen*/
	}
	cout << "baris program yang terakhir" << endl;
	/penanda 2: bahasa program berjalan tanpa berhenti meskipun terjadi kesalahan/
    return 0;
}