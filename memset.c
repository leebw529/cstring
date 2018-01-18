/***********************************************
#
#      Filename: memset.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:01:30
# Last Modified: 2018-01-11 20:01:30
***********************************************/
#include "string.h"

void *(memset)(void *s, int c, size_t n) {
	const unsigned char uc = c;
	unsigned char *su;

	for (su = s; 0 < n; ++su, --n)
		*su = uc;
	return (s);
}
