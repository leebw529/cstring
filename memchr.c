/***********************************************
#
#      Filename: memchr.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 19:43:11
# Last Modified: 2018-01-11 19:43:11
***********************************************/
#include "string.h"

void *(memchr)(const void *s, int c, size_t n) {
	const unsigned char uc = c;
	const unsigned char *su;
	
	for (su = s; 0 < n; ++su, -n)
		if (*su == uc)
			return ((void *)su);
	return (NULL);
}
