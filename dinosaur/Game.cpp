#include "pch.h"
#include "Game.h"
void Game::thietlap()
{
	CString str;
	str.Format(_T("Start"));
	n1 = Nutlenh(55, 30, str);
	dc = Duongchay();
	rb = Robot(600, dc.duongvien.y2 - 107, 0, 0, 0);
	dk = 0;
	thang = 0;
	diem = 0;
	baseSpeed = 10.0f; 

}
void Game::GameOver(CClientDC* pdc)
{
	
	dk = 0;
	thang = -1;
	n1.giatri = 0;
	n1.nd.Format(_T("Start"));
	PlaySound(TEXT("C:\\Users\\Admin\\Downloads\\music\\die.wav"), NULL, SND_FILENAME | SND_ASYNC);
	n1.vehinh(pdc);
	
	CString strthua;
	strthua.Format(_T("Game Over"));
	pdc->TextOutW(800, 200, strthua);

}
void Game::capnhatDiem(CClientDC* pdc)
{
	CString strdiem;
	strdiem.Format(_T("diem:  %d       "), diem);
	pdc->TextOutW(140, 35, strdiem);
	dc.vehinh(pdc);
	rb.vehinh(pdc);
}

Game::Game()
{
	thietlap();
}

void Game::vehinh(CClientDC* pdc)
{
	CString strdiem;
	strdiem.Format(_T("diem:  %d         "), diem);
	pdc->TextOutW(140, 35, strdiem);
	n1.vehinh(pdc);
	dc.vehinh(pdc);
	rb.vehinh(pdc);

}

int Game::bamnut(CClientDC* pdc, CPoint p) 
{
	if (n1.bamnutlenh(p) == 1)
	{
		if (n1.giatri == 0)
		{
			thietlap();
			n1.giatri = 1;
			n1.nd.Format(_T("Stop"));
			n1.vehinh(pdc);
			dk = 1;
		}
		else
		{
			n1.giatri = 0;
			n1.nd.Format(_T("Start"));
			n1.vehinh(pdc);
			dk = 0;
		}
		return n1.giatri; 
	}
	return 0;
}

void Game::vatcanchay(CClientDC* pdc) 
{
	float  tangTocdo = 5 + (diem / 50);

	while (dk == 1)
	{
		float speed = baseSpeed + (diem / tangTocdo);
		dc.setTocdo(static_cast<int>(speed));
		dc.chay();
		rb.vehinh(pdc);
		capnhatDiem(pdc);

		if (dc.chamrobot(rb) == 1) 
		{
			GameOver(pdc);
			break; 
		}
		Sleep(30);
	}
}

void Game::capnhathinh(CClientDC* pdc) 
{
	std::chrono::steady_clock::time_point startTime = std::chrono::steady_clock::now();

	while (dk == 1)
	{
		std::chrono::steady_clock::time_point nowTime = std::chrono::steady_clock::now();
		std::chrono::duration<double> time = nowTime - startTime;
		if (time.count() >= 0.5)
		{
			diem++;
			startTime = nowTime;
		}

		capnhatDiem(pdc);

		if (dc.chamrobot(rb) == 1)
		{
			GameOver(pdc);
			break;
		}
		Sleep(30);
	}
}
void Game::robotnhay()
{
	PlaySound(TEXT("C:\\Users\\Admin\\Downloads\\music\\nhay.wav"), NULL, SND_FILENAME | SND_ASYNC);
	rb.nhaylen();
}
