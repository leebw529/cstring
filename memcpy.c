/***********************************************
#
#      Filename: memcpy.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 19:52:57
# Last Modified: 2018-01-11 19:52:57
***********************************************/
#include "string.h"

void *(memcpy)(void *s1, const void *s2, size_t n) {
	char *su1;
	const char *su2;

	for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)
		*su1 = *su2;
	return (s1);
}
