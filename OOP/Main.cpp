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
			Student student;
			student.Input();
			system("cls");
			student.Output();
			system("pause");
		}break;
		case '2':
		{
			Tochca tochca;
			tochca.Input();
			system("cls");
			tochca.Output();
			system("pause");
		}break;
		}
	} while (true);
	return 0;
}