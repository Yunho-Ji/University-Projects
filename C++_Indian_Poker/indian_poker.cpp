// indian_poker.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	
	int round = 0;
	int gold = 300;  //기본소지금
	int batting_gold = 0;
	int choice = 0;
	int getCard;
	int user_card = 0;
	int pc_card = 0;
	int vs_card = 0;

	bool start = true;

	vector<int> card;
	vector<int> computer_card;
	int array[10];

	while (start = true)
	{

		for (int i = 0; i < 10; i++) {
			array[i] = i + 1;
		}

		for (int i = 0; i < 2; i++) {
			int dest = rand() % 10;
			int sour = rand() % 10;
			int temp = array[dest];
			array[dest] = array[sour];
			array[sour] = temp;
		}
		for (int i = 0; i < 10; i++) {
			int push = array[i];
			pc_card = array[i];
			card.push_back(push);
			computer_card.push_back(pc_card);
		}
	
		cout << "원하는 카드를 고르세요 (1~10)";
		cin >> getCard;

		switch (getCard)
		{
		case 1:
			user_card = card[0];
			break;
		case 2:
			user_card = card[1];
			break;
		case 3:
			user_card = card[2];
			break;
		case 4:
			user_card = card[3];
			break;
		case 5:
			user_card = card[4];
			break;
		case 6:
			user_card = card[5];
			break;
		case 7:
			user_card = card[6];
			break;
		case 8:
			user_card = card[7];
			break;
		case 9:
			user_card = card[8];
			break;
		case 10:
			user_card = card[9];
			break;

		}

		
		if (getCard > 10) {
			cout << "범위안의 카드를 고르세요." << endl;
			////////////////////////////////////////////////////////////////////////////////////////
		}
		else {
			if (start = true) {
				int p = rand() % 10;
			
				vs_card = computer_card[p];
				cout << " PC의 카드 : " << vs_card << endl;

				cout << " 배팅하시겠습니까? YES(1) or NO(2) ?";
				cin >> choice;
			}

			bool batting = true;

			switch (choice)
			{
				
			case 1:
				if (start = true) {
					
					cout << "배팅하실 금액을 입력하세요.";
					cin >> batting_gold;   //배팅금액
					
					if (batting_gold > gold) {
						cout << "소지금이 부족합니다. 다시 입력하세요." << endl;
						batting = false;
					}

					gold = gold - batting_gold;
					////////////////////
					if (batting = true) {
						if (user_card > vs_card) {
							cout << "내기에 승리했습니다." << endl;
							cout << "USER의 카드 = " << user_card << endl;
							cout << "배팅 결과 = $" << batting_gold * 2 << endl;
							gold += (batting_gold * 2);
							cout << "현재 소지금 = $" << gold << endl;
							round = round + 1;
						}
						else if (user_card == vs_card) {
							cout << "PC와의 게임에서 무승부가 났습니다." << endl;
							round = round + 1;
						}
						else {
							cout << "내기에서 패배하였습니다." << endl;
							cout << "USER의 카드 = " << user_card << endl;
							cout << "현재 소지금 = $" << gold << endl;
							round = round + 1;
						}
					}
					break;
			case 2:
				if (round = start) {
					cout << "DIE 를 선택하셨습니다." << endl;
					cout << "기본금 차감 $10" << endl;
					gold = gold - 10;
					cout << "현재 소지금 = $" << gold << endl;
					round = round + 1;
				}
				break;
				}
			}
			
		}
		if (gold >= 2000) {
			cout << "인디언포커대회에서 승리하셨습니다." << endl;
			cout << "상금은 모두 불우한 이웃들에게 기부 예정입니다." << endl;
			start = false;
			break;
		}
		else if (gold == 0) {
			cout << "모두 탕진하였습니다." << endl;
			start = false;
			break;
		}
		
	}
	
	
}


//   1부터 5까지 놓이는 숫자 , 한개를 선택
//   AI의 숫자표시
//   배팅 : 이기면 걸었던 gold *2 패배하면 gold - user_gold   //








