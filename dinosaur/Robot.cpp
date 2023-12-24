#include "pch.h"
#include "Robot.h"

Robot::Robot()
{
	x = 0;
	y = 0;
}

Robot::Robot(int mx, int my,  int r, int g, int b)
{
	x = mx;
	y = my;
	
	dau = Hcnmau(mx, my, mx + 20, my + 3, 92, 92, 92);
	dau1 = Hcnmau(dau.x1 - 10, dau.y2, dau.x2 + 12, dau.y2 + 5, 92, 92, 92);
	dau2 = Hcnmau(dau1.x1, dau1.y2, dau1.x1 + 7, dau1.y2 + 5, 92, 92, 92);
	dau3 = Hcnmau(dau1.x1 + 14, dau1.y2, dau1.x2, dau2.y2, 92, 92, 92);
	dau4 = Hcnmau(dau2.x1, dau2.y2, dau3.x2, dau3.y2 + 3, 92, 92, 92);
	dau5 = Hcnmau(dau4.x1, dau4.y2, dau4.x2, dau4.y2 + 9, 92, 92, 92);
	dau6 = Hcnmau(dau5.x1, dau5.y2, dau5.x1 + 22, dau5.y2 + 6, 92, 92, 92);
	dau7 = Hcnmau(dau6.x1, dau6.y2, dau6.x1 + 37, dau6.y2 + 6, 92, 92, 92);
	than = Hcnmau(dau7.x1 - 6, dau7.y2, dau7.x1 + 20, dau7.y2 + 6, 92, 92, 92);
	than1 = Hcnmau(than.x1 - 6, than.y2, than.x2, than.y2 + 6, 92, 92, 92);
	than2 = Hcnmau(than1.x1 - 6, than1.y2, than1.x2 + 6, than1.y2 + 6, 92, 92, 92);
	than3 = Hcnmau(than2.x1, than2.y2, than2.x1 + 38, than2.y2 + 3, 92, 92, 92);
	than4 = Hcnmau(than3.x1 - 6, than3.y2, than3.x1 + 38, than3.y2 + 6, 92, 92, 92);
	than5 = Hcnmau(than4.x1 - 20, than4.y2, than4.x2, than4.y2 + 12, 92, 92, 92);
	than6 = Hcnmau(than5.x1 + 5, than5.y2, than5.x2 - 5, than5.y2 + 6, 92, 92, 92);
	than7 = Hcnmau(than6.x1 + 5, than6.y2, than6.x2 - 5, than6.y2 + 6, 92, 92, 92);
	chan11 = Hcnmau(than7.x1 + 10, than7.y2, than7.x1 + 20, than7.y2 + 6, 92, 92, 92);
	chan12 = Hcnmau(chan11.x1 + 5, chan11.y2, chan11.x1 + 10, chan11.y2 + 12, 92, 92, 92);
	chan13 = Hcnmau(chan12.x2, chan12.y2 - 6, chan12.x2 + 3, chan12.y2, 92, 92, 92);
	chan21 = Hcnmau(than7.x2 - 15, than7.y2, than7.x2 - 5, than7.y2 + 6, 92, 92, 92);
	chan22 = Hcnmau(chan21.x1 + 5, chan21.y2, chan21.x2, chan21.y2 + 12, 92, 92, 92);
	chan23 = Hcnmau(chan22.x2, chan22.y2 - 6, chan22.x2 + 3, chan22.y2, 92, 92, 92);
	duoi = Hcnmau(than5.x1, than5.y1 - 10, than5.x1 + 6, than5.y1, 92, 92, 92);
	duoi1 = Hcnmau(duoi.x2, duoi.y2 - 5, duoi.x2 + 6, duoi.y2, 92, 92, 92);
	duoi2 = Hcnmau(duoi.x1 - 4, duoi.y1 - 10, than5.x1, than5.y2 - 5, 92, 92, 92);
	tay = Hcnmau(than2.x2, than2.y2 - 6, than2.x2 + 4, than2.y2 + 6, 92, 92, 92);
	mat = Hcnmau(dau1.x1 + 2, dau1.y1 + 2, dau1.x1 + 4, dau1.y1 + 2, 255, 255, 0);
	
	

}



void Robot::vehinh(CClientDC* pdc)
{ 
	thancay.vehinh(pdc);
	canh1.vehinh(pdc);
	canh2.vehinh(pdc);
	canh3.vehinh(pdc);
	nhanh1.vehinh(pdc);
	nhanh2.vehinh(pdc);
	mat.vehinh(pdc);
	dau.vehinh(pdc);
	dau1.vehinh(pdc);
	dau2.vehinh(pdc);
	dau3.vehinh(pdc);
	dau4.vehinh(pdc);
	dau5.vehinh(pdc);
	dau6.vehinh(pdc);
	dau7.vehinh(pdc);
	duoi2.vehinh(pdc);
	than.vehinh(pdc);
	than1.vehinh(pdc);
	than2.vehinh(pdc);
	than3.vehinh(pdc);
	than4.vehinh(pdc);
	than5.vehinh(pdc);
	than6.vehinh(pdc);
	than7.vehinh(pdc);
	chan11.vehinh(pdc);;
	chan12.vehinh(pdc);
	chan13.vehinh(pdc);
	chan21.vehinh(pdc);
	chan22.vehinh(pdc);
	chan23.vehinh(pdc);
	duoi.vehinh(pdc);
	duoi1.vehinh(pdc);
	tay.vehinh(pdc);
}

void Robot::nhaylen()
{
	
	int i = 0;
	for (i = 0; i < 35; i++)
	{
		thancay.dichlen();
		canh1.dichlen();
			canh2.dichlen();
			canh3.dichlen();
			nhanh1.dichlen();
			nhanh2.dichlen();
		duoi2.dichlen();
		mat.dichlen();
		tay.dichlen();
		dau.dichlen();
		dau1.dichlen();
		dau6.dichlen();
		dau7.dichlen();
		dau4.dichlen();
		dau5.dichlen();
		dau3.dichlen();
		dau2.dichlen();
		than.dichlen();
		than1.dichlen();
		than2.dichlen();
		than3.dichlen();
		than4.dichlen();
		than5.dichlen();
		than6.dichlen();
		than7.dichlen();
		chan11.dichlen();
		chan12.dichlen();
		chan13.dichlen();
		chan21.dichlen();
		chan22.dichlen();
		chan23.dichlen();
		duoi.dichlen();
		duoi1.dichlen();
		Sleep(10);

	}
	for (i = 0; i < 35; i++)
	{
		thancay.dichxuong();
		canh1.dichxuong();
			canh2.dichxuong();
			canh3.dichxuong();
			nhanh1.dichxuong();
			nhanh2.dichxuong();
		duoi2.dichxuong();
		mat.dichxuong();
		tay.dichxuong();
		dau.dichxuong();
		dau1.dichxuong();
		dau2.dichxuong();
		dau3.dichxuong();
		dau4.dichxuong();
		dau5.dichxuong();
		dau6.dichxuong();
		dau7.dichxuong();
		than.dichxuong();
		than1.dichxuong();
		than2.dichxuong();
		than3.dichxuong();
		than4.dichxuong();
		than5.dichxuong();
		than6.dichxuong();
		than7.dichxuong();
		chan11.dichxuong();
		chan12.dichxuong();
		chan13.dichxuong();
		chan21.dichxuong();
		chan22.dichxuong();
		chan23.dichxuong();
		duoi.dichxuong();
		duoi1.dichxuong();
		Sleep(10);

	}
}
