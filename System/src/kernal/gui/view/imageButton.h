
typedef struct ImageButton ImageButton;

typedef struct ImageButton
{
    View view;

	Image *image;

	Color borderColor;

	Color selectColor;

	void (*initWithImage)(ImageButton *this, Image *image, Color borderColor);
	
	void (*onMouseClick)(ImageButton *this, MouseEvent *event);

	void (*setSelect)(ImageButton *this, bool isSelect);

} ImageButton;

ImageButton *createImageButton(int x, int y, int w, int h);