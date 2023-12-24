#include "pch.h"
#include "Hcnmau.h"

Hcnmau::Hcnmau(int mx1, int my1, int mx2, int my2, int mr, int mg, int mb) :Hcn(mx1, my1, mx2, my2)
{
	r = mr;
	g = mg;
	b = mb;
}

Hcnmau::Hcnmau()
{

	r = 0;
	g = 0;
	b = 0;

}

void Hcnmau::vehinh(CClientDC* pdc)
{

	CPen pen(PS_SOLID, 1, RGB(r, g, b));
	CPen* pOldPen = pdc->SelectObject(&pen);
	CBrush myBrush(RGB(r, g, b));
	CBrush* pOldBrush = pdc->SelectObject(&myBrush);
	pdc->Rectangle(x1, y1, x2, y2);
	pdc->SelectObject(pOldPen);
	pdc->SelectObject(pOldBrush);

}

void Hcnmau::dichtrai(float tocdo)
{
	x1 -= tocdo;
	x2 -= tocdo;
}


