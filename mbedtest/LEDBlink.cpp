#include <mbed.h>
#include "Test.h"
mbed::DigitalOut p(LED1);

int main(void)
{
	while (1) {
		Test t;
		p = !p;
		wait_ms(100);
		p = !p;
		wait_ms(1000);
		t.test();
	}
	return 0;
}
