//继承谁引用谁
#include <string>
using namespace std;

class Worker
{
public:
	Worker(string code = "001");
	virtual ~Worker();
	void work();
	void carry();
protected:
	string m_strCode;
};