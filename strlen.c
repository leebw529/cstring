/***********************************************
#
#      Filename: strlen.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:54:04
# Last Modified: 2018-01-11 20:54:04
***********************************************/
#include "string.h"

size_t (strlen)(const char *s) {
	const char *sc;

	for (sc = s; *sc != '\0'; ++sc)
		;
	return (sc -s);
}
