#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m, a;
	scanf("%d %d", &h,&m);
	scanf("%d",&a);


    h += a / 60;    //h���� 60���� ���� ���� ����
    m += a% 60;     //m���� 60���� ���� �������� ����

    if (m >= 60) {      //���� m�� 60���� ���� �������� ���ߴµ���, 60�̻��̸�,,
        h += 1;
        m -= 60;
    }
    if (h >= 24) {      //���� h�� 24�̻��� �ȴٸ�,, 
        h -= 24;
    }

    printf("%d %d", h, m);
    return 0;


	return 0;
}