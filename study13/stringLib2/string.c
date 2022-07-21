
int my_strlen(const char *s)
{
	int count = 0;
	while (*s++) ++count;
	return count;
}

void my_strcpy(char *des, const char *src)
{
	while (*des++ = *src++ );
}

int my_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2 ){
		if (*s1 != *s2) break ;
		++s1, ++s2;
	}
}

void my_strcat(char *des, const char *src)
{
	my_strcpy(des+my_strlen(des), src);
}