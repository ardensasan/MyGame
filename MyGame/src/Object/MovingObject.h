#ifndef MOVINGOBJECT_H
#define MOVINGOBJECT_H
#include "GameObject.h"
#include "Animation.h"
class MovingObject : public GameObject
{
public:
	MovingObject();
	MovingObject(std::string id, int w, int h);
	void UpdatePosX(float x);
	void UpdatePosY(float y);
	inline bool IsOnGround() { return isOnGround; }
	void SetJump(bool b);
	virtual void Update();
	virtual void Draw();
	virtual void Clean();
	void SetTexture(std::string id);
	bool JumpCollide() { return jumpCollide; }
protected:
	float yVelocity,xVelocity;
	ObjectProperty objectProperty;
	int direction; // 1=left 2=up 3=right 4=down
	float gravity;
	SDL_RendererFlip flip;
private:
	Animation* animation;
	bool jumpCollide;
	bool isOnGround;
	int animationDelay;
};
#endif