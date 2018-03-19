#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <chrono>

using namespace std;

typedef deque<string> Prefix;
map<Prefix, vector<string>> statetab;


const int NPREF = 2;
const char NONWORD[] ="\n";
int MAXGEN = 1000;

void build(Prefix&, istream&);
void generate(int nwords);
void add(Prefix&, const string&);

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int nwords = MAXGEN;
	Prefix prefix;

	for(int i=0; i < NPREF; i++)
		add(prefix, NONWORD);
	build(prefix, cin);
	add(prefix, NONWORD);
	generate(nwords);
	cout << "\n";
	return 0;
}

void build(Prefix& prefix, istream& in){
	std::string buf;

	while(in >> buf)
		add(prefix, buf);
}

void add(Prefix& prefix, const string& s){
	if(prefix.size() == NPREF){
		statetab[prefix].push_back(s);
		prefix.pop_front();
	}
	prefix.push_back(s);
}

void generate(int nwords){
	Prefix prefix;
	int i;

	for(i=0; i<NPREF; i++)
		add(prefix, NONWORD);
	for(i=0; i<nwords; i++){
		vector<string>& suf = statetab[prefix];
		const string& w = suf [rand() % suf.size()];
		if(w == NONWORD)
			break;
		cout << w << " ";
		prefix.pop_front();
		prefix.push_back(w);
	}
}