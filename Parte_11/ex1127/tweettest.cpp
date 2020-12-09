#include "tweet.h"

#include <iostream>

const int SIZE = 3;

void printalltweets(std::vector<Tweet> tl, int num){
	if(num<tl.size()){
		tweetwrite(tl[num]);
		printalltweets(tl, num+1);
	}
}

int main(){
	std::vector<Tweet> tweetList;
	for (int i = 0; i < SIZE; ++i)
		tweetList.push_back(tweetread());
	
	printalltweets(tweetList, 0);
}
