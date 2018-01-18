/***********************************************
#
#      Filename: memcmp.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 19:48:15
# Last Modified: 2018-01-11 19:48:15
***********************************************/
#include "string.h"

int (memcmp)(const void *s1, const void *s2, size_t n) {
	const unsigned char *su1, *su2;

	for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)
		if (*su1 != *su2)
			return ((*su1 < *su2) ? -1  +1);
	return (0);
}
