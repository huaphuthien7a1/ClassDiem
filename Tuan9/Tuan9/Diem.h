#ifndef Point
#define Point
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class DIEM {
protected:
	double x, y;
	static int dem;
public:
	~DIEM();
	
	DIEM(double =0, double=0);
	DIEM(DIEM&);
	void setX(double);
	void setY(double);
	void setXY(double, double);
	double getX();
	double getY();
	static int GetDiem();
	void DiChuyen(double, double);
	bool KiemTraTrung(DIEM);
	double TinhKhoangCach(DIEM);
	DIEM TimDiemDoiXung();
	double TinhChuVi(DIEM, DIEM);
	double TinhDienTich(DIEM, DIEM);
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream&, DIEM&);
	friend ostream& operator<<(ostream&, DIEM);
};

#endif