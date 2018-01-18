/***********************************************
#
#      Filename: strcmp.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:42:40
# Last Modified: 2018-01-11 20:42:40
***********************************************/
#include "string.h"

int (strcmp)(const char *s1, const char *s2) {
	for (; *s1 == *s2; ++s1, ++s2)
		if(*s1 == '\0')
			return (0);
	return ((*(unsigned char *)s1
		< *(unsigned char *)s2) ? -1 : +1);
}
