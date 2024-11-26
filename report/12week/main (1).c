/******************************************************************************

입력한 날짜의 해당 요일을 출력해준다
실습 후 입력한 날짜가 오늘로부터 며찰 남았는지(전인지) 출력한다.
difftime 이용용

**현재 시간 가져오기
time_t t = time(NULL);
printf("%d", t);
=> 1970.1.1. 자정부터 지금까지 흐른 초 수    
*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include "report.h"
#include "wday.h"

int main(int argc, char* argv[])
{
    week2(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    
}
