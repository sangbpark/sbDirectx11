#pragma once
#include "sbComponent.h"
#include "sbMesh.h"
#include "sbShader.h"


namespace sb
{
	using namespace graphics;

	class MeshRenderer : public Component
	{
	public:
		MeshRenderer();
		~MeshRenderer();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void FixedUpdate() override;
		virtual void Render() override;

		void SetMesh(Mesh* mesh) { mMesh = mesh; }
		void SetShader(Shader* shader) { mShader = shader; }

	private:
		Mesh* mMesh;
		Shader* mShader;
	};
}
