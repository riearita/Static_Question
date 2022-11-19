#include"Enemy.hpp"

PixelShader  Enemy::psWhite;

ConstantBuffer<WhiteEffectConstants> Enemy::cb;

void Enemy::draw() {

	
	cb->strength = 1;

	{
		Graphics2D::SetPSConstantBuffer(1, cb);

		const ScopedCustomShader2D shader(psWhite);

		TextureAsset(U"enemy_image").draw(100, 100);
	}


	rect.draw(Palette::White);
}
