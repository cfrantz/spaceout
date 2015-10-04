#include <stdarg.h>

#define chrout(x) ((*(char*)0x4040) = x)
void dprintf(const char *fmt, ...)
{
	va_list ap;
	char ch;

	va_start(ap, fmt);
	while((ch=*fmt++) != 0) {
		if (ch == '%') {
			ch = *fmt++;
			switch(ch) {
				case '%':
					chrout(ch);
					break;

			}
		} else {
			chrout(x);
		}
	}

}
