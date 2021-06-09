#ifndef Color
#define Color
#include<iostream>
#include<math.h>
using namespace std;
class MAU {
protected:
	int r, g, b;
public:
	MAU(int = 0, int = 0, int = 0);
	~MAU();
	int GetRed();
	int GetGreen();
	int GetBlue();
	void SetRed(int);
	void SetGreen(int);
	void SetBlue(int);
	void SetRGB(int, int, int);
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream&, MAU&);
	friend ostream& operator<<(ostream&, MAU);
	bool KiemTraTrung(MAU);
};

#endif