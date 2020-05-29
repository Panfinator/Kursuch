#pragma once
#include <string>
#include <iostream>

class �haracteristic {//��������������
	std::string power;
	double distance;
	std::string weaponType;
	std::string vehicleType;
	double weight;
	int year;
	unsigned peopleCount;
	unsigned count;
public:
	std::string& Power() { return power; }//��������
	double& Distance() { return distance; }//���������
	std::string& WeaponType() { return weaponType; }//��� ������
	std::string& VehicleType() { return vehicleType; }//��� �������
	double& Weight() { return weight; }//�����
	int& Year() { return year; }//��� ������������
	unsigned& PeopleCount() { return peopleCount; }//������
	unsigned& Count() { return count; }//����������
	//���������� ��� ��������
	const std::string& Power() const { return power; }//��������
	const double& Distance() const { return distance; }//���������
	const std::string& WeaponType() const { return weaponType; }//��� ������
	const std::string& VehicleType() const { return vehicleType; }//��� �������
	const double& Weight() const { return weight; }//�����
	const int& Year() const { return year; }//��� ������������
	const unsigned& PeopleCount() const { return peopleCount; }//������
	const unsigned& Count() const { return count; }//����������

	friend std::istream& operator >>(std::istream& in, �haracteristic& characteristic) {
		in >> characteristic.count >> characteristic.distance >> characteristic.peopleCount
			>> characteristic.power >> characteristic.weaponType >> characteristic.weight
			>> characteristic.year >> characteristic.vehicleType;
		return in;
	}

	friend std::ostream& operator <<(std::ostream& out, const �haracteristic& characteristic) {
		out << characteristic.count << ' ' << characteristic.distance << ' ' << characteristic.peopleCount << ' '
			<< characteristic.power << ' ' << characteristic.weaponType << ' ' << characteristic.weight
			<< ' ' << characteristic.year << ' ' << characteristic.vehicleType;
		return out;
	}
};
