#pragma once

#include <Windows.h>

class cTrigger
{
public:
	cTrigger();
	~cTrigger();
	void Trigger();
	DWORD getTriggerKey();
private:
	DWORD triggerKey = 0x05;
};

extern cTrigger* pTrigger;