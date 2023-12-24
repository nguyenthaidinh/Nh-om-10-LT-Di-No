#include "pch.h"
#include "Tronmau.h"

Tronmau::Tronmau(int mx, int my, int md, int mr, int mg, int mb)
{
	x = mx;
	y = my;
	d= md;
	r = mr;
	g = mg;
	b = mb;
}

Tronmau::Tronmau()
{
}

Hcn Tronmau::xuathvnt()
{
	int x1, x2, y1, y2;
	x1 = x - r;
	y1 = y - r;
	x2 = x + r;
	y2 = y + r;
	Hcn hcn(x1, y1, x2, y2);
	return hcn;
}

void Tronmau::vehinh(CClientDC* pDC)
{
	CPen pen(PS_SOLID, 1, RGB(r, g, b));
	CPen* pOldPen = pDC->SelectObject(&pen);
	CBrush myBrush(RGB(r, g, b));
	CBrush* pOldBrush = pDC->SelectObject(&myBrush);
	Hcn hcn1 = this->xuathvnt();
	pDC->Ellipse(hcn1.x1, hcn1.y1, hcn1.x2, hcn1.y2);
	pDC->SelectObject(pOldPen);
	pDC->SelectObject(pOldBrush);
}
