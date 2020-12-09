#ifndef	TWEET_H					// Underscore è permesso negli identificatori
#define TWEET_H	

#include <vector>
#include <string>

struct Tweet{					// Posso nascondere l'implementazione oppure no (come in questo caso)
	std::string text;
	std::vector<std::string> hashtags;
};

void tweetwrite(Tweet);
Tweet tweetread();

#endif