#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void prinAll();

	static void getNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }
};

int mahasiswa::nim = 20230140111;

void mahasiswa::setID()
{
	id = ++nim;
}
