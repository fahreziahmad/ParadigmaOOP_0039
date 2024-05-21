#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "manusia.h"

int main() {
	manusia* VarManusia = new manusia("jono");
	delete VarManusia;
	return 0;
}