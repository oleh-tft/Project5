#pragma once
class Person // ���� �������
{
	char* name;
	int age;

public:
	Person();
	Person(const char* Name, int Age);
	~Person();
	void Output();
};

