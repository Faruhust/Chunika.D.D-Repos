#include "Lab8_Header.h"




Node* CreateListConsole() { // user`s input 

	Node* current, * begin, * previous;
	begin = previous = current = new Node;

	cout << 1 << ") Enter: name, type, temperature, speed \n --> ";
	cin >> current->name >> current->type >> current->tempr >> current->speed;
	for (size_t i = 0; i < 2; ++i) {
		current = new Node;
		cout << i + 2 << ") Enter: name, type, temperature, speed \n --> ";
		cin >> current->name >> current->type >> current->tempr >> current->speed;
		previous->next = current;
		previous = current;
	}


	previous->next = NULL;
	return begin;



}


Node* CreateListRandom() { // randomize the information 

	Node* current, * begin, * previous;
	begin = previous = current = new Node;

	char letters[] = { 'P', 'O' };
	int choose;
	cout << "How many random sets you want to create? ->  ";

	short n, m;
	char ch[11] = { 'L','i','q','d','-' };
	m = rand() % 3 + 8;
	ch[5] = rand() % 26 + 65;
	for (int j = 6; j < m; j++)
	{
		ch[j] = rand() % 26 + 97;
	}
	strcpy(current->name, ch);
	for (int i = 5; i < 10; i++)
	{
		ch[i] = '\0';
	}
	cin >> choose;

	current->type = letters[rand() % 2];
	current->tempr = rand() + 1;
	current->speed = rand() + 10.0;

	for (size_t i = 0; i < choose - 1; ++i) {
		current = new Node;

		short n, m;
		char ch[11] = { 'L','i','q','d','-' };
		m = rand() % 3 + 8;
		ch[5] = rand() % 26 + 65;
		for (int j = 6; j < m; j++)
		{
			ch[j] = rand() % 26 + 97;
		}
		strcpy(current->name, ch);
		for (int i = 5; i < 10; i++)
		{
			ch[i] = '\0';
		}

		current->type = letters[rand() % 2];
		current->tempr = rand() + 1;
		current->speed = rand() + 10.0;
		previous->next = current;
		previous = current;
	}


	previous->next = NULL;
	return begin;

}




void PrintList(Node* begin) { // print list table information

	Node* current;
	cout << "---------------------------------------------------\n";
	cout << "|           The speed of sound in liquids          |\n";
	cout << "|--------------------------------------------------|\n";
	cout << "|  Substance |  Type | Temp.(d.C) |  Speed.​​(m/s) |\n";
	cout << "|------------|-------|------------|----------------|\n";
	current = begin;
	while (current) {
		printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->tempr, current->speed);
		current = current->next;
	}
	cout << "----------------------------------------------------\n";
	cout << "|Note: the following type encoding is accepted:    | \n";
	cout << "|   Liquid type: P - pure substance, O - oil       | \n";
	cout << "---------------------------------------------------\n";
	cout << "\n\n\n\n";

}





void SearchByDenomination(Node* begin) { // searching by name 

	Node* current = begin;
	char* nameSearch = new char[15];
	short tempr = 0;
	cout << "Enter the name detail: ";
	cin >> nameSearch;
	cout << "---------------------------------------------------\n";
	cout << "|           The speed of sound in liquids          |\n";
	cout << "|--------------------------------------------------|\n";
	cout << "|  Substance |  Type | Temp.(d.C) |  Speed.(m/s)   |\n";
	cout << "|------------|-------|------------|----------------|\n";
	while (current) {
		if (strcmp(current->name, nameSearch) == 0) {
			printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->tempr, current->speed);
			tempr++;
		}
		current = current->next;
	}
	cout << "----------------------------------------------------\n";
	cout << "|Note: the following type encoding is accepted:    | \n";
	cout << "|   Liquid type: P - pure substance, O - oil       | \n";
	cout << "---------------------------------------------------\n";
	if (tempr > 0)
		cout << "Total Found: " << tempr << endl;
	else {
		system("cls");
		cout << endl << "Not found" << endl;
	}
	delete[]nameSearch;

}




