/**
 * \date 18.12.2021
 *
 * \author ��������� ������
 *
 * \brief �������� ����, ���������� ������� ���������� ���������� �����
 */

#include "factorial.h"
unsigned long long int factorial(unsigned int n) {
    unsigned long long int factor = 1;
    for (int i = 1; i <= n; ++i) {
        factor *= i;
    }
	return factor;
}