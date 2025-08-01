#include "StageScene.h"
#include <Novice.h>

void StageScene::Initialize() {
	playerPosx = 200.0f;
	playerPosy = 200.0f;

}

void StageScene::Update(char* keys, char* preKeys) {

	if (keys[DIK_D]) {
		playerPosx += speed_;
	}
	if (preKeys[DIK_A]) {
		playerPosx -= speed_;
	}

	// スペースキーで次のシーンへ
	if (playerPosx >= 700) {

		sceneNo = CLEAR;
	}
}

void StageScene::Draw() {

	Novice::ScreenPrintf(0, 0, "Curernt Scene : Stage");
	Novice::DrawBox((int)playerPosx,(int) playerPosy, 100, 100, 0.0f, WHITE, kFillModeWireFrame);
	Novice::DrawBox(800,200, 50, 50, 0.0f, BLACK, kFillModeSolid);
}