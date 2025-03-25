﻿#include <iostream>

using namespace std;

#define SIZE 100001

int list[SIZE];

int Fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }

    for (int i = 0; i <= n; i++)
    {
        if (i <= 0)
        {
            list[i]= 0;
        }
        else if (i <= 2)
        {
            list[i] = 1;
        }

        list[i] = list[i - 1] + list[i - 2];
    }
        return list[n];
}

int main()
{
#pragma region 동적 계획법
    // 특정 범위까지의 값을 구하기 위해 그것과
    // 다른 범위까지의 값을 이용해서 효율적으로 값을
    // 구하는 알고리즘입니다.

    // (Overlapping Subproblems) 겹치는 부분 문제
    // 동일한 작은 문제들이 반복하여 나타나는 경우를 의미합니다.

    // (Optimal Substructure) 최적 부분 구조
    // 부분 문제의 최적 결과 값을 사용하여 전체 문제의 최적
    // 결과를 낼 수 있는 경우를 의미합니다.

    // 메모이제이션 (Memoization)
    // 프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을
    // 메모리에 저장함으로써 동일한 계산을 반복 수행하는 작업을
    // 제거하여 프로그램의 실행 속도를 향상시키는 방법입니다.

    cout << Fibonacci(4) << endl;
    cout << list[3] << endl;
#pragma endregion



    return 0;
}