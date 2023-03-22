#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
	int minute;
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
