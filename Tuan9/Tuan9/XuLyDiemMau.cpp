#include"DiemMau.h"

DIEMMAU::DIEMMAU(double xx, double yy, int rr, int gg, int bb): DIEM(xx,yy) {
	MAU::SetRGB(rr, gg, bb);
	DIEM::dem++;
}
DIEMMAU::~DIEMMAU(){
	DIEM::dem--;
}

bool DIEMMAU::KiemTraTrung(DIEMMAU d) {
	return (x == d.x && y == d.y && r == d.r && g == d.g && b == d.b);
}

void DIEMMAU::Nhap() {
	DIEM::Nhap();
	MAU::Nhap();
}

void DIEMMAU::Xuat() {
	DIEM::Xuat();
	cout << " - RGB";
	MAU::Xuat();
}

ostream& operator<<(ostream& os, DIEMMAU d) {
	d.Xuat();
	return os;
}
istream& operator>>(istream& is, DIEMMAU& d) {
	d.Nhap();
	return is;
}
