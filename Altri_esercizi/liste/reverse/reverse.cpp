void reverse(list& l){
	// Passo base
	list L1;
	if((l==nullptr) || (L->next == nullptr)) return;
	
	// Passo ricorsivo
	L1 = L->next;
	reverse(L1);
	L->next->next = L;
	L->next = nullptr;
	L = L1;
}
