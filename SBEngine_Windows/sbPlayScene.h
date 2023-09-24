#pragma once
#include "..\\SBEngine_SOURCE\\sbScene.h"


namespace sb
{
	class PlayScene : public Scene
	{
	public:
		PlayScene();
		virtual ~PlayScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;

	private:
	};
}