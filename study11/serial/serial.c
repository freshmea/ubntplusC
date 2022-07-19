int getSerialNumber(void)
{
	static int count = 1;
	// 전역변수인데 특정 함수 하나만 쓰는 경우이면 함수 안에 static 지역 변수를 사용한다.
	// int result = count;
	// ++count;
	// return result;
	return count++;

}