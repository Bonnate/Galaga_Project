#pragma once

#include "GameObject.h"
#include "BMP.h"

class Sprite : public GameObject
{
private:
	Image image;
	bool  enabled;
public:
	Sprite(string tag, string name, bool active, float px, float py);
	~Sprite();

	//이미지 구조체 세터//
	void setImage(const char* fileName);
	void setImage(const char* fileName, int x, int y, int width, int height);

	//구조체 이미지 그리기
	void draw();

	//enabled 게터/세터
	bool getEnabled();
	void setEnabled(bool enabled);

	//그림의 크기 구하기//
	void getSize(int &width, int &height);


	int getwidth();

	int getheight();
};