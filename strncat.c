/***********************************************
#
#      Filename: strncat.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:09:56
# Last Modified: 2018-01-11 20:09:56
***********************************************/
#include "string.h"

char *(strncat)(char *s1, const char *s2, size_t n) {
	char *s;

	for (s = s1; *s != '\0'; ++s)
		;
	for (; 0 < n && *s2 != '\0'; --n)
		*s++ = *s2++;
	*s = '\0';
	return (s1);
}
