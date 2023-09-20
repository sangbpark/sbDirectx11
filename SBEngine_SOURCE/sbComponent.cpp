#include "sbComponent.h"


namespace sb
{
    Component::Component(COMPONENTTYPE type)
        : mType(type)
        , mOwner(nullptr)
    {
    }

    Component::~Component()
    {
    }
}

