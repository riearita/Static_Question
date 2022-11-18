#pragma once

#include"White_Effect.hpp"

class Enemy {
public:

	Enemy(){}

	static PixelShader psWhite;

	static ConstantBuffer<WhiteEffectConstants> cb;


	void draw();
};

void Enemy::draw() {

	cb->strength = 1;

	{
		Graphics2D::SetPSConstantBuffer(1, cb);

		const ScopedCustomShader2D shader(psWhite);

		TextureAsset(U"enemy_image").draw(100, 100);
	}
}
