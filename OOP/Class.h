#include "Library.h"
class Book
{
private:
	string author;
	string name;
	string publisher;
	int year;
	int number;
	int pages;
public:
	explicit Book(string author, string name, string publisher, int year, int number, int pages)
	{
		this->author = author;
		this->name = name;
		this->number = number;
		this->publisher = publisher;
		this->year = year;
		this->pages = pages;
	}
	string getAuthor() const
	{
		return author;
	}
	string getName() const
	{
		return name;
	}
	string getPublisher() const
	{
		return publisher;
	}
	int getYear() const
	{
		return year;
	}
	int getNumber() const
	{
		return number;
	}
	int getPages() const
	{
		return pages;
	}
	void d() const
	{
		cout << " Author: " << author << endl;
		cout << " Name: " << name << endl;
		cout << " Publisher: " << publisher << endl;
		cout << " Year: " << year << endl;
		cout << " Number: " << number << endl;
		cout << " Pages: " << pages << endl;
		cout << endl;
	}

};
class Woker
{
private:
	string pib;
	string posada;
	int year;
	int cash;
public:
	explicit Woker(string pib, string posada, int year, int cash)
	{
		this->pib = pib;
		this->posada = posada;
		this->cash = cash;
		this->year = year;
	}
	string getPib() const
	{
		return pib;
	}
	string getPosada() const
	{
		return posada;
	}
	int getYear() const
	{
		return year;
	}
	int getCash() const
	{
		return cash;
	}

	void d1() const
	{
		cout << " PIB: " << pib << endl;
		cout << " Position: " << posada << endl;
		cout << " Year: " << year << endl;
		cout << " Salary: " << cash << endl;
		cout << endl;
	}

};