#include "sbPlayerScript.h"
#include "sbTransform.h"
#include "sbGameObject.h"
#include "sbTransform.h"
#include "sbTime.h"

namespace sb
{

	PlayerScript::PlayerScript()
	{
	}

	PlayerScript::~PlayerScript()
	{
	}

	void PlayerScript::Initialize()
	{
	}

	void PlayerScript::Update()
	{
		GameObject* obj = GetOwner();
		Transform* tr = obj->GetComponent<Transform>();
		Vector3 pos = tr->GetPosition();
		pos.x -= 0.1f * Time::DeltaTime();
		tr->SetPosition(pos);
		pos = tr->GetPosition();
	}

	void PlayerScript::LateUpdate()
	{
	}

	void PlayerScript::Render()
	{
	}

}
