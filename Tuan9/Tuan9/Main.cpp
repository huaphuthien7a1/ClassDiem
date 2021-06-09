#include"Diem3Chieu.h"
#include"DiemMau3Chieu.h"
#include"DiemMau.h"
#include"Diem3ChieuMau.h"
using namespace std;
int main() {
	int button = -1;
	while (button != 0)
	{
		cout << "========MENU========" << endl;
		cout << "*Chon doi tuong thao tac" << endl;
		cout << "1 - Diem 3 chieu" << endl;
		cout << "2 - Diem mau 3 chieu" << endl;
		cout << "3 - Diem mau" << endl;
		cout << "4 - Diem 3 chieu mau" << endl;
		cout << "0 - Ket thuc chuong trinh." << endl;
		cout << "Nhap thao tac: ";
		cin >> button;
		switch (button) {
		case 0:
			cout << "Ket thuc chuong trinh.";
			break;
		case 1:
		{
			system("cls");
			int button1 = -1;
			DIEM3CHIEU a1,a2;
			while (button1 != 0)
			{	
				cout << "***THAO TAC DOI VOI DIEM 3 CHIEU***" << endl;
				cout << setiosflags(ios::left) << setw(40) << "0 - Tro ve MENU";
				cout << setiosflags(ios::left) << setw(40) << "4 - Tinh khoang cach" << endl;
				cout << setiosflags(ios::left) << setw(40) << "1 - Nhap Diem 3 Chiue";
				cout << setiosflags(ios::left) << setw(40) << "5 - Di chuyen" << endl;
				cout << setiosflags(ios::left) << setw(40) << "2 - Xuat Diem 3 Chieu";
				cout << setiosflags(ios::left) << setw(40) << "6 - Tinh chu vi " << endl;
				cout << setiosflags(ios::left) << setw(40) << "3 - Kiem tra trung";
				cout << setiosflags(ios::left) << setw(40) << "7 - Tinh dien tich" << endl;
				if (a1.KiemTraTrung(a2)) cout << "Ban chua nhap diem" << endl;
				else cout << "Diem 3 chieu: " << a1;			
				cout << "Nhap thao tac: ";
				cin >> button1;
				switch (button1) {
				case 0: {
					cout << "Chuyen sang MENU";
					break;
				}
				case 1: {
					cout << "Nhap diem: " << endl;
					cin >> a1;
					break;
				}
				case 2: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					cout << a1;
					break;
				}
				case 3: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					cout << "Nhap diem can kiem tra: ";
					DIEM3CHIEU temp;
					cin >> temp;
					if (a1.KiemTraTrung(temp)) cout << "Hai diem trung nhau";
					else cout << "Haii diem khong trung nhau";
					break;
				}
				case 4: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					cout << "Nhap diem can tinh khoang cach: ";
					DIEM3CHIEU temp;
					cin >> temp;
					cout << "Khoang cach giua hai diem la: " << a1.TinhKhoangCach(temp);
					break;
				}
				case 5: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					cout << "Nhap khoang cach muon di chuyen \n";
					double x, y, z;
					cout << "Nhap x: ";
					cin >> x;
					cout << "Nhap y: ";
					cin >> y;
					cout << "Nhap z: ";
					cin 
					break;
				}
				case 6: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					int day;
					cout << "Nhap so ngay can tru: ";
					cin >> day;
					d1.Tru(day);
					cout << "Date 1 sau khi tru " << day << " ngay: ";
					d1.Xuat();
					break;
				}
				case 7: {
					if (a1.KiemTraTrung(a2)) {
						cout << "Ban chua nhap diem\n";
						cin >> a1;
					}
					cout << "Khoang cach giua hai Date: " << d1.KhoangCachGiuaHaiDate(d2) << " ngay";
					cout << endl;
					break;
				}
				default:
				{
					cout << "Vui long nhap dung thao tac!!!(0->7)";
					break;
				}

				}
				system("pause");

				system("cls");

			}

			break;
		}
	
		default:
			cout << "Vui long nhap dung thao tac!!!(0->3)";
			break;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
}