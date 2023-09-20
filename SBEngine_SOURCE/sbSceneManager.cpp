#include "sbSceneManager.h"
#include "sbResources.h"

#include "sbGameObject.h"
#include "sbTransform.h"
#include "sbMeshRenderer.h"

namespace sb
{
	Scene* SceneManager::mPlayScene = nullptr;

	void SceneManager::Initialize()
	{
		mPlayScene = new Scene();

		{
			GameObject* object = new GameObject();
			Transform* tr = new Transform();
			tr->SetPosition(Vector3(0.5f, 0.2f, 0.0f));
			tr->SetScale(Vector3(1.0f, 1.0f, 1.0f));
			object->AddComponent(tr);

			MeshRenderer* meshRenderer = new MeshRenderer();
			meshRenderer->SetMesh(Resources::Find<Mesh>(L"TriangleMesh"));
			meshRenderer->SetShader(Resources::Find<Shader>(L"TriangleShader"));
			object->AddComponent(meshRenderer);

			mPlayScene->AddGameObject(object, LAYER::NONE);
		}

		{
			GameObject* object = new GameObject();
			Transform* tr = new Transform();
			tr->SetPosition(Vector3(-0.5f, -0.2f, 0.0f));
			object->AddComponent(tr);

			MeshRenderer* meshRenderer = new MeshRenderer();
			meshRenderer->SetMesh(Resources::Find<Mesh>(L"TriangleMesh"));
			meshRenderer->SetShader(Resources::Find<Shader>(L"TriangleShader"));
			object->AddComponent(meshRenderer);

			mPlayScene->AddGameObject(object, LAYER::NONE);
		}
	}

	void SceneManager::Update()
	{
		mPlayScene->Update();
	}

	void SceneManager::FixedUpdate()
	{
		mPlayScene->FixedUpdate();
	}

	void SceneManager::Render()
	{
		mPlayScene->Render();
	}
}