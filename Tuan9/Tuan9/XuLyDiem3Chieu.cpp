#include "Diem3Chieu.h"
DIEM3CHIEU::DIEM3CHIEU(double xx, double yy, double zz):DIEM(xx,yy),z(zz) {
    DIEM::dem++;
}
DIEM3CHIEU::~DIEM3CHIEU() {
    DIEM::dem--;
}

double DIEM3CHIEU::GetZ() {
    return z;
}
void DIEM3CHIEU::SetZ(double zz){
    z = zz;
}

void DIEM3CHIEU::DiChuyen(double zz, double xx, double yy) {
    x += xx;
    y += yy;
    z += zz;
}
bool DIEM3CHIEU::KiemTraTrung(DIEM3CHIEU d) {
    return (x == d.x && y == d.y && z == d.z);
}

double DIEM3CHIEU::TinhKhoangCach(DIEM3CHIEU d) {
    return sqrt(pow(x - d.x, 2) + pow(y - d.y, x) + pow(z - d.z, 2));
}
DIEM3CHIEU DIEM3CHIEU::TimDiemDoiXung() {
    DIEM3CHIEU ddx(-x == 0 ? 0 : -x, -y == 0 ? 0 : -y, -z == 0 ? 0 : -z);
    return ddx;
}


double DIEM3CHIEU::TinhChuVi(DIEM3CHIEU d1, DIEM3CHIEU d2) {
    double a = this->TinhKhoangCach(d1);
    double b = this->TinhKhoangCach(d2);
    double c = d1.TinhKhoangCach(d2);
    return a + b + c;
}
double DIEM3CHIEU::TinhDienTich(DIEM3CHIEU d1, DIEM3CHIEU d2) {
    double a = this->TinhKhoangCach(d1);
    double b = this->TinhKhoangCach(d2);
    double c = d1.TinhKhoangCach(d2);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
void DIEM3CHIEU::Nhap() {
    DIEM::Nhap();
    cout << "Nhap cao do: ";
    cin >> z;
}
void DIEM3CHIEU::Xuat() {
    cout << "(" << x << "," << y << "," << z << ")";
}
istream& operator>>(istream& is, DIEM3CHIEU& d)
{
    d.Nhap();
    return is;
}
ostream& operator <<(ostream& os, DIEM3CHIEU d) {
    d.Xuat();
    return os;
}