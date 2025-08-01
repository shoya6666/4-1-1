#pragma once
#include "IScene.h"
#include "math/Vector2.h"

using namespace KamataEngine;


class StageScene : public IScene {

public:

	// 位置
	float playerPosx;
	float playerPosy;

	// 速さ
	float speed_ = 10.0f;


	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

};