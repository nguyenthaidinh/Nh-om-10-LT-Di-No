#include "pch.h"
#include "Duongchay.h"


void Duongchay::tree()
{

	srand(time(0));
	int loai = rand() % 4;
	if (loai == 0)
	{
		cay[0] = Hcnmau(XDAU + 1270, YDAU + 430, XDAU + 1280, YDAU + 500, 0, 100, 0);
		cay[1] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[2] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[3] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[4] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[5] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

		cay[6] = Hcnmau(XDAU + 1270, YDAU + 430, XDAU + 1280, YDAU + 500, 0, 100, 0);
		cay[7] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[8] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[9] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[10] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[11] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

		cay[12] = Hcnmau(XDAU + 1270, YDAU + 430, XDAU + 1280, YDAU + 500, 0, 100, 0);
		cay[13] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[14] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[15] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[16] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[17] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

	}
	if (loai == 1)
	{

		cay[0] = Hcnmau(XDAU + 1230, YDAU + 430, XDAU + 1240, YDAU + 500, 0, 100, 0);
		cay[1] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[2] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[3] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[4] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[5] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

		cay[6] = Hcnmau(XDAU + 1275, YDAU + 450, XDAU + 1280, YDAU + 500, 0, 100, 0);
		cay[7] = Hcnmau(cay[6].x1 - 8, cay[6].y1 + 30, cay[6].x1 + 13, cay[6].y1 + 33, 0, 100, 0);
		cay[8] = Hcnmau(cay[7].x1 + 3, cay[7].y2, cay[7].x2 - 3, cay[7].y2 + 3, 0, 100, 0);
		cay[9] = Hcnmau(cay[8].x1 + 3, cay[8].y2, cay[8].x2 - 3, cay[8].y2 + 3, 0, 100, 0);
		cay[10] = Hcnmau(cay[7].x1, cay[7].y1 - 20, cay[7].x1 + 5, cay[7].y1, 0, 100, 0);
		cay[11] = Hcnmau(cay[7].x2 - 5, cay[7].y1 - 20, cay[7].x2, cay[7].y1, 0, 100, 0);

		cay[12] = Hcnmau(XDAU + 1230, YDAU + 430, XDAU + 1240, YDAU + 500, 0, 100, 0);
		cay[13] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[14] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[15] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[16] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[17] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

	}

	if (loai == 2)
	{

		cay[0] = Hcnmau(XDAU + 1230, YDAU + 430, XDAU + 1240, YDAU + 500, 0, 100, 0);
		cay[1] = Hcnmau(cay[0].x1 - 15, cay[0].y1 + 40, cay[0].x1 + 25, cay[0].y1 + 43, 0, 100, 0);
		cay[2] = Hcnmau(cay[1].x1 + 5, cay[1].y2, cay[1].x2 - 5, cay[1].y2 + 3, 0, 100, 0);
		cay[3] = Hcnmau(cay[2].x1 + 5, cay[2].y2, cay[2].x2 - 2, cay[2].y2 + 3, 0, 100, 0);
		cay[4] = Hcnmau(cay[1].x1 - 2, cay[1].y1 - 30, cay[1].x1 + 8, cay[1].y1, 0, 100, 0);
		cay[5] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 30, cay[1].x2 + 5, cay[1].y1, 0, 100, 0);

		cay[6] = Hcnmau(XDAU + 1275, YDAU + 450, XDAU + 1280, YDAU + 500, 0, 100, 0);
		cay[7] = Hcnmau(cay[6].x1 - 8, cay[6].y1 + 30, cay[6].x1 + 13, cay[6].y1 + 33, 0, 100, 0);
		cay[8] = Hcnmau(cay[7].x1 + 3, cay[7].y2, cay[7].x2 - 3, cay[7].y2 + 3, 0, 100, 0);
		cay[9] = Hcnmau(cay[8].x1 + 3, cay[8].y2, cay[8].x2 - 3, cay[8].y2 + 3, 0, 100, 0);
		cay[10] = Hcnmau(cay[7].x1, cay[7].y1 - 20, cay[7].x1 + 5, cay[7].y1, 0, 100, 0);
		cay[11] = Hcnmau(cay[7].x2 - 5, cay[7].y1 - 20, cay[7].x2, cay[7].y1, 0, 100, 0);

		cay[12] = Hcnmau(XDAU + 1190, YDAU + 450, XDAU + 1195, YDAU + 500, 0, 100, 0);
		cay[13] = Hcnmau(cay[12].x1 - 8, cay[12].y1 + 30, cay[12].x1 + 13, cay[12].y1 + 33, 0, 100, 0);
		cay[14] = Hcnmau(cay[13].x1 + 3, cay[13].y2, cay[13].x2 - 3, cay[13].y2 + 3, 0, 100, 0);
		cay[15] = Hcnmau(cay[14].x1 + 3, cay[14].y2, cay[14].x2 - 3, cay[14].y2 + 3, 0, 100, 0);
		cay[16] = Hcnmau(cay[13].x1, cay[13].y1 - 20, cay[13].x1 + 5, cay[13].y1, 0, 100, 0);
		cay[17] = Hcnmau(cay[13].x2 - 5, cay[13].y1 - 20, cay[13].x2, cay[13].y1, 0, 100, 0);

	}
	if (loai == 3)
	{
	    cay[0] = Hcnmau(XDAU + 1215, YDAU + 450, XDAU + 1220, YDAU + 500, 0, 100, 0);
		cay[1] = Hcnmau(cay[0].x1 - 8, cay[0].y1 + 30, cay[0].x1 + 13, cay[0].y1 + 33, 0, 100, 0);
		cay[2] = Hcnmau(cay[1].x1 + 3, cay[1].y2, cay[1].x2 - 3, cay[1].y2 + 3, 0, 100, 0);
		cay[3] = Hcnmau(cay[2].x1 + 3, cay[2].y2, cay[2].x2 - 3, cay[2].y2 + 3, 0, 100, 0);
		cay[4] = Hcnmau(cay[1].x1, cay[1].y1 - 20, cay[1].x1 + 5, cay[1].y1, 0, 100, 0);
		cay[5] = Hcnmau(cay[1].x2 - 5, cay[1].y1 - 20, cay[1].x2, cay[1].y1, 0, 100, 0);

		cay[6] = Hcnmau(XDAU + 1245, YDAU + 450, XDAU + 1250, YDAU + 500, 0, 100, 0);
		cay[7] = Hcnmau(cay[6].x1 - 8, cay[6].y1 + 30, cay[6].x1 + 13, cay[6].y1 + 33, 0, 100, 0);
		cay[8] = Hcnmau(cay[7].x1 + 3, cay[7].y2, cay[7].x2 - 3, cay[7].y2 + 3, 0, 100, 0);
		cay[9] = Hcnmau(cay[8].x1 + 3, cay[8].y2, cay[8].x2 - 3, cay[8].y2 + 3, 0, 100, 0);
		cay[10] = Hcnmau(cay[7].x1, cay[7].y1 - 20, cay[7].x1 + 5, cay[7].y1, 0, 100, 0);
		cay[11] = Hcnmau(cay[7].x2 - 5, cay[7].y1 - 20, cay[7].x2, cay[7].y1, 0, 100, 0);

		cay[12] = Hcnmau(XDAU + 1190, YDAU + 450, XDAU + 1195, YDAU + 500, 0, 100, 0);
		cay[13] = Hcnmau(cay[12].x1 - 8, cay[12].y1 + 30, cay[12].x1 + 13, cay[12].y1 + 33, 0, 100, 0);
		cay[14] = Hcnmau(cay[13].x1 + 3, cay[13].y2, cay[13].x2 - 3, cay[13].y2 + 3, 0, 100, 0);
		cay[15] = Hcnmau(cay[14].x1 + 3, cay[14].y2, cay[14].x2 - 3, cay[14].y2 + 3, 0, 100, 0);
		cay[16] = Hcnmau(cay[13].x1, cay[13].y1 - 20, cay[13].x1 + 5, cay[13].y1, 0, 100, 0);
		cay[17] = Hcnmau(cay[13].x2 - 5, cay[13].y1 - 20, cay[13].x2, cay[13].y1, 0, 100, 0);

	}
}


