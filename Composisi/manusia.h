#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string name;
	jantung VarJantung;

	manusia(string pName)
		: name(pNama) {
		cout << name << " hidup\n";
	}
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif
