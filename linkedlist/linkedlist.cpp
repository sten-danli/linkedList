#include <iostream>
using namespace std;

struct Student
{
	int id;
	char name[16];
	Student* next;
};

Student ss[4] =
{
	{201501,"lidan",},
	{201502,"sten"},
	{201503,"feng"},
	{201504,"unname"}
};

int main()
{
	//链表的构造
	ss[0].next = &ss[1];
	ss[1].next = &ss[2];
	ss[2].next = &ss[3];
	ss[3].next = 0;
	//链表的遍历
	Student* p = &ss[0];
	while (p)
	{
		cout << "ID: " << p->id << "name: " << p->name << endl;
		p = p->next;
	}

	return 0;
}