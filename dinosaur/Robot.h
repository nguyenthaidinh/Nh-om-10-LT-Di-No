#pragma once
#include "Hcn.h"
#include "iostream"
#include "mmsystem.h"
#include<windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
#include "Hcnmau.h"
class Robot
{
public:
	
	Hcnmau canh1, canh2, canh3, nhanh1, nhanh2,thancay, duoi2,mat,tay,dau,dau4,dau5,dau6,dau7, than, chan, chan1, dau1, dau2, dau3,than1, than2, than3, than4, than5,than6, than7, chan11, chan12, chan13, chan21, chan22, chan23, duoi, duoi1;
	Robot();
	int x, y;
	Robot(int mx, int my, int r, int g, int b);
	void vehinh(CClientDC* pdc);
	void nhaylen();

};

