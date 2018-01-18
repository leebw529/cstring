/***********************************************
#
#      Filename: strncmpy.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:13:18
# Last Modified: 2018-01-11 20:13:18
***********************************************/
#include "string.h"

int (strncmpy)(const char *s1, const char *s2, size_t n) {
	for (; 0 < n; ++s1, ++s2, --n)
		if (*s1 != *s2)
			return ((*(unsigned char *)s1 
				< *(unsigned char *)s2) ? -1 : +1);
		else if (*s1 == '\0')
			return (0);
	return (0);
}
