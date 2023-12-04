#pragma once
#include "TNode.h"
#include <iostream>
using namespace std;

template<class T>
class TList
{
protected:
	TNode<T>* pFirst; // первое звено
	TNode<T>* pCurrent; // текущее звено
	TNode<T>* pPrevious; // звено перед текущим
	TNode<T>* pLast; // последнее звено
	TNode<T>* pStop; // значение указателя, означающего конец списка
	int length; // количество звеньев в списке

public:

	TList();
	~TList();
	int GetLength() { return length; }
	bool IsEmpty(); // список пуст ?
	// вставка звеньев
	void InsertFirst(T item); // перед первым
	void InsertCurrent(T item); // перед текущим 
	void InsertLast(T item);  // вставить последним 

	// удаление звеньев
	void DeleteFirst(); // удалить первое звено 
	void DeleteCurrent(); // удалить текущее звено

	void GoNext(); // сдвиг вправо текущего звена
	// (=1 после применения GoNext для последнего звена списка)

	void Reset(); // установить на начало списка
	bool IsEnd();  // список завершен ?

	T GetCurrentItem();
	void SetCurrentItem(T item) { pCurrent->value = item; }


};
template <class T>
TList<T>::TList()
{

}

template <class T>
TList<T>::~TList()
{

}

template <class T>
bool TList<T>::IsEmpty()
{
	return false;
}

template <class T>
void TList<T>::InsertFirst(T item)
{

}

template <class T>
void TList<T>::InsertLast(T item)
{

}

template <class T>
void TList<T>::InsertCurrent(T item)
{
	
}

template <class T>
void TList<T>::DeleteFirst()
{

}

template <class T>
void TList<T>::DeleteCurrent()
{
	
}

template <class T>
T TList<T>::GetCurrentItem()
{
	if (pCurrent == pStop)
		throw " ";
	return pCurrent->value;
}

template <class T>
void TList<T>::Reset()
{

}

template <class T>
void TList<T>::GoNext()
{

}

template <class T>
bool TList<T>::IsEnd()
{
	return false;
}





