#include"Diem3Chieu.h"

class DIEMMAU3CHIEU : public DIEM3CHIEU {
protected:
	int r, g, b;
public:
	DIEMMAU3CHIEU(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEMMAU3CHIEU();
	int GetRed();
	int GetGreen();
	int GetBlue();
	void SetRed(int);
	void SetGreen(int);
	void SetBlue(int);
	void SetRGB(int, int, int);
	bool KiemTraTrung(DIEMMAU3CHIEU);
	void Nhap();
	void Xuat();
	friend ostream& operator<<(ostream&, DIEMMAU3CHIEU);
	friend istream& operator>>(istream&, DIEMMAU3CHIEU&);
};