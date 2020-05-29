#include "MilitaryVehicle.hpp"
#include "USFabrica.hpp"
#include "RFFabrica.hpp"

#include <fstream>

using namespace std;

int main() {
	system("color F0");
	setlocale(LC_ALL, "");
	cout << "\tВас приветствует программа выбора вооружения:\n\n";
	cout << "------------------------------------------------"<<endl;
	cout << "\tВыберите Режим работы:\n";
	cout << "1--- Через консоль" << endl;
	cout << "2--- Через файл" << endl;
	cout << "3--- Выход" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Ваш выбор: ";

	MilitaryVehicle* mv = nullptr;
	int a;
	cin >> a;

	while (a != 1 && a != 2 && a != 3)
	{
		cout << "\t ВНИМАНИЕ! Выбирите действие 1,2 или 3  " << endl;
		cout << "Ваш выбор: ";
		cin >> a;
	}


	if (a == 1)
	{
		system("cls");
		cout << "\tВыберите Страну:\n";
		cout << "1--- США" << endl;
		cout << "2--- Россия" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "Ваш выбор: ";
		cin >> a;
		system("cls");
		cout << "\tВыберите тип передвижения:\n";
		cout << "1--- Ездит(Наземная)" << endl;
		cout << "2--- Летает(Воздушная)" << endl;
		cout << "3--- Плавает(Водная)" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "Ваш выбор: ";
		int b;
		cin >> b;
		system("cls");


		cout << "\t\t Заполните характеристики техники" <<endl;
		cout << "1)Кол-во 2)расстояние 3)экипаж 4)мощность 5)тип_оружия 6)масса 7)год выпуска 8)тип техники:\n";
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
		cout << "\tИнформация о технике:\n";
		cout << "1)Кол-во 2)расстояние 3)экипаж 4)мощность 5)тип_оружия 6)масса 7)год выпуска 8)тип техники:\n";
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
