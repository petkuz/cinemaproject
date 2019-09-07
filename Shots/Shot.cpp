#include "Shot.h"


Shot::Shot()
{
	_frameObj = 0;
}

void Shot::AddFrames(Frame frameObj)
{
	_frameObj = frameObj;
}
Frame Shot::GetFrames() 
{
	return _frameObj;
}