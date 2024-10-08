#include "Person.h" //���� ����������
#include<iostream>

using namespace std;

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}

Person::~Person()
{
	delete[] name;
	age = 0;
}

void Person::Input()
{
	char buff[30];

	cout << "Input Name: ";
	cin >> buff;
	SetName(buff);

	cout << "Input Age: ";
	cin >> age;
}

void Person::Output()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

void Person::SetName(const char* Name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
}

char* Person::GetName()
{
	return name;
}

void Person::SetAge(int Age)
{
	age = Age;
}

int Person::GetAge()
{
	return age;
}
