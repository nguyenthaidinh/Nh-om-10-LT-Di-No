#pragma once
#include "Hcn.h"
class Hcnmau :
    public Hcn
{
public:

	int r, g, b;
	Hcnmau(int mx1, int my1, int mx2, int my2, int mr, int mg, int mb);
	Hcnmau();
	void vehinh(CClientDC* pdc);
	void dichtrai(float tocdo);
	
};

