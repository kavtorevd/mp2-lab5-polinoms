#pragma once
struct TMonom
{
	double coef; // коэффициент монома
	int index; // индекс (свертка степеней)


	TMonom() { }

	TMonom(double coef, int degX, int degY, int degZ) { }

	void SetCoef(int cval) { coef = cval; }
	int GetCoef(void) { return coef; }

	void SetIndex(int ival) { index = ival; }
	int GetIndex(void) { return index; }


	bool operator==(const TMonom& other) { }
	
	bool operator>(const TMonom& other) { }

	bool operator<(const TMonom& other) { }


};