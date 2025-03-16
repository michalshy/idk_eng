#include "Eugine.hpp"

Eugine::Eugine()
{
    //Do nothing
}

Eugine::~Eugine()
{
    //Do nothing
}

bool Eugine::boot()
{
    if(!m_renderManager.startUp() || 
        !m_congifManager.startUp())
        return false;
    return true;
}

void Eugine::loop()
{
    m_renderManager.render();
}


