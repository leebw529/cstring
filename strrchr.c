/***********************************************
#
#      Filename: strrchr.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 21:31:01
# Last Modified: 2018-01-11 21:31:01
***********************************************/
#include "string.h"

char *(strrchr)(const char *s, int c) {
	const char ch = c;
	const char *sc;

	for (sc = NULL; ; ++s) {
		if (*s == ch)
			sc = s;
		if (*s == '\0')
			return ((char *)sc);
	}
	return ((char *)sc);
}
