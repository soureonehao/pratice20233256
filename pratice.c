#include<stdio.h>
void main() {
	int ranking[10] = { 71,82,93,95,84,75,51,61,52 }, score, i, j, box;		//�����ʼ�����飬��������������ۼӱ��������ӱ���
	for (i = 0; i < 8; i++) {	//����ѭ��8��
		for (j = 0; j < 8; j++) {	//��С������
			if (ranking[j] > ranking[j + 1]) {		//�����ж���䣬��ǰ��һ�������ں���һ����������λ��
				box = ranking[j];
				ranking[j] = ranking[j + 1];
				ranking[j + 1] = box;
			}
		}
	}
	/*for (i = 0; i < 9; i++) {
		printf("%d ", ranking[i]);
	}*/
	printf("������һ������:");
	scanf_s("%d", &score);		//�������
	for (i = 0; i < 9; i++) {
		if (score > ranking[i])		//�ж���䣻�����������������������жϣ���С��Ԫ����ֹ
			;
		else
			break;
	}
	for (j = 9; j > i; j--){
		ranking[j] = ranking[j - 1];	//ʵ�ֱ�����������������
		}
	ranking[i] = score;	//����������������

	for (i = 0; i < 10; i++) {
		printf("%d", ranking[i]);
	}
}