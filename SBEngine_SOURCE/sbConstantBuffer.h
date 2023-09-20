#pragma once
#include "sbEntity.h"
#include "sbGraphics.h"

namespace sb::graphics
{
	class ConstantBuffer : public GpuBuffer
	{
	public:
		ConstantBuffer();
		~ConstantBuffer();

		bool Create(size_t size);
		void SetData(void* data);
		void Bind(eShaderStage stage);

	private:
		const eCBType mType;
	};
}
