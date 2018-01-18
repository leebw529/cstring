/***********************************************
#
#      Filename: strchr.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 21:05:38
# Last Modified: 2018-01-11 21:05:38
***********************************************/
#include "string.h"

char *(strchr)(const char *s, int c) {
	const char ch = c;

	for (; *s != ch; ++s)
		if (*s == '\0')
			return (NULL);
	return ((char *)s);
}
