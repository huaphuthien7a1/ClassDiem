#include"Diem.h";
int DIEM::dem = 0;

void DIEM::setX(double xx) {
	x = xx;

}
void DIEM::setY(double yy) {
	y = yy;

}
void DIEM::setXY(double xx, double yy) {
	x = xx;
	y = yy;

}
DIEM::~DIEM() {
	dem--;
}

DIEM::DIEM(double xx, double yy):x(xx),y(yy) {
	dem++;
}
DIEM::DIEM(DIEM& d) {
	x = d.x;
	y = d.y;
}
double DIEM::getX() {
	return x;
}
double DIEM::getY() {
	return y;
}

int DIEM::GetDiem() {
	return dem;
}
void DIEM::Nhap() {
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
void DIEM::Xuat() {
	cout << "(" << x << "," << y << ")";
}

istream& operator>>(istream& is, DIEM& d) {
	cout << "Nhap hoanh do: ";
	is >> d.x;
	cout << "Nhap tung do: ";
	is >> d.y;
	return is;

}
ostream& operator<<(ostream& os, DIEM d) {
	os << "(" << d.x << "," << d.y << ")";
	return os;
}


void DIEM::DiChuyen(double xx, double yy) {
	x += xx;
	y += yy;
}
bool DIEM::KiemTraTrung(DIEM d) {
	return (x == d.x && y == d.y);
}
double DIEM::TinhKhoangCach(DIEM d) {
	return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}
DIEM DIEM::TimDiemDoiXung() {
	DIEM ddx((-x == 0)?0:-x, -y==0?0:-y);
	return ddx;
}
double DIEM::TinhChuVi(DIEM d1, DIEM d2) {
	double a = this->TinhKhoangCach(d1);
	double b = this->TinhKhoangCach(d2);
	double c = d1.TinhKhoangCach(d2);
	return a + b + c;
}
double DIEM::TinhDienTich(DIEM d1, DIEM d2) {
	double a = this->TinhKhoangCach(d1);
	double b = this->TinhKhoangCach(d2);
	double c = d1.TinhKhoangCach(d2);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}