#include "../../const/const.h"
#include "../../type/type.h"
#include "../sheet.h"
#include "../color.h"
#include "../corner.h"
#include "../image.h"
#include "view.h"
#include "../graphics.h"
#include "startButton.h"

static void initWithImage(StartButton *this, Image *image);

StartButton *createStartButton(int x, int y, int w, int h, u32 sector)
{
	StartButton *startButton = (StartButton *)alloc(sizeof(StartButton));
	startButton = (StartButton*)initWithViewFunction((View*)startButton, x, y, w, h);
	(*startButton).initWithImage = initWithImage;
	Image *image = loadImageFromStorage(sector);
	(*startButton).initWithImage(startButton, image);
	
	return startButton;
}

static void initWithImage(StartButton *this, Image *image)
{
	if (this!=null && image!=null) {
		drawImage((View *)this, 0, 0, image);	
	}
}
