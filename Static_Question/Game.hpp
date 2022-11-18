#pragma once

#include"Enemy.hpp"

class Game {
public:

	Array<Enemy> enemy;

	PixelShader psWhite_load;

	void first() {

		psWhite_load = HLSL{ U"shader/white.hlsl", U"PS" };
		if (not psWhite_load)
		{
			throw Error{ U"Failed to load a shader file" };
		}

		
		Enemy::psWhite = psWhite_load;
	}

	void update(){}

	void draw(){

		for (auto& e : enemy) {

			e.draw();
		}
	}

};
