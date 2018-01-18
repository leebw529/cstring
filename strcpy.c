/***********************************************
#
#      Filename: strcpy.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:50:39
# Last Modified: 2018-01-11 20:50:39
***********************************************/
#include "string.h"

char *(strcpy)(char *s1, const char *s2) {
	char *s = s1;

	for (; (*s++ = *s2++) != '\0';)
		;
	return (s1);
}
