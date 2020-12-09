#include <iostream>

#include "tweet.h"

void tweetwrite(Tweet t){
	std::cout << "Testo: " << t.text << std::endl;
	std::cout << "Hashtags: ";
	for (int i = 0; i < t.hashtags.size(); ++i)
		std::cout << t.hashtags.at(i) << " ";
	std::cout << std::endl;
}

Tweet tweetread(){
	Tweet t;
	std::cout << "Inserisci il testo (1 parola sola): ";
	std::cin >> t.text;

	// Lookahead
	std::cout << "Inserisci le hashtag: ";
	std::string input;
	std::cin >> input;

	while(input[0] == '#'){
		t.hashtags.push_back(input);
		std::cin >> input;
	}
	
	return t;
}

