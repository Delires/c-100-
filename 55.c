/**
��Ŀ��ѧϰʹ�ð�λȡ��~��ǣ�������������Ƶ�ת��
���������~0=1; ~1=0;
%o 8����
%x 16����
%d 10����

������Ϊ������     ������ȡ����ֵ����ȡ���� + 1   Ȼ�����λΪ1
һ�������������λΪ1��Ϊ��������Ϊʮ����
                     - ((��������-1)��ȡ��)
**/
#include <stdio.h>
int main(void)
{
    int a,b; //int��16λ
    a = 5; //������16λ������ 234 �Ķ�����Ϊ 0000 0000 1110 1010 (���ܺ���ǰ���0)
    b=~a;    //ȡ����Ϊ                        1111 1111 0001 0101
             //��Ϊ ���λΪ1(���ݲ�������������Ǹ���) �ȼ�1 �ٰѳ�ȥ���λ�����ڰ�λȡ�� ����-�������
    printf("a��λȡ��ʮ����Ϊ%d\n", b);

    a = ~a;
    printf("a��λȡ��ʮ������Ϊ%x", b); //ʮ�����ư�λȡ����û������֮�֣�ֱ�Ӷ�����ȡ����Ϊ16���Ƽ���

    return 0;
}