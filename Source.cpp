#include "tile.h"
#include <stdio.h>
#include<fstream>
#include <iostream>
#include <string>
#include <imapi.h>


using namespace std;
int num;

tile::tile() {
	cout << "����� ������." << endl;
}
tile::~tile() {
	cout << "���������� ���������." << endl;
}
void tile::enterInfo(int num) {

	cout << "��� ������: ";
	cin >> houseCODE;
	cout << "���������� ������: ";
	cin >> contacts;
	cout << "���������� �����������: ";
	cin >> kolvo;
	cout << endl;
	for (int i = 0; i < num; i++) {
		cout << "��� ������: ";
		cin >> new_complect[i].code;
		cout << "������������ ������: ";
		cin >> new_complect[i].name;
		cout << "����: ";
		cin >> new_complect[i].costs;
		cout << "����������: ";
		cin >> new_complect[i].kolvo_komplect;
		cout << "������ �������������: ";
		cin >> new_complect[i].country;
		cout << "�������� ������: ";
		cin >> new_complect[i].material;
		cout << "------------------------------------------------------" << endl;
	}

}

void tile::enterfile(int num) {
	ofstream file;
	file.open("file.txt");
	if (file)
	{
		//cout << "��� ������: ";
		file << houseCODE<<endl;
		//cout << "���������� ������: ";
		file << contacts<<endl;
		//cout << "���������� �����������: ";
		file << kolvo<<endl;
		cout << endl;
		/*for (int i = 0; i < num; i++) {
			cout << "��� ������: ";
			cin >> new_complect[i].code;
			cout << "������������ ������: ";
			cin >> new_complect[i].name;
			cout << "����: ";
			cin >> new_complect[i].costs;
			cout << "����������: ";
			cin >> new_complect[i].kolvo_komplect;
			cout << "������ �������������: ";
			cin >> new_complect[i].country;
			cout << "�������� ������: ";
			cin >> new_complect[i].material;
			cout << "------------------------------------------------------" << endl;
		}*/
	}
}
	

void tile::printInfo(int num) {
	cout << "��� ������: " << houseCODE << endl;
	cout << "���������� ������: " << contacts << endl;
	cout << "���������� �����������: " << kolvo << endl;
	cout << endl;
	for (int i = 0; i < num; i++) {
		cout << "��� ������: " << new_complect[i].code << endl;
		cout << "������������ ������" << new_complect[i].name << endl;
		cout << "����: " << new_complect[i].costs << endl;
		cout << "����������: " << new_complect[i].kolvo_komplect << endl;
		cout << "������ �������������: " << new_complect[i].country << endl;
		cout << "�������� ������: " << new_complect[i].material << endl;
		cout << "------------------------------------------------------" << endl;
	}
}

void tile::new_code(int new_house) {
	houseCODE = new_house;
}

void tile::new_cont(char new_contats[15]) {
	contacts == new_contats;
}

void tile::new_kolvo(int new_kolvo) {
	kolvo = new_kolvo;
}

int main(int argc, const char* argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	int a;
	tile* tiles = new tile;
	int new_kolvo, new_house;
	char new_contacts[15];

	do {
		cout << "����" << endl;
		cout << "1. ������ ������" << endl;
		cout << "2. ������� ������" << endl;
		cout << "3. �������� ��� ������. " << endl;
		cout << "4. �������� ��������. " << endl;
		cout << "5. �������� ���������� �����������. " << endl;
		cout << "6. ������ � ����. " << endl;
		cout << "7. ����� �� ���������" << endl;
		
		cout << "������� ����� ��������: "; cin >> a;
		cout << endl;

		switch (a) {
		case 1:
			cout << "������� ���������� ������� �������: ";
			cin >> num;
			tiles->enterInfo(num);
			break;
		case 2:
			tiles->printInfo(num);
			break;
		case 3:
			cout << "������� ����� ��� ������: ";
			cin >> new_house;
			tiles->new_code(new_house);
			break;
		case 4:
			cout << "������� ����� ��������: ";
			cin >> new_contacts;
			tiles->new_cont(new_contacts);
			break;
		case 5:
			cout << "������� ����� ����������: ";
			cin >> new_kolvo;
			tiles->new_kolvo(new_kolvo);
			break;
		case 6:
			tiles->enterfile(num);
		case 7:
			exit(0);
			break;
		}
	} while (a != 0);
}


