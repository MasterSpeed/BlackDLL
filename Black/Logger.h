#ifndef LOGGER
#define LOGGER


using namespace std;

class Logger{

public:
	void elog(string message);
	void elog(LPCWSTR message);
	void elog(LPCSTR * message);
	void elog(char * message);
};
#endif