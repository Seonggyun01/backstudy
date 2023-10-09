#include <iostream>
using namespace std;

int main()
{
	int N; //달걀 개수
	int M; //사람 수
	int Pi[1000] = { 0 }; //희망 가격
	int Pt[1000] = { 0 }; //각 가격별 최대 수익
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> Pi[i];
	}
	for (int j = 0; j < M; j++) //j번 부터 비교 후 j가 더 싸면 카운트
	{
		int count = 0;

		for (int k = 0; k < M; k++)
		{
			if (Pi[j] <= Pi[k] && count<N)
			{
				count++;
				
			}
			
		}
		Pt[j] = Pi[j] * count;
		
	}
	int max = 0;
	int mindex = 0;
	for (int i = 0; i < M; i++)
	{
		if (Pt[i] >= max)
		{
			max = Pt[i];
			mindex = i;
		}
	}
	cout << Pi[mindex] << " " << max;
	return 0;
}