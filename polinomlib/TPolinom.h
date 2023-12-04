#pragma once
#include "THeadList.h"
#include "TMonom.h"
#include <string>

const int nonDisplayedZeros = 4; // Количество неотображаемых нулей при выводе коэффициента полинома
								 // Кол-во символов после запятой = 6 - nonDisplayedZeros


class TPolinom : public THeadList<TMonom>
{
public:
	TPolinom();
	TPolinom(TPolinom& other);
	TPolinom(string str);
	TPolinom& operator=(TPolinom& other); // присваивание
	TPolinom& operator+(TPolinom& q); // сложение полиномов

	// дополнительно можно реализовать:
	void AddMonom(TMonom newMonom); // добавление монома
	TPolinom MultMonom(TMonom monom); // умножение мономов
	TPolinom AddPolinom(TPolinom& other); // добавление полинома
	TPolinom operator*(double coef); // умножение полинома на число
	TPolinom operator* (TPolinom& other); // умножение полиномов
	bool operator==(TPolinom& other); // сравнение полиномов на равенство
	string ToString(); // перевод в строку
};

TPolinom::TPolinom() :THeadList<TMonom>::THeadList()
{

}

TPolinom::TPolinom(TPolinom& other)
{

}

TPolinom::TPolinom(string str)
{	
	
}

TPolinom& TPolinom::operator=(TPolinom& other)
{
	return *this;
}

void TPolinom::AddMonom(TMonom m)
{
	
}

TPolinom TPolinom::MultMonom(TMonom monom)
{
	return *this;
}

TPolinom& TPolinom::operator+(TPolinom& other)
{
	return *this;
}

TPolinom TPolinom::AddPolinom(TPolinom& other)
{
	return *this;
}

TPolinom TPolinom::operator*(double coef)
{
	return *this;
}

TPolinom TPolinom::operator*(TPolinom& other)
{
	return *this;
}

bool TPolinom::operator==(TPolinom& other)
{
	return false;
}


string TPolinom::ToString()
{
	string result;
	return result;
}
