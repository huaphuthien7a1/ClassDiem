#include"Diem3Chieu.h"
#include"Mau.h"

class DIEM3CHIEUMAU : public DIEM3CHIEU, public MAU {
public:
	DIEM3CHIEUMAU(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEM3CHIEUMAU();
	void Nhap();
	void Xuat();
	bool KiemTraTrung(DIEM3CHIEUMAU);
	friend ostream& operator<<(ostream&, DIEM3CHIEUMAU);
	friend istream& operator>>(istream&, DIEM3CHIEUMAU&);
};
