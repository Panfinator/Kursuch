#include "MilitaryVehicle.hpp"
#include "USFabrica.hpp"
#include "RFFabrica.hpp"

#include <fstream>

using namespace std;

int main() {
	system("color F0");
	setlocale(LC_ALL, "");
	cout << "\t��� ������������ ��������� ������ ����������:\n\n";
	cout << "------------------------------------------------"<<endl;
	cout << "\t�������� ����� ������:\n";
	cout << "1--- ����� �������" << endl;
	cout << "2--- ����� ����" << endl;
	cout << "3--- �����" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "��� �����: ";

	MilitaryVehicle* mv = nullptr;
	int a;
	cin >> a;

	while (a != 1 && a != 2 && a != 3)
	{
		cout << "\t ��������! �������� �������� 1,2 ��� 3  " << endl;
		cout << "��� �����: ";
		cin >> a;
	}


	if (a == 1)
	{
		system("cls");
		cout << "\t�������� ������:\n";
		cout << "1--- ���" << endl;
		cout << "2--- ������" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "��� �����: ";
		cin >> a;
		system("cls");
		cout << "\t�������� ��� ������������:\n";
		cout << "1--- �����(��������)" << endl;
		cout << "2--- ������(���������)" << endl;
		cout << "3--- �������(������)" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "��� �����: ";
		int b;
		cin >> b;
		system("cls");


		cout << "\t\t ��������� �������������� �������" <<endl;
		cout << "1)���-�� 2)���������� 3)������ 4)�������� 5)���_������ 6)����� 7)��� ������� 8)��� �������:\n";
		if (a == 1) {
			
			mv = new MilitaryVehicle(new USFabrica(), cin, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
		else {
			
			mv = new MilitaryVehicle(new RFFabrica(), cin, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
	}
	if (a == 2) {
		string fileName;
		//cout << "File name: ";
		//cin >> fileName;
		ifstream in("out.txt");
		in >> a;
		int b;
		in >> b;
		system("cls");
		cout << "\t���������� � �������:\n";
		cout << "1)���-�� 2)���������� 3)������ 4)�������� 5)���_������ 6)����� 7)��� ������� 8)��� �������:\n";
		cout << "------------------------------------------------" << endl;
		if (a == 1) {
			mv = new MilitaryVehicle(new USFabrica(), in, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
		else {
			mv = new MilitaryVehicle(new RFFabrica(), in, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
	}


	cout << '\n' << (*mv);
	ofstream out("out.txt");
	out << (*mv);
	system("pause>>void");

	if (a == 3)
		return 0;

}
