#include "BoxCollider.h"
#include "Engine.h"
BoxCollider::BoxCollider() {
	objectBox = { 0,0,0,0 };
}

void BoxCollider::Update(float x, float y, int w, int h,std::string type){
	if(type == "Player")
		objectBox = { int(x)+5, int(y)+5, w-10, h-5 };
	if(type == "Fruit")
		objectBox = { int(x) + 7, int(y) + 5, w - 14, h - 12 };
	if (type == "Enemy")
		objectBox = { int(x), int(y), w, h};
}
SDL_Rect BoxCollider::GetBoxCollider() {
	return objectBox;
}
void BoxCollider::Render(){
	SDL_SetRenderDrawColor(Engine::GetInstance()->GetRenderer(), 255, 255, 255, 0);
	SDL_RenderDrawRect(Engine::GetInstance()->GetRenderer(), &objectBox);
}