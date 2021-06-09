#include "DiemMau3Chieu.h"

DIEMMAU3CHIEU::DIEMMAU3CHIEU(double xx, double yy, double zz, int r, int g, int b):DIEM3CHIEU(xx,yy,zz)
{
	SetRGB(r, g, b);
	DIEM::dem++;
}
DIEMMAU3CHIEU::~DIEMMAU3CHIEU() {
	DIEM::dem--;
}

void DIEMMAU3CHIEU::SetRed(int rr) {
	while (rr < 0 || rr  > 255) {
		cout << "Thong so Red phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Red: ";
		cin >> rr;
	}
	r == rr;
}

void DIEMMAU3CHIEU::SetGreen(int gg) {
	while (gg < 0 || gg  > 255) {
		cout << "Thong so Green phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Green: ";
		cin >> gg;
	}
	g = gg;
}

void DIEMMAU3CHIEU::SetBlue(int bb) {
	while (bb < 0 || bb  > 255) {
		cout << "Thong so Blue phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Blue: ";
		cin >> bb;
	}
	b = bb;
}

void DIEMMAU3CHIEU::SetRGB(int rr, int gg, int bb) {
	while (rr < 0 || rr  > 255) {
		cout << "Thong so Red phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Red: ";
		cin >> rr;
	}
	while (gg < 0 || gg  > 255) {
		cout << "Thong so Green phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Green: ";
		cin >> gg;
	}
	while (bb < 0 || bb  > 255) {
		cout << "Thong so Blue phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Blue: ";
		cin >> bb;
	}
	r = rr;
	g = gg;
	b = bb;
}
int DIEMMAU3CHIEU::GetRed() {
	return r;
}
int DIEMMAU3CHIEU::GetGreen() {
	return g;
}
int DIEMMAU3CHIEU::GetBlue() {
	return b;
}

bool DIEMMAU3CHIEU::KiemTraTrung(DIEMMAU3CHIEU d) {
	return (x == d.x && y == d.y && z == d.z && r == d.r && g == d.g && b == d.b);
}

void DIEMMAU3CHIEU::Nhap() {
	DIEM3CHIEU::Nhap();
	cout << "Nhap thong so Red: ";
	cin >> r;
	cout << "Nhap thong so Green: ";
	cin >> g;
	cout << "Nhap thong so Blue: ";
	cin >> b;
	SetRGB(r, g, b);
}
void DIEMMAU3CHIEU::Xuat() {
	DIEM3CHIEU::Xuat();
	cout << " - RGB(" << r << "," << g << "," << b << ")";
}

ostream& operator<<(ostream& os, DIEMMAU3CHIEU d) {
	d.Xuat();
	return os;
}
istream& operator>>(istream& is, DIEMMAU3CHIEU& d) {
	d.Nhap();
	return is;
}