void SearchByType(Node* begin) { // searhing by type

	Node* current = begin;
	char typeSearch;
	short tempr = 0;
	cout << "Enter a type of detail: ";
	cin >> typeSearch;
	cout << "---------------------------------------------------\n";
	cout << "|           The speed of sound in liquids          |\n";
	cout << "|--------------------------------------------------|\n";
	cout << "|  Substance |  Type | Temp.(d.C) |  Speed.(m/s)   |\n";
	cout << "|------------|-------|------------|----------------|\n";
	while (current) {
		if (current->type == typeSearch) {
			printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->tempr, current->speed);
			tempr++;
		}
		current = current->next;
	}
	cout << "----------------------------------------------------\n";
	cout << "|Note: the following type encoding is accepted:    | \n";
	cout << "|   Liquid type: P - pure substance, O - oil       | \n";
	cout << "---------------------------------------------------\n";
	if (tempr > 0)
		cout << "Total Found: " << tempr << endl;
	else {
		system("cls");
		cout << endl << "Not found" << endl;
	}

}




void SearchByQuantity(Node* begin) { // searhing by tempr

	Node* current = begin;
	int quantitySearch;
	short tempr = 0;
	cout << "Enter temperature of details: ";
	cin >> quantitySearch;
	cout << "---------------------------------------------------\n";
	cout << "|           The speed of sound in liquids          |\n";
	cout << "|--------------------------------------------------|\n";
	cout << "|  Substance |  Type | Temp.(d.C) |  Speed.(m/s)   |\n";
	cout << "|------------|-------|------------|----------------|\n";
	while (current) {
		if (current->tempr == quantitySearch) {
			printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->tempr, current->speed);
			tempr++;
		}
		current = current->next;
	}
	cout << "----------------------------------------------------\n";
	cout << "|Note: the following type encoding is accepted:    | \n";
	cout << "|   Liquid type: P - pure substance, O - oil       | \n";
	cout << "---------------------------------------------------\n";
	if (tempr > 0)
		cout << "Total Found: " << tempr << endl;
	else {
		system("cls");
		cout << endl << "Not found" << endl;
	}

}





void SearchByWeight(Node* begin) { // searhing by speed

	Node* current = begin;
	float weightSearch;
	short tempr = 0;
	cout << "Enter details` speed: ";
	cin >> weightSearch;
	cout << "---------------------------------------------------\n";
	cout << "|           The speed of sound in liquids          |\n";
	cout << "|--------------------------------------------------|\n";
	cout << "|  Substance |  Type | Temp.(d.C) |  Speed.(m/s)   |\n";
	cout << "|------------|-------|------------|----------------|\n";
	while (current) {
		if (current->speed == weightSearch) {
			printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->tempr, current->speed);
			tempr++;
		}
		current = current->next;
	}
	cout << "----------------------------------------------------\n";
	cout << "|Note: the following type encoding is accepted:    | \n";
	cout << "|   Liquid type: P - pure substance, O - oil       | \n";
	cout << "---------------------------------------------------\n";
	if (tempr > 0)
		cout << "Total Found: " << tempr << endl;
	else {
		system("cls");
		cout << endl << "Not found" << endl;
	}

}






void AddTermBegin(Node** begin) { // adding new item in the beginning of the list

	Node* current = new Node;
	cout << ") Enter: name, type, temperature, speed \n --> ";
	cin >> current->name >> current->type >> current->tempr >> current->speed;
	current->next = *begin;
	*begin = current;

}
void DeleteTermBegin(Node** begin) {  // delete from the beginnng of list

	Node* current = *begin;
	*begin = current->next;
	delete current;

}



void AddTermEnd(Node* begin) { // adding new item in the end of the list

	Node* current = begin, * previous = NULL;
	while (current)
	{
		previous = current;
		current = current->next;
	}
	current = new Node;
	cout << ") Enter: name, type, temperature, speed \n --> ";
	cin >> current->name >> current->type >> current->tempr >> current->speed;
	previous->next = current;
	current->next = NULL;
}
void DeleteTermEnd(Node** begin) { // delete from the end of list
	Node* current = *begin, * previous = NULL;
	while (current->next) {
		previous = current;
		current = current->next;
	}
	if (previous == NULL) {
		DeleteTermBegin(begin);
		return;
	}
	previous->next = NULL;
	delete current;

}





