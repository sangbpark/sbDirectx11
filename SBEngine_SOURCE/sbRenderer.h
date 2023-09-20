#pragma once
#include "sbEnums.h"
#include "CommonInclude.h"
#include "sbEngine.h"
#include "sbMath.h"
#include "sbGraphicsDevice_DX11.h"

#include "sbMesh.h"
#include "sbShader.h"
#include "sbConstantBuffer.h"

using namespace sb::graphics;
using namespace sb::enums;
using namespace sb::math;

namespace sb::renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	CBUFFER(TransformCB, CBSLOT_TRANSFORM)
	{
		Vector3 pos;
		int padd1;

		Vector3 scale;
		int padd2;
	};

	extern Mesh* mesh;
	extern Shader* shader;
	extern ConstantBuffer* constantBuffers[];

	// Initialize the renderer
	void Initialize();
	void Release();
}
