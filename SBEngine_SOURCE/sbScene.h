#pragma once
#include "sbEnums.h"
#include "sbEntity.h"
#include "sbLayer.h"

namespace sb
{
	using namespace sb::enums;

	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initialize();
		virtual void Update();
		virtual void FixedUpdate();
		virtual void Render();

		Layer* GetLayer(UINT index) { return&mLayers[index]; }
		void AddGameObject(GameObject* gameObject, UINT layerIndex);

	private:
		Layer mLayers[LAYER::MAX];
	};
}