#pragma once
#include "Hcn.h"
class Tronmau
{
private:
	int x, y, d;
public:
	int r, g, b;
	Tronmau(int mx, int my, int md, int mr, int mg, int mb);
	Tronmau();
	Hcn xuathvnt();
	void vehinh(CClientDC* pDC);
};
	

