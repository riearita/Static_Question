#pragma once

#include<Siv3D.hpp>

#include"White_Effect.hpp"

class Enemy {
public:

	Enemy(){}

	static PixelShader psWhite;

	static ConstantBuffer<WhiteEffectConstants> cb;


	void draw();

	//siv3dが使えるかテスト用
	Rect rect = Rect(100, 100, 100, 100);
};

