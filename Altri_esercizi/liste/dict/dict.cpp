bool search_word(string s, dictionary d){
	int index = find_key(s); // abaco -> 0
	bag_of_words b = d.d[index];
	while(b != nullptr){
		if (b->info == s)
			return true;
		b = b->next;
	}
	return false;
}
