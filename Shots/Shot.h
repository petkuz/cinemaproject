#pragma once
#include "Frame.h"


class Shot 
{
	private:
		Frame _frameObj;
	public:
		Shot();
		void AddFrames(Frame frameObj);
		Frame GetFrames();
		//void Clean();
};