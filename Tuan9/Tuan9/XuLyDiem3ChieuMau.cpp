#include"Diem3ChieuMau.h"

DIEM3CHIEUMAU::DIEM3CHIEUMAU(double xx, double yy, double zz, int rr, int gg, int bb) : DIEM3CHIEU(xx,yy,zz) {
	MAU::SetRGB(rr, gg, bb);
	DIEM::dem++;
}
DIEM3CHIEUMAU::~DIEM3CHIEUMAU(){
	DIEM::dem--;
}
void DIEM3CHIEUMAU::Nhap() {
	DIEM3CHIEU::Nhap();
	MAU::Nhap();
}
void DIEM3CHIEUMAU::Xuat() {
	DIEM3CHIEU::Xuat();
	cout << " - RGB";
	MAU::Xuat();
}

bool DIEM3CHIEUMAU::KiemTraTrung(DIEM3CHIEUMAU d) {
	return (x == d.x && y == d.y && z == d.z && r == d.r && g == d.g && b == d.b);
}

ostream& operator<<(ostream& os, DIEM3CHIEUMAU d) {
	d.Xuat();
	return os;
}
istream& operator>>(istream& is, DIEM3CHIEUMAU& d) {
	d.Nhap();
	return is;
}