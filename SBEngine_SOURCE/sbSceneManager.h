#pragma once
#include "sbScene.h"

namespace sb
{
	class SceneManager
	{
	public:
		static void Initialize();
		static void Update();
		static void FixedUpdate();
		static void Render();

	private:
		static Scene* mPlayScene;
	};
}