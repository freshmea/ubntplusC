#include <stdio.h>

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

// char* my_strtok(char *s, const char *delim)
// {
// 	char *tmp;
// 	if( s != NULL ){
// 		;
// 	}else if ( tmp == NULL) {
// 		return NULL;
// 	}

// 	for(int i=0;s[0] != '\0';i++){
// 		int j = 0;
// 		printf("%s\n", s);
// 		for(j=0;delim[0] != '\0';j++){
// 			if (s[0] == delim[0]){
// 				s[0] = '\0';
// 				tmp = s+1;
// 				printf("%s\n", tmp);
// 				return (s-i);
// 			}
// 			++delim;
// 		}
// 		delim -= j;
// 		++s;
// 	}
// 	return s;
// }

//교수님 답 내가 조금 바꿈.

// char* my_strtok(char *s, const char *delim)
// {
// 	static char *p;
// 	if (s != NULL){
// 		p = s;
// 	} else if ( p == NULL){
// 		return NULL;
// 	}
// 	char *token = p;
// 	for (int i=0 ; p[i]; ++i){
// 		for (int j=0; delim[j]; ++j){
// 			if (p[i] == delim[j]){
// 				p[i] = '\0';
// 				p += i + 1 ;
// 				return token;
// 			}
// 		}
// 	}
// 	p = NULL;
// 	return token;
// }

// //교수님 답
// char *p;
// char *end;
// char* my_strtok(char *s, const char *delim)
// {
// 	if (s != NULL){
// 		p = s;
// 		end = s + my_strlen(s);
// 	} 
// 	if(end+1 == p)
// 		return NULL;
// 	int i;
// 	for (i=0 ; p[i] != '\0'; ++i){
// 		for (int j=0; delim[j] != '\0'; ++j){
// 			if (p[i] == delim[j]){
// 				p[i] = '\0';
// 				break;
// 			}
// 		}
// 		if (p[i] == '\0')
// 			break;
// 	}

// 	char *token = p;
// 	p = p+i+1;

// 	return token;
// }

// //교수님 답2
// char* my_strtok(char *s, const char *delim)
// {
// 	static char *p;
// 	static char *end;
// 	if (s != NULL){
// 		p = s;
// 		end = s + my_strlen(s);
// 	}

// 	if(end+1 == p) {
// 		return NULL;
// 	}

// 	char *token = p;

// 	int i;
// 	for ( i=0 ; p[i] != '\0'; ++i){
// 		for (int j=0; delim[j] != '\0'; ++j){
// 			if (p[i] == delim[j]){
// 				p[i] = '\0';
// 				goto OUT;
// 			}
// 		}
// 	}
// 	OUT: // 레이블 이라고 한다. 

// 	p = p + i + 1;

// 	return token;
// }

//교수님 답3 pointer version
char* my_strtok(char *s, const char *delim)
{
	static char *p;
	static char *end;

	if (s != NULL){
		p = s;
		end = s + my_strlen(s);
	}

	if(end+1 == p) {
		return NULL;
	}

	char *token = p;
	int i;
	while (*p){
		const char *q = delim;// 이거 왜 써야 하는지 이해가 안가네.
		while (*q){
			if(*p == *q){
				*p = '\0';
				goto OUT;
			}
			++q;
		}
		p++;
	}
	OUT:

	++p;
	return token;
}