#include "Test.h"



Test::Test() :
	s(USBTX, USBRX)
{
}


Test::~Test()
{
}

void Test::test() {
	s.printf("test\n");
}