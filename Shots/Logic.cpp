#include <iostream>
#include "Frame.h"
#include "Shot.h"

using namespace std;

int main()
{
	Frame* framePointer = new Frame(555);
	Shot* shotPointer = new Shot();
	shotPointer->AddFrames(framePointer);

	cout << shotPointer->GetFrames()->GetFrame() << "\n";
	shotPointer->Clean();
	cout << shotPointer->GetFrames()->GetFrame() << "\n";
}

