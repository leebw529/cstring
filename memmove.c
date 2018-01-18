/***********************************************
#
#      Filename: memmove.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 19:55:19
# Last Modified: 2018-01-11 19:55:19
***********************************************/
#include "string.h"

void *(memmove)(void *s1, const void *s2, size_t n) {
	char *sc1;
	const char *sc2;

	sc1 = s1;
	sc2 = s2;
	if (sc2 < sc1 && sc1 < sc2 + n)
		for (sc1 +=n, sc2 += n; 0 < n; --n)
			*--sc1 = *--sc2;      /*copy backwards */
	else
		for (; 0 < n; --n)
			*sc1++ = *sc2++;	  /*copy forwards */
	return (s1);
}
