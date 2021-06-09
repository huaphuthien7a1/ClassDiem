#include"Mau.h"
#include"Diem.h"

class DIEMMAU : public MAU, public DIEM {
public:
	DIEMMAU(double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEMMAU();
	void Nhap();
	void Xuat();
	bool KiemTraTrung(DIEMMAU);
	friend ostream& operator<<(ostream&, DIEMMAU);
	friend istream& operator>>(istream&, DIEMMAU&);
};
