#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <algorithm>
#include <iomanip>
using namespace std;

// task 1
//void sameSum(int a[], int SIZE1, int b[], int SIZE2) {
//	int sum1=0, sum2=0;
//	for (int i = 0; i < SIZE1; i++) {
//		sum1 += a[i];
//	}
//	for (int i = 0; i < SIZE2; i++) {
//		sum2 += b[i];
//	}
//	if (sum1 == sum2) {
//		cout << "same sum" << endl;
//	}
//	else {
//		cout << "NOT same sum" << endl;
//	}
//}
//int main() {
//	int x[] = { 2,3,4,5,6,7 };
//	int y[] = { 2,3,4,5,6,1,6 };
//	int z[] = { 2,3,4,5,8,7 };
//	sameSum(x, 6, y, 7);
//	sameSum(x, 6, z, 6);
//	sameSum(y, 7, z, 6);
//	return 0;
//}


// instrsection of two arrays

/*void checkIntersection(int a[], int SIZE1, int b[], int SIZE2) {
	int intersectedarray[10],k=0;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			if (a[i] == b[j])
			{
				intersectedarray[k] = a[i];
				k++;
			}
		}
	}
		cout << "intersected array is" << endl;
		for (int i = 0; i < k; i++) {
		cout<<intersectedarray[i] <<" ";
		}
}
int main() {
	int A[] = { 3,5,0, 8,4,9 }, B[] = { 1,2,3,5,9,7,8,6 }, sizeA, sizeB;
	sizeA = sizeof(A) /sizeof( A[0]);
	sizeB = sizeof(A) /sizeof( A[0]);

	checkIntersection(A, sizeA, B, sizeB);
	return 0;
}*/


// union of two arrays
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int A[20], B[20], Union[40], i, j, k, n, m, flag;
//
//	cout << "Enter size of first array:";
//	cin >> n;
//	cout << "Enter elements of first array in ascending order:\n";
//	for (i = 0; i < n; ++i) {
//		cin >> A[i];
//	}
//
//	cout << "\nEnter size of second array:";
//	cin >> m;
//	cout << "Enter elements of second array in ascending order:\n";
//	for (i = 0; i < m; ++i) {
//		cin >> B[i];
//	}
//
//	k = 0;
//	for (i = 0; i < n; ++i) {
//		Union[k] = A[i];
//		k++;
//	}
//
//	for (i = 0; i < m; ++i) {
//		flag = 1;
//		for (j = 0; j < n; ++j) {
//			if (B[i] == A[j]) {
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag) {
//			Union[k] = B[i];
//			k++;
//		}
//	}
//
//	cout << "\nUnion of two arrays is:\n";
//	for (i = 0; i < k; ++i) {
//		cout << Union[i] << " ";
//	}
//
//	return 0;
//}



//int main() {
//	int A[] = { 3,5,0, 8,4,9 }, B[] = { 1,2,3,5,9,7,8,6 }, sizeA, sizeB, k, l, m, n, flag;
//	sizeA = sizeof(A) / sizeof(A[0]);
//	sizeB = sizeof(B) / sizeof(B[0]);
//	cout << "\nSize of A is:\n"<<sizeA;
//	cout << "\nSize of B is:\n"<<sizeB;
//
//	int Union[40];
//	k = 0;
//	for (int i = 0; i < sizeA; ++i)
//	{
//		Union[k] = A[i];
//		k++;
//	}
//	for (int i = 0; i < sizeB; ++i)
//	{
//		flag = 1;
//		for (int j = 0; j < sizeA; ++j)
//		{
//			if (B[i] == A[j]) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			Union[k] = B[i];
//				k++;
//		}
//	}
//		cout << "\nUnion of two arrays is:\n";
//	for (int i = 0; i < k; ++i) {
//		cout << Union[i] << " ";
//	}
//
//	return 0;
//}

//
//int main() {
//	double A[] = { 3,5,0, 8,4,9 }, B[] = { 1,2,3,5,9,7 }, sizeA, sizeB, k, l, m, n, flag;
//	sizeA = sizeof(A) / sizeof(A[0]);
//	sizeB = sizeof(B) / sizeof(B[0]);
//	//cout << "\nSize of A is:\n"<<sizeA;
//	//cout << "\nSize of B is:\n"<<sizeB;
//
//	cout << "\n Average of two arrays is:\n";
//
//	for (int i = 0; i < sizeB; i++)
//	{
//		cout<< setw(3) << A[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < sizeB; i++)
//	{
//		cout << setw(3) << B[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < sizeB; i++)
//	{
//		 
//				flag = (A[i] + B[i]) / 2;
//				cout << setw(3) << flag << " ";
//	 }
//	 
//
//	return 0;
//}



//int main() {
//	int A[] = { 3,5,0, 8,4,9 }, B[] = { 1,2,3,5,9,7,8,6 }, sizeA, sizeB, k, l, m, n, flag=0;
//	sizeA = sizeof(A) / sizeof(A[0]);
//	sizeB = sizeof(B) / sizeof(B[0]);
//	cout << "this program will print every element of A less than B alongwith that element of B "<<endl;
//	for (int i = 0; i < sizeA; i++)
//	{
//		for (int j = 0; j < sizeB; j++)
//		{
//			if (A[i] < B[j]) {
//				cout << A[i] << " " << B[j] << endl;
//			}
//		}
//	}
//	 
//
//	return 0;
//}

//int main() {
//	int A[10], B[8];
//	cout << "this program will print check and print if corresponding elements of A and B are same S or different D" << endl;
//	srand(time(0));
//
//	for (int i = 0; i < 10; i++) {
//		A[i] = rand() % 20;
//		cout << A[i] << " ";
//
//	}
//	cout << endl;
//	for (int i = 0; i < 8; i++) {
//		B[i] = rand() % 20;
//		cout << B[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (A[i] == B[j]) {
//				cout << A[i] << " element of array A exists in array B at index " << j<<endl;
//			}
//			/*else {
//				cout<<"different" in this case writer cout<<"Same"<<endl; in if condition
//			}*/ 
//		}
//	}
//
//		return 0;
//	}


//int main() {
//	int A[10], B[8];
//	cout << "this program will print cartesian product of A and B" << endl;
//	srand(time(0));
//
//	for (int i = 0; i < 10; i++) {
//		A[i] = rand() % 20;
//		cout << A[i] << " ";
//
//	}
//	cout << endl;
//	for (int i = 0; i < 8; i++) {
//		B[i] = rand() % 20;
//		cout << B[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			cout<< "(" << A[i] << "," << B[j] << ")" << "\t";
//		}
//		cout << endl;
//	}
//	cout << "Now B with A" << endl;
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "(" << B[i] << "," << A[j] << ")" << "\t";
//		}
//		cout << endl;
//	}
//		return 0;
//	}

