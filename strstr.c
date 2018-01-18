/***********************************************
#
#      Filename: strstr.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 22:22:21
# Last Modified: 2018-01-11 22:22:21
***********************************************/
#include "string.h"

char *(strstr)(const char *s1, const char *s2) {
	if (*s2 == '\0')
		return ((char *)s1);
	for (; (s1 = strchr(s1, *s2)) != NULL; ++s1) {
		const char *sc1, *sc2;

		for (sc1 = s1, sc2 = s2; ; )
			if (*++sc2 == '\0')
				return ((char *)s1);
			else if (*++sc1 != *sc2)
				break;
	}
	return (NULL);
}
