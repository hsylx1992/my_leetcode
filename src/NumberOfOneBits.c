/*
дһ������
��������
�����Զ����Ʊ�ʾʱ1�ĸ���
*/

#include <stdio.h>

typedef int uint32_t;

int hammingWeight(uint32_t n) {
  uint32_t curN   = n;
  int countDown32 = 32;
  int count  = 0;
  
  while (countDown32--) {
	//printf("%d\t", curN & 0x01);
    if (curN & 0x01) {      
      ++ count;
    }
    curN = curN >> 1;
  }
  
  return count;
}

int main()
{
  int cnt = hammingWeight(2147483648);
  
  printf("\n----------\n%d\n------------", cnt);

  return 0;
}
