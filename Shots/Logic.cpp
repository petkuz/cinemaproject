#include <iostream>
#include "Frame.h"
#include "Shot.h"

using namespace std;

int main()
{
	Frame frameObj = Frame(555);
	Shot shotObj = Shot();
	shotObj.AddFrames(&frameObj);

	cout << shotObj.GetFrames()->GetFrame() << "\n";
	//shotPointer->Clean();
	cout << shotObj.GetFrames()->GetFrame() << "\n";
}

