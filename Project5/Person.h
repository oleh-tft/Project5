#pragma once
class Person // Файл дизайна
{
	char* name;
	int age;

public:
	Person();
	Person(const char* Name, int Age);
	~Person();
	void Output();
};

