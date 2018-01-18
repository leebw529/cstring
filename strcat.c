/***********************************************
#
#      Filename: strcat.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 20:35:27
# Last Modified: 2018-01-11 20:35:27
***********************************************/
#include "string.h"

char *(strcat)(char *s1, const char *s2) {
	char *s;
	
	for (s = s1; *s != '\0'; ++s)
		;
	for (; (*s = *s2) != '\0'; ++s, ++s2)
		;
	return (s1);
}
