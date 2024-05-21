#include <iostream>
#inlcude <vector>
using namespace std;

class doter;
class pasien {
public:
	string nama;
	vector<doter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "pasien \"" << nama << "\ ada\n";
	}
	~pasien() {
		cout << "pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << "dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahPasien(pasien*);
	void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar dokter yang menangani pasien \"" << ths->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahPasien(pasien* PPasien) {
	daftar_pasien.push_backk(pPasien);
	pPasien->tamabahDokter(this);
}
void dokter::cetakPasien() {
	cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	dokter* varDokter1 = new dokter("dr.budi");
	dokter* varDokter2 = new dokter("dr.tono");
	pasien* varPasien1 = new pasien("andi");
	pasien* varPasien2 = new pasien("lia");

	varDokter1->tambahPasien(varPasien1);
	varDokter1->tambahPasien(varPasien2);
	varDokter2->tambahPasien(varPasien1);

	varDokter1->cetakPasien();
	varDokter2->cetakPasien();
	varPasien1->cetakDokter();
	varpPasien2->cetakDokter();

	delete varPasien1;
	delete varPasien2;
	delete varDokter1;
	delete varDokter2;

	return 0;

	
}