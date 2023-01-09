#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m, a;
	scanf("%d %d", &h,&m);
	scanf("%d",&a);


    h += a / 60;    //h에는 60으로 나눈 몫을 더함
    m += a% 60;     //m에는 60으로 나눈 나머지를 더함

    if (m >= 60) {      //만약 m에 60으로 나눈 나머지를 더했는데도, 60이상이면,,
        h += 1;
        m -= 60;
    }
    if (h >= 24) {      //만약 h가 24이상이 된다면,, 
        h -= 24;
    }

    printf("%d %d", h, m);
    return 0;


	return 0;
}