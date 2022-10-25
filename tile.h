#pragma once
class tile
{
private:
	int houseCODE;
	char contacts[15];
	int kolvo;

	struct komplect {
		int code;
		char name[15];
		int costs;
		int kolvo_komplect;
		char country[15];
		char material[15];
	}; struct komplect new_complect[15];

public:
	tile();
	~tile();
	tile(tile& obj);
	void enterInfo(int num);
	void printInfo(int num);
	void new_code(int new_house);
	void new_cont(char new_contacts[]);
	void new_kolvo(int new_kolvo);
	void enterfile(int num); 
};




