/***********************************************
#
#      Filename: strspn.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 21:24:38
# Last Modified: 2018-01-11 21:24:38
***********************************************/
#include "string.h"

size_t (strspn)(const char *s1, const char *s2) {
	const char *sc1, *sc2;

	for (sc1 = s1; *sc1 != '\0'; ++sc1 )
		for (sc2 = s2; ; ++sc2)
			if (*sc2 == '\0')
				return (sc1 - s1);
			else if (*sc1 == *sc2)
				break;
	return (sc1 - s1);
}
