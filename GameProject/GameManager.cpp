#include "framework.h"

int GameManager::sScore = 0;
TextManager* GameManager::sTextManager = nullptr;

void GameManager::InitGameManager()
{
	sTextManager = (TextManager*)ObjectManager::find("TextManager");

	if (sTextManager == nullptr)
	{
		cout << "�ؽ�Ʈ �Ŵ��� ã�� �� ����" << endl;
		
		exit(-3);
	}
}

void GameManager::AddScore(int val)
{
	sScore += val;

	sTextManager->UpdateScore(sScore);
}