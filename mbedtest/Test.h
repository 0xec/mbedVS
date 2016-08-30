#pragma once

#include <mbed.h>
class Test
{
public:
	Test();
	~Test();

	void test();
private:
	mbed::Serial s;
};

