while (<>) {
	s/\([^)]*\)/()/g;
	print;
}