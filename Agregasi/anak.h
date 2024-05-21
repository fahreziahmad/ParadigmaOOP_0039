#ifndef ANAK_H
#defina ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";

	}
	~anak() {
		cout << "Anak \"" << nama << "\" tidak ada\";

	}
};
#endif