void AddTermTag(Node* begin) { // inserting item 

	Node* current = begin, * previous = current;

	char* NumberTag = new char[15];
	cout << "Enter the previous liquid name that will be before your`s ->  "; // item that will be the previous
	cin >> NumberTag;

	while (current) {
		if (strcmp(previous->name, NumberTag) == 0) { // searich previous
			current = new Node;
			current->next = previous->next;
			previous->next = current;
			cout << ") Enter: name, type, temperature, speed \n --> "; // insert item
			cin >> current->name >> current->type >> current->tempr >> current->speed;
			system("cls");
			cout << "Information has been successfully added." << endl;
			return;
		}
		previous = current;            // inserting
		current = current->next;
	}
	if (strcmp(previous->name, NumberTag) == 0) { // searich previous
		current = new Node;
		cout << ") Enter: name, type, temperature, speed \n --> ";
		cin >> current->name >> current->type >> current->tempr >> current->speed; // insert item
		previous->next = current;  // inserting
		current->next = NULL;
		return;
	}
	system("cls");
	cout << "\n ERROR! \n";
	delete[] NumberTag;

}




void RemoveTermTag(Node** begin) { // remove inserted item

	Node* current = *begin, * previous = NULL;

	char* NumberTag = new char[15];
	cout << "Enter the liquid name ->  ";
	cin >> NumberTag;

	if (strcmp(current->name, NumberTag) == 0) {
		DeleteTermBegin(begin);
		system("cls");
		cout << "Information has been successfully deleted." << endl;
		return;
	}
	while (current) {
		if (strcmp(current->name, NumberTag) == 0) {
			previous->next = current->next;
			delete current;
			system("cls");
			cout << "Information has been successfully deleted." << endl;
			return;
		}
		else {
			previous = current;
			current = current->next;
		}
	}
	system("cls");
	cout << "\n ERROR! \n " << endl;
	delete[] NumberTag;

}








void SortTerm(Node* begin, int set) { // sorting information
	Node* left = begin;
	Node* right = begin->next;
	Node* temp = new Node;



	// preset switch 
	switch (set) {

	case 1: // sort by name
		while (left->next) {

			while (right) {

				if ((strcmp(left->name, right->name) > 0)) {

					strcpy(temp->name, left->name);
					strcpy(left->name, right->name);
					strcpy(right->name, temp->name);

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	case 2: // sort by type
		while (left->next) {

			while (right) {

				if (left->type > right->type) {

					temp->type = left->type;
					left->type = right->type;
					right->type = temp->type;

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	case 3: // sort by tempr
		while (left->next) {

			while (right) {

				if (left->tempr > right->tempr) {

					temp->tempr = left->tempr;
					left->tempr = right->tempr;
					right->tempr = temp->tempr;

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	case 4: // sort by speed
		while (left->next) {

			while (right) {

				if (left->speed > right->speed) {

					temp->speed = left->speed;
					left->speed = right->speed;
					right->speed = temp->speed;

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	default:
		system("cls");
		break;

	}


}





void SaveInFile(Node* begin) { // writing in data.txt

	Node* current = begin;
	FILE* data;
	fopen_s(&data, "data.txt", "w");
	if (!data) {
		cout << "ERROR. Missing data.txt" << endl;
	}
	while (current)
	{
		fprintf(data, "\n%s\t%c\t%d\t%lg", current->name, current->type, current->tempr, current->speed);
		current = current->next;
	}
	cout << "File has been successfully saved." << endl;
	fclose(data);

}





Node* LoadFromFile() { // reading from data.txt

	Node* current, * begin, * previous;
	previous = current = begin = new Node;
	FILE* data;
	fopen_s(&data, "data.txt", "r");
	if (!data) {
		cout << "ERROR. Missing data.txt";
		return NULL;
	}
	if (fgetc(data) == EOF) {
		cout << "File is empty.";
		return NULL;
	}
	fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->tempr, &current->speed);
	while (!feof(data)) {
		current = new Node;
		fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->tempr, &current->speed);
		previous->next = current;
		previous = current;
	}
	current->next = NULL;
	cout << "File has been successfully saved." << endl;
	fclose(data);
	return begin;
}





void FreeList(Node** begin) { // clean list
	Node* current = *begin;
	while (current) {
		*begin = (*begin)->next;
		free(current);
		current = *begin;
	}
}
bool checkNULL(Node* begin) { // cheking on empty 
	if (begin == NULL) {
		cout << "List is empty.";
		return 0;
	}
	return 1;
}
