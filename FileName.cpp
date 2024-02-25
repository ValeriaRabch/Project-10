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
	for (int i = 0; i < 5; i++) {
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

void PrintLibrary(Book l[]) {         //2
	for (int i = 0; i < 5; i++) {
		cout << "Name: " << l[i].name << endl;
		cout << "Author: " << l[i].author << endl;
		cout << "Publishing houes: " << l[i].publishing << endl;
		cout << "Genre: " << l[i].genre << endl;

	}
}

void Change(Book *l, int index, int a, char text[]) {   //1
	if (a == 1) {
		strcpy(l[index].name, text);
	}
	if (a == 2) {
		strcpy(l[index].author, text);
	}
	if (a == 3) {
		strcpy(l[index].publishing, text);
	}
	if (a == 4) {
		strcpy(l[index].genre, text);
	}
}

void SearchingAutor(Book l[], char author[], int *index) {    //3
	int  y = 0;
	for (int i = 0; i < 10; i++) {
		if (strcmp(l[i].author,author)==0) {
			index[y] = i; y++;
		}
	}
	index[y] = -1;
}

void SearchingName(Book l[], char author[], int* index) {    //4
	int  y = 0;
	for (int i = 0; i < 10; i++) {
		if (strcmp(l[i].name, author) == 0) {
			index[y] = i; y++;
		}
	}
	index[y] = -1;
}

void Print(int index[], Book l[]) {           //3,4
	for (int i = 0; index[i] != -1; i++) {
		cout << "Book" << index[i] + 1 << endl;
		cout << "Name: " << l[index[i]].name << endl;
		cout << "Author: " << l[index[i]].author << endl;
		cout << "Publishing houes: " << l[index[i]].publishing << endl;
		cout << "Genre: " << l[index[i]].genre << endl;
	}
}

Book* SortingName(Book l[]) {       //5
	Book a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (strcmp(l[j].name, l[j + 1].name) == 1) {
				strcpy(a.name, l[j].name);
				strcpy(a.author, l[j].author);
				strcpy(a.publishing, l[j].publishing);
				strcpy(a.genre, l[j].genre);

				strcpy(l[j].name, l[j+1].name);
				strcpy(l[j].author, l[j+1].author);
				strcpy(l[j].publishing, l[j+1].publishing);
				strcpy(l[j].genre, l[j+1].genre);
				
				strcpy(l[j+1].name, a.name);
				strcpy(l[j+1].author, a.author);
				strcpy(l[j+1].publishing, a.publishing);
				strcpy(l[j+1].genre, a.genre);
			}
		}
	}
	return l;
}

Book* SortingAuthor(Book l[]) {    //6
	Book a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (strcmp(l[j].author, l[j + 1].author) == 1) {
				strcpy(a.name, l[j].name);
				strcpy(a.author, l[j].author);
				strcpy(a.publishing, l[j].publishing);
				strcpy(a.genre, l[j].genre);

				strcpy(l[j].name, l[j + 1].name);
				strcpy(l[j].author, l[j + 1].author);
				strcpy(l[j].publishing, l[j + 1].publishing);
				strcpy(l[j].genre, l[j + 1].genre);

				strcpy(l[j + 1].name, a.name);
				strcpy(l[j + 1].author, a.author);
				strcpy(l[j + 1].publishing, a.publishing);
				strcpy(l[j + 1].genre, a.genre);
			}
		}
	}
	return l;
}

Book* SortingPublishing(Book l[]) {    //7
	Book a;
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > 0; j--) {
			if (strcmp(l[j].publishing, l[j + 1].publishing) == -1) {
				strcpy(a.name, l[j].name);
				strcpy(a.author, l[j].author);
				strcpy(a.publishing, l[j].publishing);
				strcpy(a.genre, l[j].genre);

				strcpy(l[j].name, l[j + 1].name);
				strcpy(l[j].author, l[j + 1].author);
				strcpy(l[j].publishing, l[j + 1].publishing);
				strcpy(l[j].genre, l[j + 1].genre);

				strcpy(l[j + 1].name, a.name);
				strcpy(l[j + 1].author, a.author);
				strcpy(l[j + 1].publishing, a.publishing);
				strcpy(l[j + 1].genre, a.genre);
			}
		}
	}
	return l;
}

int main() {
	Book library[5];
	Fulling(library);
	PrintLibrary(library);
	cout << endl;
	/*int index, a; char arr[50];
	cout << "Chose book that you will change"; cin >> index;
	cout << "Chose \n1 - name \n2 - author \n3 - publishing \n4 - genre"; cin >> a;
	cout << "Enter "; cin >> arr;
	Change(library, index-1, a, arr);
	PrintLibrary(library);*/

	/*char t[20];
	int index[11];
	cout << "Which author's book is searching?"; cin >> t;
	SearchingAutor(library, t, index);
	SearchingName(library, t, index);
	Print(index, library);*/
	*library = *SortingPublishing(library);
	PrintLibrary(library);
	
return 0;
}