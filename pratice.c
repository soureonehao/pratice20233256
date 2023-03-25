#include<stdio.h>
void main() {
	int ranking[10] = { 71,82,93,95,84,75,51,61,52 }, score, i, j, box;		//定义初始化数组，定义输入变量，累加变量，盒子变量
	for (i = 0; i < 8; i++) {	//遍历循环8次
		for (j = 0; j < 8; j++) {	//从小到大排
			if (ranking[j] > ranking[j + 1]) {		//条件判断语句，当前面一个数大于后面一个数，调换位置
				box = ranking[j];
				ranking[j] = ranking[j + 1];
				ranking[j + 1] = box;
			}
		}
	}
	/*for (i = 0; i < 9; i++) {
		printf("%d ", ranking[i]);
	}*/
	printf("请输入一个分数:");
	scanf_s("%d", &score);		//输入分数
	for (i = 0; i < 9; i++) {
		if (score > ranking[i])		//判断语句；如果输入分数比数组大；则继续判断，到小与元素终止
			;
		else
			break;
	}
	for (j = 9; j > i; j--){
		ranking[j] = ranking[j - 1];	//实现比输入分数大的往左移
		}
	ranking[i] = score;	//将分数插入数组中

	for (i = 0; i < 10; i++) {
		printf("%d", ranking[i]);
	}
}