Duongchay::Duongchay()
{
	duongvien = Hcnmau(XDAU + 300, YDAU, XDAU + 1300, YDAU + 500, 255, 255, 255); // (350,100,1350,600)
	tree();
	tocdo = 0;
}

void Duongchay::vehinh(CClientDC* pdc)
{
	duongvien.vehinh(pdc);
	for (int i = 0; i < 18; i++)
	{

		cay[i].vehinh(pdc);

	}
}
void Duongchay::chay() {
	for (int i = 0; i < 18; i++)
	{
		cay[i].dichtrai(tocdo);
	}

	int gioihan = 0;
	while (gioihan < 18)
	{
		if (cay[gioihan].x1 <= duongvien.x1)
		{

			for (int j = gioihan; j < 17; j++)
			{
				cay[j] = cay[j + 1];
			}
			tree();
		}
		else
		{
			gioihan++;
		}
	}
}


int Duongchay::chamrobot(Robot rb)
{
	int i = 0;
	for (i = 0; i < 18; i++)
	{
		if (cay[i].ktgiaonhau(rb.dau) == 1 || cay[i].ktgiaonhau(rb.dau1) == 1
			|| cay[i].ktgiaonhau(rb.dau2) == 1 || cay[i].ktgiaonhau(rb.dau3) == 1
			|| cay[i].ktgiaonhau(rb.than) == 1 || cay[i].ktgiaonhau(rb.than1) == 1
			|| cay[i].ktgiaonhau(rb.than2) == 1 || cay[i].ktgiaonhau(rb.than3) == 1
			|| cay[i].ktgiaonhau(rb.than4) == 1 || cay[i].ktgiaonhau(rb.than5) == 1
			|| cay[i].ktgiaonhau(rb.than6) == 1 || cay[i].ktgiaonhau(rb.than7) == 1
			|| cay[i].ktgiaonhau(rb.chan12) == 1 || cay[i].ktgiaonhau(rb.chan11) == 1
			|| cay[i].ktgiaonhau(rb.chan13) == 1 || cay[i].ktgiaonhau(rb.chan21) == 1
			|| cay[i].ktgiaonhau(rb.chan22) == 1 || cay[i].ktgiaonhau(rb.chan23) == 1
			|| cay[i].ktgiaonhau(rb.duoi) == 1 || cay[i].ktgiaonhau(rb.duoi1) == 1)

			return 1;
	}
	return 0;
}

void Duongchay::setTocdo(int speed)
{
	tocdo = speed;
}


