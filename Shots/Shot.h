#pragma once
#include "Frame.h"


class Shot {
	private:
		Frame* _framePointer;
	public:
		Shot();
		void AddFrames(Frame* framePointer);
		Frame* GetFrames();
		//void Clean();
};