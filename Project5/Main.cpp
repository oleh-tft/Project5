#include<iostream>
#include"Person.h"

using namespace std;

int main()
{
	Person a("A", 20);
	a.Output();

	Person b("G", 50);
	b.Output();

	a.SetName("X");
	a.Output();
}