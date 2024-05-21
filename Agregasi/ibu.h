#ifndef IBU_H
#defina IBU_H
#include <vector>

class ibu {
ppublic:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu \"" << nama << "\" tidak ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" tidak ada\n";
	}
	void tambahkanAnak(anak*);
	void cetakAnak();
};
void ibu::tambahkanAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
	cout << "Daftar Anak dari ibu \"" << this->nama << "\": \n";
	for (int i = 0; i < daftar_anak.size(); i++) {
		cout << daftar_anak[i]->nama << endl;
	}
	cout << endl;
}
#endif
	
