#include<stdio.h>
#define M 3
#define N 4

int main()
{
	int max, min, rowindex, colindex, flag = 0;
	int array[M][N];
	printf("������%d��%d�е�����:\n", M, N);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			scanf("%d", &array[i][j]);
	}

	for (int i = 0; i < M; ++i)
	{
		// �ҵ�i��������Ԫ��,��¼��Ԫ�����к�colindex
		max = array[i][0];
		for (int j = 0; j < N; ++j)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				colindex = j;
			}
		}

		// ��max������colindex����С��Ԫ�أ�����¼�����ڵ���
		min = array[0][colindex];
		for (int j = 0; j < M; ++j)
		{
			if (array[j][colindex] < min)
			{
				min = array[j][colindex];
				rowindex = j;
			}
		}

		// �����СԪ������СԪ����ͬ��������СԪ��Ҳ�ڵ�i�У���Ϊ����
		if (max == min && i == rowindex)
		{
			flag = 1;
			printf("����Ϊ��%d��%d�е�Ԫ��%d", rowindex, colindex, max);
			break;
		}
	}

	if (0 == flag)
		printf("û�а���");
	return 0;
}

