#include <iostream>
#include <vector>

//sad
std::string myString;
void CountWords();
std::vector<std::string> words;

int main(int argc, char const *argv[])
{
	CountWords();
	cout << "\n"
}

void CountWords()
{
	int wordCount = 0;
	int repeatCount = 0;
	int sad;
	words.push_back(myString); //The first word


	while(std::cin >> myString) {
		wordCount++;
		if (myString == "death" || myString == "dead" || myString == "lost" || myString == "ugly" || myString == "sad"){
			sad++;
		}
		for(unsigned int counter = 0; counter!=words.size(); ++counter) {
			//Check if we already have this word in our list
			if(myString!=words[counter]) {
				if(counter==words.size()-1) {
					words.push_back(myString);
					repeatCount+=1;
				}
			}
	        }
	}

	std::cout << "There are " << wordCount - sad << " words and " << sad << " sad words in this string\n";
	std::cout << "There are " << repeatCount << " distinct words\n";

}