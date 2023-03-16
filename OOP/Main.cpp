#include "Class.h"
#include "Menu.h"
int main()
{
	char switch_on;
	do
	{
		system("cls");
		Menu* menu = new Menu;
		menu->Vmenu();
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			const int Books = 5;
			Book books[Books] = {
				Book("J.K. Rowling", "Harry Potter and the Philosopher's Stone", "Bloomsbury Publishing", 1997, 500, 223),
				Book("J.K. Rowling", "Harry Potter and the Chamber of Secrets", "Bloomsbury Publishing", 1998, 600, 251),
				Book("J.R.R. Tolkien", "The Hobbit", "George Allen & Unwin", 1937, 300, 310),
				Book("J.R.R. Tolkien", "The Lord of the Rings", "George Allen & Unwin", 1954, 1500, 1000),
				Book("George Orwell", "1984", "Secker and Warburg", 1949, 1000, 328),
			};
			string author_name = "J.K. Rowling";
			cout << "Books by " << author_name << ":" << endl;
			for (const auto& book : books) {
				if (book.getAuthor() == author_name) {
					book.d();
					cout << endl;
				}
			}
			string publisher_name = "George Allen & Unwin";
			cout << "Books published by " << publisher_name << ":" << endl;
			for (const auto& book : books) {
				if (book.getPublisher() == publisher_name) {
					book.d();
					cout << endl;
				}
			}
			int year_published = 1950;
			cout << "Books published after " << year_published << ":" << endl;
			for (const auto& book : books) {
				if (book.getYear() > year_published) {
					book.d();
					cout << endl;
				}
			}
			system("pause");
		}break;
		case '2':
		{
			const int Wokers = 5;
			Woker wokers[Wokers] = {
				Woker("K.D. Kliamchuk", "PR Manager", 2000, 27000),
				Woker("J.K. Surkov", "Cleaner", 1998, 7000),
				Woker("J.P. Pivovarova", "PR Manager", 2005, 22000),
				Woker("M.T. Dakota", "Cleaner", 1999, 9080),
				Woker("D.E. Klimenuk", "Director", 1992, 79876),
			};
			string position_name = "PR Manager";
			cout << "Position " << position_name << ":" << endl;
			for (const auto& woker : wokers) {
				if (woker.getPosada() == position_name) {
					woker.d1();
					cout << endl;
				}
			}
			string position1_name = "Cleaner";
			cout << "Position " << position1_name << ":" << endl;
			for (const auto& woker : wokers) {
				if (woker.getPosada() == position1_name) {
					woker.d1();
					cout << endl;
				}
			}
			string position2_name = "Director";
			cout << "Position " << position2_name << ":" << endl;
			for (const auto& woker : wokers) {
				if (woker.getPosada() == position2_name) {
					woker.d1();
					cout << endl;
				}
			}
			int year_woker = 1990;
			cout << "People who have been working since " << year_woker << ":" << endl;
			for (const auto& woker : wokers) {
				if (woker.getYear() > year_woker) {
					woker.d1();
					cout << endl;
				}
			}
			int cash_woker = 10000;
			cout << "People whose salary exceeds that " << cash_woker << ":" << endl;
			for (const auto& woker : wokers) {
				if (woker.getCash() > cash_woker) {
					woker.d1();
					cout << endl;
				}
			}
			system("pause");
		}break;
		}
	} while (true);
	return 0;
}