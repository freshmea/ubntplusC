// int my_strlen(const char *s)
// {
// 	int i = -1;
// 	do {
// 		++i;
// 	}while(s[i] != '\0');
// 	return i;
// }

//교수님 답. 
int my_strlen(const char *s)
{
	int i;
	for (i=0;s[i]/* != '\0' */;++i)
		;
	return i;
}


// void my_strcpy(char *des, const char *src)
// {
// 	int i=0;
// 	while(src[i] != '\0'){
// 		des[i] = src[i];
// 		++i;
// 	}
// 	des[i] = '\0';
// }


//교수님 답 
void my_strcpy(char *des, const char *src)
{
	int i=0;
	for(i = 0;src[i] ; ++i){
		des[i] = src[i];
	}
	des[i] = '\0';
}



// int my_strcmp(const char *s1, const char *s2)
// {
// 	int result = 0;
// 	for(int i=0;i<1000;i++){
// 		if(s1[i] == '\0') break;
// 		if(s1[i] != s2[i])
// 			result += 1;
// 	}
// 	return result;
// }

//교수님 답 .
int my_strcmp(const char *s1, const char *s2)
{
	int i;
	for(i=0;s1[i] || s2[i] ;i++){
		if(s1[i] != s2[i])
			break;
	}
	return s1[i]-s2[i];
}

// void my_strcat(char *des, const char *src){
// 	int start = 0;
// 	while(des[start] != '\0')
// 		++start;
// 	int i = 0;
// 	while(src[i] != '\0'){
// 		des[start+i]=src[i];
// 		++i;
// 	}
// 	des[start+i] = '\0';
// }

//교수님 답.
void my_strcat(char *des, const char *src){
	int start = 0;
	while(des[start])
		++start;
	int i = 0;
	while(src[i]){
		des[start+i]=src[i];
		++i;
	}
	des[start+i] = '\0';
}