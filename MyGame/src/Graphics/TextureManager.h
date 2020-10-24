#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H
#include "SDL_image.h"
#include <string>
#include <map>
class TextureManager
{
public:
	static TextureManager* GetInstance();
	void Load(std::string id, std::string filename);
	void Draw();
	void Clean();
	void DrawTile(std::string id, int x, int y, int width, int height, int srcX, int srcY);
private:
	TextureManager();
	static TextureManager* instance;
	SDL_Texture* texture;
	std::map<std::string, SDL_Texture*> assetMap;
	SDL_Rect srcRect, dstRect;
};
#endif
