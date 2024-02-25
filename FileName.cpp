#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

struct Book {
	char name[50];
	char author[20];
	char publishing[20];
	char genre[10];
};

void Fulling(Book* l) {
	for (int i = 0; i < 5; i++) {
		cout << "Enter name -";
		cin.getline(l[i].name, 50);
		cout << "Enter author -";
		cin.getline(l[i].author, 20);
		cout << "Enter publishing house -";
		cin.getline(l[i].publishing, 20);
		cout << "Enter genre -";
		cin.getline(l[i].genre, 10);
	}
}

int main() {
	Book library[5];
	Fulling(library);

}