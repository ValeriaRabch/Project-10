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

void Fulling(Book *l) {
	for (int i = 0; i < 10; i++) {
		cout << "Enter name -";
		cin.getline(l[i].name, 50);
		cout  <<"Enter author -";
		cin.getline(l[i].author, 20);
		cout  << "Enter publishing house -";
		cin.getline(l[i].publishing, 20);
		cout  << "Enter genre -";
		cin.getline(l[i].genre, 10);
	}
}

void PrintLibrary(Book l[]) {
	for (int i = 0; i < 10; i++) {
		cout << "Book" << i + 1 << endl;
		cout << "Name: " << l[i].name << endl;
		cout << "Author: " << l[i].author << endl;
		cout << "Publishing houes: " << l[i].publishing << endl;
		cout << "Genre: " << l[i].genre << endl;

	}
}

int main() {
	Book library[10];
	Fulling(library);
	PrintLibrary(library);
	
return 0;
}