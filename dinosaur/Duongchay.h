#pragma once
#include "Hcn.h"
#include "Robot.h"
#include "Hcnmau.h"	
using namespace std;			
#define XDAU 50
#define YDAU 100
class Duongchay
{
public:
	Hcnmau cay[18];
	int tocdo;
	void tree();
	Hcn duongvien;
	Duongchay();
	void vehinh(CClientDC* pdc);
	void chay();
	int chamrobot(Robot rb);
	void setTocdo(int speed);
};

