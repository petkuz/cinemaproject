#include "Shot.h"


Shot::Shot() {
	_framePointer = 0;
}

void Shot::AddFrames(Frame* framePointer){
	_framePointer = framePointer;
}
void Shot::Clean() {
	delete _framePointer;
}
Frame* Shot::GetFrames() {
	return _framePointer;
}