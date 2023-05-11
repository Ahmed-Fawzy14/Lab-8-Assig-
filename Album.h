#pragma once
#include "Photo.h"

class Album : public Photo {
private:
	int id;
	string title;
	string remarks;
public:
	Album createAlbum();

};