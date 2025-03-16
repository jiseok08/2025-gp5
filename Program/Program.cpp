#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬되는 알고리즘입니다.

	int list[] = { 9,6,8,1,3 };

	for (int i = 0; i < (SIZE - 1); i++)
	{
		int key = list[i + 1];

		if (list[i] > key)
		{
			list[i + 1] = list[i];

			list[i] = key;
		}
		if (i >= 3)
		{
			for (int j = i; j > 0; j--)
			{
				key = list[j];
				if (list[j - 1] > list[j])
				{

				}
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion


	return 0;
}
