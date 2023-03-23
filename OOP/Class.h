#include "Library.h"
class Student
{
private:
	string pib;
	string date;
	string number;
	string city1;
	string country1;
	string school;
	string city2;
	string country2;
	string group;
public:
	/*Student(string pib, string date, string number, string city1, string country1, string school, string city2, string country2, string group)
	{
		this->pib = pib;
		this->date = date;
		this->number = number;
		this->city1 = city1;
		this->city2 = city2;
		this->country1 = country1;
		this->country2 = country2;
		this->school = school;
		this->group = group;
	}*/
	void Input()
	{
		cout << "Enter student's name: ";
		getline(cin, pib);
		cout << "Enter student's date of birth: ";
		getline(cin, date);
		cout << "Enter student's phone number: ";
		getline(cin, number);
		cout << "Enter student's city: ";
		getline(cin, city1);
		cout << "Enter student's country: ";
		getline(cin, country1);
		cout << "Enter school name: ";
		getline(cin, school);
		cout << "Enter school city: ";
		getline(cin, city2);
		cout << "Enter school country: ";
		getline(cin, country2);
		cout << "Enter group number: ";
		getline(cin, group);
	}
	void Output() 
	{
		cout << " Name: " << pib << endl;
		cout << " Date of birth: " << date << endl;
		cout << " Phone number: " << number << endl;
		cout << " Student's city: " << city1 << endl;
		cout << " Student's country: " << country1 << endl;
		cout << " School name: " << school << endl;
		cout << " School city:: " << city2 << endl;
		cout << " School country:: " << country2 << endl;
		cout << " Group number: " << group << endl;
		cout << endl;
	}
	string getPib() const
	{
		return pib;
	}
	string getDate() const
	{
		return date;
	}
	string getNumber() const
	{
		return number;
	}
	string getCity1() const
	{
		return city1;
	}
	string getCity2() const
	{
		return city2;
	}
	string getCountry1() const
	{
		return country1;
	}
	string getCountry2() const
	{
		return country2;
	}
	string getSchool() const
	{
		return school;
	}
	string getGroup() const
	{
		return group;
	}
};
class Tochca
{
private:
	double x;
	double y;
	double z;
public:
	Tochca(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Input()
	{
		cout << "Enter x: ";
		getline(cin, x);
		cout << "Enter y: ";
		getline(cin, y);
		cout << "Enter z: ";
		getline(cin, z);
		
	}
	void Output()
	{
		cout << " X: " << x << endl;
		cout << " Y: " << y << endl;
		cout << " Z: " << z << endl;
		cout << endl;
	}
	string getX() const
	{
		return x;
	}
	string getY() const
	{
		return y;
	}
	string getZ() const
	{
		return z;
	}
};