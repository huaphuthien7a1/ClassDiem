#include"Diem.h"

class DIEM3CHIEU : public DIEM {
protected:
	double z;
public:
	DIEM3CHIEU(double = 0, double = 0, double = 0);
	~DIEM3CHIEU();
	double GetZ();
	void SetZ(double);
	void DiChuyen(double, double=0,double=0);
	bool KiemTraTrung(DIEM3CHIEU);
	double TinhKhoangCach(DIEM3CHIEU);
	DIEM3CHIEU TimDiemDoiXung();
	double TinhChuVi(DIEM3CHIEU, DIEM3CHIEU);
	double TinhDienTich(DIEM3CHIEU, DIEM3CHIEU);
	void Nhap();
	void Xuat();
	friend ostream& operator <<(ostream&, DIEM3CHIEU);
	friend istream& operator >>(istream&, DIEM3CHIEU&);
};