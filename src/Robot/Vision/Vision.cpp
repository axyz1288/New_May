#include "Vision.h"

Vision::Vision(void)
{
	this->CImageProcessing = new ImageProcessing();
	this->CImageConverter = new ImageConverter();
	this->CPclConverter = new PclConverter();
	this->CMouseEvent = new MouseEvent();
}

Vision::~Vision(void)
{
	delete CImageProcessing;
	delete CImageConverter;
	delete CPclConverter;
	delete CMouseEvent;
}