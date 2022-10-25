#include "tile.h"
#include <stdio.h>
#include<fstream>
#include <iostream>
#include <string>
#include <imapi.h>


using namespace std;
int num;

tile::tile() {
	cout << "Класс создан." << endl;
}
tile::~tile() {
	cout << "Деструктор отработал." << endl;
}
void tile::enterInfo(int num) {

	cout << "Код склада: ";
	cin >> houseCODE;
	cout << "Контактные данные: ";
	cin >> contacts;
	cout << "Количество сотрудников: ";
	cin >> kolvo;
	cout << endl;
	for (int i = 0; i < num; i++) {
		cout << "Код товара: ";
		cin >> new_complect[i].code;
		cout << "Наименование товара: ";
		cin >> new_complect[i].name;
		cout << "Цена: ";
		cin >> new_complect[i].costs;
		cout << "Количество: ";
		cin >> new_complect[i].kolvo_komplect;
		cout << "Страна производителя: ";
		cin >> new_complect[i].country;
		cout << "Материал товара: ";
		cin >> new_complect[i].material;
		cout << "------------------------------------------------------" << endl;
	}

}

void tile::enterfile(int num) {
	ofstream file;
	file.open("file.txt");
	if (file)
	{
		//cout << "Код склада: ";
		file << houseCODE<<endl;
		//cout << "Контактные данные: ";
		file << contacts<<endl;
		//cout << "Количество сотрудников: ";
		file << kolvo<<endl;
		cout << endl;
		/*for (int i = 0; i < num; i++) {
			cout << "Код товара: ";
			cin >> new_complect[i].code;
			cout << "Наименование товара: ";
			cin >> new_complect[i].name;
			cout << "Цена: ";
			cin >> new_complect[i].costs;
			cout << "Количество: ";
			cin >> new_complect[i].kolvo_komplect;
			cout << "Страна производителя: ";
			cin >> new_complect[i].country;
			cout << "Материал товара: ";
			cin >> new_complect[i].material;
			cout << "------------------------------------------------------" << endl;
		}*/
	}
}
	

void tile::printInfo(int num) {
	cout << "Код склада: " << houseCODE << endl;
	cout << "Контактные данные: " << contacts << endl;
	cout << "Количество сотрудников: " << kolvo << endl;
	cout << endl;
	for (int i = 0; i < num; i++) {
		cout << "Код товара: " << new_complect[i].code << endl;
		cout << "Наименование товара" << new_complect[i].name << endl;
		cout << "Цена: " << new_complect[i].costs << endl;
		cout << "Количество: " << new_complect[i].kolvo_komplect << endl;
		cout << "Страна производителя: " << new_complect[i].country << endl;
		cout << "Материал товара: " << new_complect[i].material << endl;
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
		cout << "Меню" << endl;
		cout << "1. Ввести данные" << endl;
		cout << "2. Вывести данные" << endl;
		cout << "3. Изменить код склада. " << endl;
		cout << "4. Изменить контакты. " << endl;
		cout << "5. Изменить количество сотрудников. " << endl;
		cout << "6. Запись в файл. " << endl;
		cout << "7. Выход из программы" << endl;
		
		cout << "Введите номер операции: "; cin >> a;
		cout << endl;

		switch (a) {
		case 1:
			cout << "Введите количество записей товаров: ";
			cin >> num;
			tiles->enterInfo(num);
			break;
		case 2:
			tiles->printInfo(num);
			break;
		case 3:
			cout << "Введите новый код склада: ";
			cin >> new_house;
			tiles->new_code(new_house);
			break;
		case 4:
			cout << "Введите новые контакты: ";
			cin >> new_contacts;
			tiles->new_cont(new_contacts);
			break;
		case 5:
			cout << "Введите новое количество: ";
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


