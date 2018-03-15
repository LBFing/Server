#include "gen_proto/msg.pb.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{

	lm::helloworld msg1;
	msg1.set_id(10222);
	msg1.set_str("hellosdfasfsafasfa");
	fstream output("./log", ios::out | ios::trunc | ios::binary);

	if(!msg1.SerializeToOstream(&output))
	{
		cerr << "Failed to write msg." << endl;
		return -1;
	}
	return 0;
}
