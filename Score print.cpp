//Score.h
#ifndef SCORE_H
#define SCORE_H
#include<iostream>
#include<string>
using namespace std;
class score
{
public:
	score(string, int, int);
	void setName(string);
	void setMath(int);
	void setChinese(int);
	string getName();
	int getMath();
	int getChinese();
	double getAverage();
	void print();


private:
	string name;
	int math;
	int chinese;
};
#endif





//Score.cpp
#include"Score.h"
score::score(string newName, int newMath, int newChinese)
{
	name = newName;
	math = newMath;
	chinese = newChinese;
}
void score::setName(string newName)
{
	name = newName;
}
void score::setMath(int newMath)
{
	math = newMath;
}
void score::setChinese(int newChinese)
{
	chinese = newChinese;
}
string score::getName()
{
	return name;
}
int score::getMath()
{
	return math;
}
int score::getChinese()
{
	return chinese;
}
double score::getAverage()
{
	return (math + chinese) / 2;
}
void score::print()
{
	cout << name << " " << math << " " << chinese << " " << getAverage() << endl;
}




//main.cpp
#include"Score.h"
int main()
{
	string name;
	int math;
	cin >> name >> math;
	score score1("John", 90, 80);
	score score2("Mary", 80, 75);

	score1.setName(name);
	score2.setMath(math);
	score1.print();
	score2.print();
	system("pause");
}
