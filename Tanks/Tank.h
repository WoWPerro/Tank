#pragma once
class Tank
{
public:
	Tank();
	void RotateLeft();
	void RotateRight();
	void MoveForward();
	void Shoot();
	float GetVel(float vel);
	void SetVel();
	
	float vel;

	~Tank();
};

