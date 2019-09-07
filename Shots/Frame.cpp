#include "Frame.h"

Frame::Frame()
{
	_data = 0;
}
Frame::Frame(int data) 
{
	_data = data;
}
int Frame::GetFrame() 
{
	return _data;
}