# include <Siv3D.hpp> // OpenSiv3D v0.6.5

#include"Game.hpp"

void Main()
{
	Game game;

	game.first();

	game.enemy.push_back(Enemy());

	while (System::Update())
	{
		game.update();
		game.draw();
	}
}

/*
*＜Enemy::psWhite＞と＜ConstantBuffer<struct WhiteEffectConstants>＞において、外部シンボルが未解決でエラーがでます。
*
*実体定義をどこですればいいのかが分かりません。
*
*
* 
*/




