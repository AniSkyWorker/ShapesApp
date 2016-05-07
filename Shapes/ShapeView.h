#pragma once
#include "stdafx.h"

class CShapeView 
{
public:
	CShapeView(sf::Vector2f const& size, sf::Vector2f const& pos) ;
	virtual void SetSize(sf::Vector2f const& size) = 0;
	virtual void SetPosition(sf::Vector2f const& pos) = 0;
	virtual void OnDraw(sf::RenderTarget& target, sf::RenderStates states) = 0;
protected:
	sf::Vector2f m_position;
	sf::Vector2f m_size;
};

