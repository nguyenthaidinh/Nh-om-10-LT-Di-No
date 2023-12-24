#pragma once
#include "Duongchay.h"
#include "Robot.h"
#include "Nutlenh.h"
#include <chrono>;
#pragma comment(lib, "winmm.lib")
using namespace std;
class Game
{
public:

	int diem;
	int dk, thang;
	Nutlenh n1, n2;
	Duongchay dc;
	Robot rb;
	Game();
	void vehinh(CClientDC* pdc);
	int bamnut(CClientDC* pdc, CPoint p);
	void vatcanchay(CClientDC* pdc);
	void capnhathinh(CClientDC* pdc);
	void robotnhay();
	void thietlap();
	std::chrono::steady_clock::time_point startTime;
	void GameOver(CClientDC* pdc);
	void capnhatDiem(CClientDC* pdc);
	float baseSpeed;
};

