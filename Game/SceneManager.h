#pragma once

#include "MyLibrary/MyLibrary.h"

// プロトタイプ宣言

void InitScene(void);
void UpdateScene(void);
void RenderScene(void);
void FinalScene(void);

void SetResultScene(void);

void RequestScene(SceneID scene_id);