#include"Mau.h"
MAU::MAU(int rr, int gg, int bb) {
	SetRGB(rr, gg, bb);
}
MAU::~MAU(){}
void MAU::SetRed(int rr) {
	while (rr < 0 || rr  > 255) {
		cout << "Thong so Red phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Red: ";
		cin >> rr;
	}
	r == rr;
}

void MAU::SetGreen(int gg) {
	while (gg < 0 || gg  > 255) {
		cout << "Thong so Green phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Green: ";
		cin >> gg;
	}
	g = gg;
}

void MAU::SetBlue(int bb) {
	while (bb < 0 || bb  > 255) {
		cout << "Thong so Blue phai nam trong khoang 0-255 \n";
		cout << "Nhap lai Blue: ";
		cin >> bb;
	}
	b = bb;
}

void MAU::SetRGB(int rr, int gg, int bb) {
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
int MAU::GetRed() {
	return r;
}
int MAU::GetGreen() {
	return g;
}
int MAU::GetBlue() {
	return b;
}
bool MAU::KiemTraTrung(MAU m) {
	return (r == m.r && g == m.g && b == m.b);
}

void MAU::Nhap() {
	cout << "Nhap thong so Red: ";
	cin >> r;
	cout << "Nhap thong so Green: ";
	cin >> g;
	cout << "Nhap thong so Blue: ";
	cin >> b;
	SetRGB(r, g, b);
}
void MAU::Xuat() {
	cout << "(" << r << "," << g << "," << b << ")";
}
istream& operator>>(istream& is, MAU& m) {
	m.Nhap();
	return is;
}

ostream& operator<<(ostream& os, MAU m) {
	m.Xuat();
	return os;
}