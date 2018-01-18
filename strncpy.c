/***********************************************
#
#      Filename: strncpy.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:32:49
# Last Modified: 2018-01-11 20:32:49
***********************************************/
#include "string.h"

char *(strncpy)(char *s1, const char *s2, size_t n) {
	char *s;

	for (s = s1; 0 < n && *s2 != '\0'; --n)
		*s++ = *s2++;
	for (; 0 < n; --n)
		*s++ = '\0';
	return (s1);
}
