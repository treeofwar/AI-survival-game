#include <iostream>
#include <random>
#include <ctime>
#include "Island.h"
using namespace std;

int main() {
	Island boi;
	srand(clock());
	cout << "Day: 0" << endl;
	boi.initGrid();
	boi.PrintGrid();
	boi.UpdateGrid();
	cout << "                            _.--." << endl;
	cout << "                        _.-'_:-'||" << endl;
	cout << "                    _.-'_.-::::'||" << endl;
	cout << "               _.-:'_.-::::::'  ||" << endl;
	cout << "             .'`-.-:::::::'     ||" << endl;
	cout << "            /.'`;|:::::::'      ||_" << endl;
	cout << "           ||   ||::::::'     _.;._'-._" << endl;
	cout << "           ||   ||:::::'  _.-!oo @.!-._'-." << endl;
	cout << "           \'.  ||:::::.-!()oo @!()@.-'_.|" << endl;
	cout << "            '.'-;|:.-'.&$@.& ()$%-'o.'\0||" << endl;
	cout << "              `>'-.!@%()@'@_%-'_.-o _.|'||" << endl;
	cout << "               ||-._'-.@.-'_.-' _.-o  |'||" << endl;
	cout << "               ||=[ '-._.-\0/.-'    o |'||" << endl;
	cout << "               || '-.]=|| |'|      o  |'||" << endl;
	cout << "               ||      || |'|        _| ';" << endl;
	cout << "               ||      || |'|    _.-'_.-'" << endl;
	cout << "               |'-._   || |'|_.-'_.-'" << endl;
	cout << "               '-._'-.|| |' `_.-'" << endl;
	cout << "                    '-.||_/.-'" << endl;
}

