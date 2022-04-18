#include "semi.h"
int _printf(const char *format, ...)
{
	va_list call;
	unsigned int i, length = 0;

	va_start(call, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++) /*runs along the chain*/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{   _putchar('%');
				i = i + 1;
				length++;
			}
			else if (mod_character_s(format, i + 1) != '\0')
			{   length += mod_character_s(format, i + 1)(call);
				i = i + 1;
			}
			else
			{ _putchar(format[i]);
				length++;
			}
		}
		else
		{ _putchar(format[i]);
			length++;
		}
	}
	va_end(call);
	return (length);
}