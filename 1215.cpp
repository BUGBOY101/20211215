#define	_CRT_SECURE_NO_WARNINGS 1

//youdianxioawenti
#include<iostream>
using namespace std;
int a[10] = { 1,3,2,5,6,8,3,6,9,10 };
void quicksort(int left, int right) {
	int i, j, t, temp;
	if (left > right)
		return;
	temp = a[left];
	i = left;
	j = right;
	while (i != j) {
		while (a[j] >= temp && i < j)
			j--;
		while (a[i] <= temp && i < j)
			i++;
		if (i < j) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		a[left] = a[i];
		a[i] = temp;
		quicksort(left, i - 1);
		quicksort(i + 1, right);
	}
}
int main() {
	
	quicksort(0,10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}

//#include<iostream>
//using namespace std;
////二维数组行指针
//void print(int(*p)[3], int x) {
//	int i, j;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < 3; j++)
//			cout << *(*(p + i) + j) << " ";
//		cout << endl;
//	}
//}
//int main() {
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 }, i, j;
//	int(*p)[3] = a;//a[0]行地址-a-数组名就是首元素地址--作为3个一维数组，第一行，第二行，所以就是第一行数组地址
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			cout << *(*(p + i) + j) << " ";
//		cout << endl;
//	}
//	cout << endl;
//	print(a, 3);
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, * p;
//	int(*p)[10] = &a;//p就是数组指针--指针
//	char* arr[5];//char*
//	char*(*pa)[5] = &arr;//数组地址--存在数组指针里
//	//pa-指针变量名，*pa-指针，char*--pa之乡的数组的元素类型是char*,[5]指向的数组有五个元素
//
//	//&a--取出的是数组的地址
//	//a-数组名就是数组首元素的地址
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a[][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p[3];//指针数组
//	/*for (int k = 0; k < 3; k++)
//		p[k] = a[k];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++)
//			cout << *(*(p + i) + j) << " ";
//		cout << endl;
//	}*/
//	int(*p)[4] = a, i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++)
//			cout << *(*(p + i) + j) << " ";
//		cout << endl;
//	}
//}