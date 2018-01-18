/***********************************************
#
#      Filename: strtok.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-11 22:26:17
# Last Modified: 2018-01-11 22:26:17
***********************************************/
#include "string.h"

char *(strtok)(char *s1, const char *s2) {
	char *sbegin, *send;
	static char *ssave = "";

	sbegin = s1 ? s1 : ssave;
	sbegin += strspn(sbegin, s2);
	if (*sbegin == '\0') {
		ssave = "";
		return (NULL);
	}
	send = sbegin + strcspn(sbegin, s2);
	if (*send != '\0')
		*send++ = '\0';
	ssave = send;
	return (sbegin);
}
